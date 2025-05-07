cmake_minimum_required(VERSION 3.29)
project(SimpleOpenGL)

set(CMAKE_CXX_STANDARD 20)

find_package(OpenGL REQUIRED)

add_subdirectory(include/GLFW)

include_directories(
        include/GLFW/include
        ${OPENGL_INCLUDE_DIR}
)

add_executable(SimpleOpenGL main.cpp)
target_link_libraries(SimpleOpenGL glfw ${OPENGL_LIBRARIES})