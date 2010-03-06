/* This file is part of Logover
 * Copyright (C) 2010  Daniel Myers dan<at>moird.com
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the Lesser GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * Lesser GNU General Public License for more details.
 *
 * You should have received a copy of the Lesser GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 */

//Event Interface
#ifndef LOGOVER_LOGINT_H_
#define LOGOVER_LOGINT_H_
#include <boost/lexical_cast.hpp>
#include <boost/foreach.hpp>
#include <string>
#include <list>
#include <iostream>
#include "logover.h"
#include "syslog.h" //this will need to be wrapped into a ifdef
#include "ErrorHandle.h"

namespace Logover{
	class EventInt{
	public:
		EventInt(std::string);
		virtual ~EventInt();
	};


}
#endif /* LOGOVER_LOGINT_H_ */