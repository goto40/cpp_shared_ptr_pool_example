cmake_minimum_required(VERSION 3.0)

project(myproject)

# set compiler flags
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)

set(SRCDIR .)

# add include_directories
include_directories(${SRCDIR})

# get all source files
file(GLOB SRC "${SRCDIR}/*.cpp")

# define executable
add_executable(
    ${PROJECT_NAME}
    ${SRC}
)

