#=SHEILa=======================================================================#
#  Name        : CMakeLists.txt                                                #
#  Author      : FlowerGenius<justanortherngirl58@gmail.com>                   #
#  Version     : 0.0.0                                                         #
#  Copyright   :                                                               #
#  Description : CMake configuration file                                      #
#  Module      : CppLanguage                                                   #
#  Created     : May  7, 2018                                                  #
#  Modified    :                                                               #
#==============================================================================#
cmake_minimum_required (VERSION 3.11)

set( CppLanguage_NAME "CppLanguage" )

set( CppLanguage_AUTHOR_NAME "FlowerGenius" )

set( CppLanguage_AUTHOR_MAIL "justanortherngirl58@gmail.com" )

set( CppLanguage_VERSION 1.0.0 )

set( CppLanguage_COPYRIGHT "This software is not protected" )

set( CppLanguage_LANGUAGES CXX )

set( CppLanguage_DESCRIPTION "The workspace project for the AI SHEILa" )

set( CppLanguage_DATE_CREATED "Apr 14, 2018" )

string( TIMESTAMP CppLanguage_DATE_MODIFIED  "%m %d, %y" )

# Initialize the project with some setup information.
project( ${CppLanguage_NAME} 
	VERSION     ${CppLanguage_VERSION} 
	LANGUAGES   ${CppLanguage_LANGUAGES}
	DESCRIPTION ${CppLanguage_DESCRIPTION}
)

set( CppLanguage_SOURCE_DIR "${CMAKE_CURRENT_LIST_DIR}" )

set( CppLanguage_BINARY_DIR "${CMAKE_CURRENT_LIST_DIR}/bin/${CMAKE_HOST_SYSTEM_PROCESSOR}")

option( REQUIRES_NOARG_CONSTRUCTOR "Set to ON if the library requires that every class have an empty default constructor" ON)

option( CXX_11_EXTENSIONS "Set ON to enable C++11" ON )

option( CXX_14_EXTENSIONS "Set ON to enable C++14 (implies C++11)" ON )

option( CXX_17_EXTENSIONS "Set ON to enable C++17 (implies C++14)" OFF )

option( CXX_20_EXTENSIONS "Set ON to enable C++20 (implies C++17)" OFF )

option( CMAKE_POSITION_INDEPENDENT_CODE "Set ON to activate -fPIC flag" ON )

option( BUILD_FOR_SHEILA "Set ON to activate SHEILa specific extensions" OFF )


if(REQUIRES_NOARG_CONSTRUCTOR)
set( REQUIRES_NOARG_CONSTRUCTOR true )
else()
set( REQUIRES_NOARG_CONSTRUCTOR false )
endif()

if(WIN32)

	# Set all of the following options OFF to compile for the version of the 
	# host and/or the latest Microsoft Windows (TM) version.
	
	option( WINDOWS_TARGET_BLUE 
		"Set ON to target Windows 8.1 specifically" OFF )
	
	option( WINDOWS_TARGET_WIN8 
		"Set ON to target Windows 8 specifically" OFF )
	
	option( WINDOWS_TARGET_WIN7 
		"Set ON to target Windows 7 specifically" OFF )
	
	option( WINDOWS_TARGET_WS08 
		"Set ON to target Windows Server 2008 specifically" OFF )
	
	option( WINDOWS_TARGET_VISTASP1 
		"Set ON to target Windows Vista with SP1 specifically" OFF )
	
	option( WINDOWS_TARGET_VISTA 
		"Set ON to target Windows Vista specifically" OFF )
	
	option( WINDOWS_TARGET_WS03SP2 
		"Set ON to target Windows Server 2003 with SP2 specifically" OFF )
	
	option( WINDOWS_TARGET_WS03SP1 
		"Set ON to target Windows Server 2003 with SP1 specifically" OFF )
	
	option( WINDOWS_TARGET_WS03
		"Set ON to target Windows Server 2003 specifically" OFF )
		
	option( WINDOWS_TARGET_WINXPSP3
		"Set ON to target Windows XP with SP3 specifically" OFF )
		
	option( WINDOWS_TARGET_WINXPSP2
		"Set ON to target Windows XP with SP2 specifically" OFF )
		
	option( WINDOWS_TARGET_WINXPSP1
		"Set ON to target Windows XP with SP1 specifically" OFF )
		
	option( WINDOWS_TARGET_WINXP
		"Set ON to target Windows XP specifically" OFF )
	
	if(WINDOWS_TARGET_BLUE)
		set( WINDOWS_WINNT_TARGET_VER WINBLUE )
		set( WINDOWS_NTDDI_TARGET_VER WINBLUE )
	
	elseif(WINDOWS_TARGET_WIN8)
		set( WINDOWS_WINNT_TARGET_VER WIN8 )
		set( WINDOWS_NTDDI_TARGET_VER WIN8 )
	
	elseif(WINDOWS_TARGET_WIN7)
		set( WINDOWS_WINNT_TARGET_VER WIN7 )
		set( WINDOWS_NTDDI_TARGET_VER WIN7 )
	
	elseif(WINDOWS_TARGET_WS08)
		set( WINDOWS_WINNT_TARGET_VER WS08 )
		set( WINDOWS_NTDDI_TARGET_VER WS08 )
	
	elseif(WINDOWS_TARGET_VISTASP1)
		set( WINDOWS_WINNT_TARGET_VER VISTA )
		set( WINDOWS_NTDDI_TARGET_VER VISTASP1 )
	
	elseif(WINDOWS_TARGET_VISTA)
		set( WINDOWS_WINNT_TARGET_VER VISTA )
		set( WINDOWS_NTDDI_TARGET_VER VISTA )
	
	elseif(WINDOWS_TARGET_WS03SP2)
		set( WINDOWS_WINNT_TARGET_VER WS03 )
		set( WINDOWS_NTDDI_TARGET_VER WS03SP2  )
	
	elseif(WINDOWS_TARGET_WS03SP1)
		set( WINDOWS_WINNT_TARGET_VER WS03 )
		set( WINDOWS_NTDDI_TARGET_VER WS03SP1 )
	
	elseif(WINDOWS_TARGET_WS03)
		set( WINDOWS_WINNT_TARGET_VER WS03 )
		set( WINDOWS_NTDDI_TARGET_VER WS03 )
	
	elseif(WINDOWS_TARGET_WINXPSP3)
		set( WINDOWS_WINNT_TARGET_VER WINXP )
		set( WINDOWS_NTDDI_TARGET_VER WINXPSP3 )
	
	elseif(WINDOWS_TARGET_WINXPSP2)
		set( WINDOWS_WINNT_TARGET_VER WINXP )
		set( WINDOWS_NTDDI_TARGET_VER WINXPSP2 )
	
	elseif(WINDOWS_TARGET_WINXPSP1)
		set( WINDOWS_WINNT_TARGET_VER WINXP )
		set( WINDOWS_NTDDI_TARGET_VER WINXPSP1 )
	
	elseif(WINDOWS_TARGET_WINXP)
		set( WINDOWS_WINNT_TARGET_VER WINXP )
		set( WINDOWS_NTDDI_TARGET_VER WINXP )
	
	else()
		set( WINDOWS_WINNT_TARGET_VER WINLATEST )
		set( WINDOWS_NTDDI_TARGET_VER WINLATEST )
	endif()

