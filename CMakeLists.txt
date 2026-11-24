cmake_minimum_required(VERSION 3.16)
project(ai-upscaler-video CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(aiupscalervideo
    src/main.cpp
    src/upscale.cpp
    src/interpolate.cpp
    src/denoise.cpp
)

target_include_directories(aiupscalervideo PRIVATE include)

if(WIN32)
    target_link_libraries(aiupscalervideo PRIVATE userenv)
endif()
