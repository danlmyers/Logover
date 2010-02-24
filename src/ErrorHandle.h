/* Logover is a library for cross platform Logging
 * Copyright (C) 2010  Daniel Myers <dan@moird.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 */
 
 //Specific Log Error handles.

#ifndef LOGOVER_ERRORHANDLE_H_
#define LOGOVER_ERRORHANDLE_H_
#include <boost/exception/all.hpp>
#include <errno.h>
#include <stdexcept>
#include <string>

namespace Logover{
	namespace Error{

		//Additional Error Information
		typdef boost::error_info<struct tag_errno,int> errno_info; //General Error Number
		typdef boost::error_info<struct tag_function,std::string> function_info; //Name of the function
		typdef boost::error_info<struct tag_file_name,std::string> file_name_info; //File Name info
		
		//Error Identifiers
		struct General : virtual boost::exception, virtual std::exception;
		struct File_Not_Found : virtual General;
		struct File_IO : virtual General;


	}
}
#endif /*LOGOVER_ERRORHANDLE_H_ */