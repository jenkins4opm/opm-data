// -*- mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
// vi: set et ts=4 sw=4 sts=4:
/*
  This file is part of the Open Porous Media project (OPM).

  OPM is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 2 of the License, or
  (at your option) any later version.

  OPM is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with OPM.  If not, see <http://www.gnu.org/licenses/>.

  Consult the COPYING file in the top-level source directory of this
  module for the precise wording of the license and the list of
  copyright holders.
*/
/*!
 * \file
 * \brief Provides wrapper classes for the (non-AMG) preconditioners provided by
 *        dune-istl.
 *
 * In conjunction with a suitable solver backend, preconditioner wrappers work by
 * specifying the "PreconditionerWrapper" property:
 * \code
 * SET_TYPE_PROP(YourTypeTag, PreconditionerWrapper,
 *               Ewoms::Linear::PreconditionerWrapper$PRECONDITIONER<TypeTag>);
 * \endcode
 *
 * Where the choices possible for '\c $PRECONDITIONER' are:
 * - \c Jacobi: A Jacobi preconditioner
 * - \c GaussSeidel: A Gauss-Seidel preconditioner
 * - \c SSOR: A symmetric successive overrelaxation (SSOR) preconditioner
 * - \c SOR: A successive overrelaxation (SOR) preconditioner
 * - \c ILUn: An ILU(n) preconditioner
 * - \c ILU0: A specialized (and optimized) ILU(0) preconditioner
 */
#ifndef EWOMS_ISTL_PRECONDITIONER_WRAPPERS_HH
#define EWOMS_ISTL_PRECONDITIONER_WRAPPERS_HH

#include <ewoms/common/propertysystem.hh>
#include <ewoms/common/parametersystem.hh>

#include <dune/istl/preconditioners.hh>

namespace Ewoms {
namespace Properties {
NEW_PROP_TAG(Scalar);
NEW_PROP_TAG(JacobianMatrix);
NEW_PROP_TAG(OverlappingMatrix);
NEW_PROP_TAG(OverlappingVector);
NEW_PROP_TAG(PreconditionerOrder);
NEW_PROP_TAG(PreconditionerRelaxation);
} // namespace Properties

namespace Linear {
#define EWOMS_WRAP_ISTL_PRECONDITIONER(PREC_NAME, ISTL_PREC_TYPE)               \
    template <class TypeTag>                                                    \
    class PreconditionerWrapper##PREC_NAME                                      \
    {                                                                           \
        typedef typename GET_PROP_TYPE(TypeTag, Scalar) Scalar;                 \
        typedef typename GET_PROP_TYPE(TypeTag, JacobianMatrix) JacobianMatrix; \
        typedef typename GET_PROP_TYPE(TypeTag, OverlappingVector) OverlappingVector; \
                                                                                \
    public:                                                                     \
        typedef ISTL_PREC_TYPE<JacobianMatrix, OverlappingVector,               \
                               OverlappingVector> SequentialPreconditioner;     \
        PreconditionerWrapper##PREC_NAME()                                      \
        {}                                                                      \
                                                                                \
        static void registerParameters()                                        \
        {                                                                       \
            EWOMS_REGISTER_PARAM(TypeTag, int, PreconditionerOrder,             \
                                 "The order of the preconditioner");            \
            EWOMS_REGISTER_PARAM(TypeTag, Scalar, PreconditionerRelaxation,     \
                                 "The relaxation factor of the "                \
                                 "preconditioner");                             \
        }                                                                       \
                                                                                \
        void prepare(JacobianMatrix& matrix)                                    \
        {                                                                       \
            int order = EWOMS_GET_PARAM(TypeTag, int, PreconditionerOrder);     \
            Scalar relaxationFactor = EWOMS_GET_PARAM(TypeTag, Scalar, PreconditionerRelaxation);   \
            seqPreCond_ = new SequentialPreconditioner(matrix, order,           \
                                                       relaxationFactor);       \
        }                                                                       \
                                                                                \
        SequentialPreconditioner& get()                                         \
        { return *seqPreCond_; }                                                \
                                                                                \
        void cleanup()                                                          \
        { delete seqPreCond_; }                                                 \
                                                                                \
    private:                                                                    \
        SequentialPreconditioner *seqPreCond_;                                  \
    };

// the same as the EWOMS_WRAP_ISTL_PRECONDITIONER macro, but without
// an 'order' argument for the preconditioner's constructor
#define EWOMS_WRAP_ISTL_SIMPLE_PRECONDITIONER(PREC_NAME, ISTL_PREC_TYPE)        \
    template <class TypeTag>                                                    \
    class PreconditionerWrapper##PREC_NAME                                      \
    {                                                                           \
        typedef typename GET_PROP_TYPE(TypeTag, Scalar) Scalar;                 \
        typedef typename GET_PROP_TYPE(TypeTag, OverlappingMatrix) OverlappingMatrix; \
        typedef typename GET_PROP_TYPE(TypeTag, OverlappingVector) OverlappingVector; \
                                                                                \
    public:                                                                     \
        typedef ISTL_PREC_TYPE<OverlappingMatrix, OverlappingVector,            \
                               OverlappingVector> SequentialPreconditioner;     \
        PreconditionerWrapper##PREC_NAME()                                      \
        {}                                                                      \
                                                                                \
        static void registerParameters()                                        \
        {                                                                       \
            EWOMS_REGISTER_PARAM(TypeTag, Scalar, PreconditionerRelaxation,     \
                                 "The relaxation factor of the "                \
                                 "preconditioner");                             \
        }                                                                       \
                                                                                \
        void prepare(OverlappingMatrix& matrix)                                 \
        {                                                                       \
            Scalar relaxationFactor =                                           \
                EWOMS_GET_PARAM(TypeTag, Scalar, PreconditionerRelaxation);     \
            seqPreCond_ = new SequentialPreconditioner(matrix,                  \
                                                       relaxationFactor);       \
        }                                                                       \
                                                                                \
        SequentialPreconditioner& get()                                         \
        { return *seqPreCond_; }                                                \
                                                                                \
        void cleanup()                                                          \
        { delete seqPreCond_; }                                                 \
                                                                                \
    private:                                                                    \
        SequentialPreconditioner *seqPreCond_;                                  \
    };

EWOMS_WRAP_ISTL_PRECONDITIONER(Jacobi, Dune::SeqJac)
// EWOMS_WRAP_ISTL_PRECONDITIONER(Richardson, Dune::Richardson)
EWOMS_WRAP_ISTL_PRECONDITIONER(GaussSeidel, Dune::SeqGS)
EWOMS_WRAP_ISTL_PRECONDITIONER(SOR, Dune::SeqSOR)
EWOMS_WRAP_ISTL_PRECONDITIONER(SSOR, Dune::SeqSSOR)
EWOMS_WRAP_ISTL_SIMPLE_PRECONDITIONER(ILU0, Dune::SeqILU0)
EWOMS_WRAP_ISTL_PRECONDITIONER(ILUn, Dune::SeqILUn)

#undef EWOMS_WRAP_ISTL_PRECONDITIONER
}} // namespace Linear, Ewoms

#endif
