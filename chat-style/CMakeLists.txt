cmake_minimum_required(VERSION 3.20)

project(chat-style VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(chat-style SHARED src/main.cpp)

set_target_properties(chat-style PROPERTIES OUTPUT_NAME "chat-style")

target_compile_definitions(chat-style PRIVATE EXPORTING_DLL)

include_directories(src)

set(CYRUS_LIB_PATH "${CMAKE_CURRENT_SOURCE_DIR}/src/Cyrus/lib/dbghelp.lib")
target_link_libraries(chat-style PRIVATE ${CYRUS_LIB_PATH})

if (MSVC)
    target_compile_options(chat-style PRIVATE /permissive- /Zc:preprocessor /Zc:__cplusplus)
endif()