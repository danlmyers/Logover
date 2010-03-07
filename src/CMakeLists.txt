# Logover is a library for cross platform Logging
# Copyright (C) 2010  Daniel Myers dan<at>moird.com
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the Lesser GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# Lesser GNU General Public License for more details.
#
# You should have received a copy of the Lesser GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>

#Source Files
set(Logover_SRC
	logover.h logover.cpp
	ErrorHandle.h EventInt.cpp
	EventInt.h)

#VDConfig.h Creation
#configure_file(${CMAKE_SOURCE_DIR}/src/VDconfig.h.cmake
#				${CMAKE_BINARY_DIR}/src/VDconfig.h)


#Boost Libraries
set(Boost_ADDITIONAL_VERSIONS "1.42" "1.42.0")
set(Boost_USE_STATIC_LIBS   ON)
find_package(Boost 1.42 REQUIRED COMPONENTS system regex date_time filesystem)
include_directories(${Boost_INCLUDE_DIRS})
link_directories(${Boost_LIBRARY_DIRS})
set(LIBS ${LIBS} ${Boost_LIBRARIES})

#Add Executable
include_directories(${CMAKE_BINARY_DIR}/src)
add_library ( Logover STATIC ${Logover_SRC})
target_link_libraries( Logover ${LIBS})
