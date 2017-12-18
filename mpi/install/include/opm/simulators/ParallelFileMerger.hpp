/*
  Copyright 2016 Dr. Blatt - HPC-Simulation-Software & Services
  Copyright 2016 STATOIL AS.

  This file is part of the Open Porous Media project (OPM).

  OPM is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  OPM is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with OPM.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef OPM_PARALLELFILEMERGER_HEADER_INCLUDED
#define OPM_PARALLELFILEMERGER_HEADER_INCLUDED

#include <memory>
#include <iostream>

#include <boost/filesystem.hpp>
#include <boost/filesystem/fstream.hpp>
#include <boost/regex.hpp>

namespace Opm
{
namespace detail
{

namespace fs = boost::filesystem;

/// \brief A functor that merges multiple files of a parallel run to one file.
///
/// Without care multiple processes might log messages in a parallel run.
/// Non-root processes will do that to seperate files
/// <basename>.<rank>.<extension. This functor will append those file
/// to usual ones and delete the other files.
class ParallelFileMerger
{
public:
    /// \brief Constructor
    /// \param output_dir The output directory to use for reading/Writing.
    /// \param deckanme The name of the deck.
    ParallelFileMerger(const fs::path& output_dir,
                       const std::string& deckname)
        : debugFileRegex_("\\."+deckname+"\\.\\d+\\.DEBUG"),
          logFileRegex_(deckname+"\\.\\d+\\.PRT")
    {
        auto debugPath = output_dir;
        debugPath /= (std::string(".") + deckname + ".DEBUG");
        debugStream_.reset(new fs::ofstream(debugPath,
                                            std::ofstream::app));
        auto logPath = output_dir;
        logPath /= ( deckname + ".PRT");
        logStream_.reset(new fs::ofstream(logPath,
                                          std::ofstream::app));
    }

    void operator()(const fs::path& file)
    {
        const static boost::regex regex(".+\\.(\\d+)\\..+");
        boost::smatch matches;
        std::string filename = file.filename().native();

        if ( boost::regex_match(filename, matches, regex) )
        {
            std::string rank = boost::regex_replace(filename, regex, "\\1");

            if( boost::regex_match(filename, logFileRegex_) )
            {
                appendFile(*logStream_, file, rank);
            }
            else
            {
                if (boost::regex_match(filename, debugFileRegex_)  )
                {
                    appendFile(*debugStream_, file, rank);
                }
                else
                {
                    std::cerr << "WARNING: Unrecognized file with name "
                              << filename
                              << " that might stem from a  parallel run."
                              << std::endl;
                }
            }
        }
    }
private:
    /// \brief Append contents of a file to a stream
    /// \brief of The output stream to use.
    /// \brief file The file whose content to append.
    /// \brief rank The rank that wrote the file.
    void appendFile(fs::ofstream& of, const fs::path& file, const std::string& rank)
    {
        if( fs::file_size(file) )
        {
            std::cerr << "WARNING: There has been logging to file "
                      << file.string() <<" by process "
                      << rank << std::endl;

            fs::ifstream in(file);
            of<<std::endl<< std::endl;
            of<<"=======================================================";
            of<<std::endl<<std::endl;
            of << " Output written by rank " << rank << " to file " << file.string();
            of << ":" << std::endl << std::endl;
            of << in.rdbuf() << std::endl << std::endl;
            of << "======================== end output =====================";
            of << std::endl;
            in.close();
        }
        fs::remove(file);
    }

    /// \brief Regex to capture .*.DEBUG
    boost::regex debugFileRegex_;
    /// \brief Regex to capture  *.PRT
    boost::regex logFileRegex_;
    /// \brief Stream to *.DEBUG file
    std::unique_ptr<fs::ofstream> debugStream_;
    /// \brief Stream to *.PRT file
    std::unique_ptr<fs::ofstream> logStream_;
};
} // end namespace detail
} // end namespace OPM
#endif // end header guard
