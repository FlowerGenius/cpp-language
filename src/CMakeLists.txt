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

target_sources( ${CppLanguage_NAME}
	PUBLIC
		"${CMAKE_CURRENT_LIST_DIR}/CppLanguage.cpp"
)

#if(WIN32)
target_sources( ${CppLanguage_NAME}
	PRIVATE
		"${CMAKE_CURRENT_LIST_DIR}/dllmain.cpp"
		"${CMAKE_CURRENT_LIST_DIR}/stdafx.cpp"
)
#endif(WIN32)


#target_include_directories(${CppLanguage_NAME} PUBLIC "${CMAKE_CURRENT_LIST_DIR}")