endif(WIN32)

	set( PROJECT_CXX_STANDARD 97 )

if(CXX_11_EXTENSIONS)
	set( PROJECT_CXX_STANDARD 11 )
endif()

if(CXX_14_EXTENSIONS)
	set( CXX_11_EXTENSIONS ON )
	set( PROJECT_CXX_STANDARD 14 )
endif()

if(CXX_17_EXTENSIONS)
	set( CXX_11_EXTENSIONS ON )
	set( CXX_14_EXTENSIONS ON )
	set( PROJECT_CXX_STANDARD 17 )
endif()

if(CXX_20_EXTENSIONS)
	set( CXX_11_EXTENSIONS ON )
	set( CXX_14_EXTENSIONS ON )
	set( CXX_17_EXTENSIONS ON )
	set( PROJECT_CXX_STANDARD 20 )
endif()

message(STATUS "${CppLanguage_NAME}: Now Working On ${CppLanguage_NAME} at ${CppLanguage_DATE_MODIFIED}")

# Create the shared library object
add_library(${CppLanguage_NAME} SHARED "${CMAKE_CURRENT_LIST_DIR}/CppLanguage.h")

target_include_directories(${CppLanguage_NAME} PRIVATE "${PROJECT_SOURCE_DIR}/../")

target_compile_features(${CppLanguage_NAME} PUBLIC cxx_std_${PROJECT_CXX_STANDARD})

# Create a configuration file the the project root from the *.h.in file
configure_file (
  "${CMAKE_CURRENT_LIST_DIR}/config/${CppLanguage_NAME}Config.h.in"
  "${CppLanguage_BINARY_DIR}/${CppLanguage_NAME}Config.h"
)

#if(WIN32)
#	configure_file (
#		"${CMAKE_CURRENT_LIST_DIR}/config/stdafx.h.in"
#		"${CMAKE_CURRENT_LIST_DIR}/include/stdafx.h"
#	)
#	
#	configure_file (
#		"${CMAKE_CURRENT_LIST_DIR}/config/targetver.h.in"
#		"${CMAKE_CURRENT_LIST_DIR}/include/targetver.h"
#	)
#endif(WIN32)
#
#configure_file (
#	"${CMAKE_CURRENT_LIST_DIR}/config/${CppLanguage_NAME}.hpp.in"
#	"${CMAKE_CURRENT_LIST_DIR}/include/${CppLanguage_NAME}.hpp"
#)

#target_sources( ${CppLanguage_NAME}
#	PUBLIC
#		"${CMAKE_CURRENT_BINARY_DIR}/CppLanguageConfig.h"
#		"${CMAKE_CURRENT_LIST_DIR}/CppLanguage.h"
#)	

target_include_directories(${CppLanguage_NAME} PUBLIC "${CppLanguage_BINARY_DIR}")

# Include the other CMakeLists in this project manually.
include("${CMAKE_CURRENT_LIST_DIR}/include/CMakeLists.txt")
include("${CMAKE_CURRENT_LIST_DIR}/src/CMakeLists.txt")

target_include_directories(${CppLanguage_NAME} PUBLIC "${CMAKE_CURRENT_LIST_DIR}")






