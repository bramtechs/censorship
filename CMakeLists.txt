cmake_minimum_required(VERSION 3.2)
project (censorship)

set(SOURCE_FILES src/censorship.cpp)

include_directories("src")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DDEBUG_BUILD")
add_executable(${PROJECT_NAME} ${SOURCE_FILES})
