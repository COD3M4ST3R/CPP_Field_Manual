#	CMAKE
#		Name: 
#			CMakeLists.txt
#		Description:
#			CMake file for top root of project
#		Author:
#			COD3M4ST3R
#		Date:
#			27.09.2023
#
#	LOG
#		27.09.2023:
#			COD3M4ST3R -> File has been initialized	


### ATTRIBUTES
# Set the mimimum required version for CMake.
cmake_minimum_required(
    VERSION 3.22.1
)


# Set the CPP version
set(
    CMAKE_CXX_STANDARD 23 

)    
message("- CXX version has been set to 23")

set(
    CMAKE_CXX_STANDARD_REQUIRED ON
)
set(
    CMAKE_CXX_EXTENSIONS OFF
)



# Set the project name
project(myproject) 



### CHANGE DEFAULT BUILD TYPE
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    message("Setting default build type to 'RelWithDebInfo' as none was specified.")
    set(CMAKE_BUILD_TYPE RelWithDebInfo CACHE STRING "Choose the type of the build." FORCE)
    set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release" "MinSizeRel" "RelWithDebInfo")
endif()



### CHANGE DEFAULT INSTALL LOCATION
if(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
    message(STATUS "Setting default CMAKE_INSTALL_PREFIX path to ${CMAKE_BINARY_DIR}/install")
    set(CMAKE_INSTALL_PREFIX "${CMAKE_BINARY_DIR}/install" CACHE STRING "The path to use for make install" FORCE)
endif()


### ADD LIBRARIES
# Generate the static library from the library sources
add_library(
    MyLibrary STATIC ${PROJECT_SOURCE_DIR}/source/MyLibrary.cpp
)

# Generate the dynamic library from the library sources
add_library(
    Sort SHARED ${PROJECT_SOURCE_DIR}/source/Sort.cpp
)



### ADD HEADERS
# Add headers of the library
target_include_directories(
    MyLibrary PUBLIC ${PROJECT_SOURCE_DIR}/include
)

# Add headers of the library
target_include_directories(
    Sort PUBLIC ${PROJECT_SOURCE_DIR}/include
)



### CREATE EXECUTABLE
# Create an executable file 
add_executable(
    ${CMAKE_PROJECT_NAME} ${PROJECT_SOURCE_DIR}/main/main.cpp
)


### LINK LIBRARIES
# Link the library with it's binary files
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE
    MyLibrary
    Sort
    ${Boost_LIBS}
)



### SET PER-TARGET C++ FLAG ON LIBRARY - EXCLUDE EX2 HEADER FROM COMPILE
target_compile_definitions(
    ${CMAKE_PROJECT_NAME} PRIVATE EX2
)



### INSTALL
# Location of the binaries that will be created for installation
install(
    TARGETS ${CMAKE_PROJECT_NAME} DESTINATION bin
)
# Location of the libraries that will be created for installation
install(
    TARGETS ${CMAKE_PROJECT_NAME} LIBRARY DESTINATION lib
)
# Location of the headers that will be created for installation
install(
    DIRECTORY ${PROJECT_SOURCE_DIR}/include/ DESTINATION include
)
# Config
install(
    FILES myproject.conf DESTINATION etc
)



