cmake_minimum_required(VERSION 3.10)
project(MeshViewer)

set(CMAKE_CXX_STANDARD 20)

# Пошук бібліотек
find_package(glm CONFIG REQUIRED)
find_package(glfw3 CONFIG REQUIRED)

# Додавання виконуваного файлу
add_executable(MeshViewer
    main.cpp
    OpenglWindow.h
    OpenglWindow.cpp
    OpenglRenderSystem.h
    OpenglRenderSystem.cpp
    glad.c)

# Підключення бібліотек
target_link_libraries(MeshViewer PRIVATE glfw)

target_include_directories(MeshViewer PRIVATE ${CMAKE_SOURCE_DIR})

target_compile_definitions(MeshViewer PRIVATE GLFW_INCLUDE_NONE)

