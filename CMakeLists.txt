cmake_minimum_required(VERSION 3.10)
project(MeshViewer)

set(CMAKE_CXX_STANDARD 20)

# Пошук бібліотек
find_package(glm CONFIG REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
find_package(OpenGL REQUIRED)

set(GLAD_FILES glad/glad.h KHR/khrplatform.h glad.c)

# Додавання виконуваного файлу
add_executable(MeshViewer
    main.cpp
    OpenglWindow.h
    OpenglWindow.cpp
    OpenglRenderSystem.h
    OpenglRenderSystem.cpp
    ${GLAD_FILES})

# Підключення бібліотек
target_link_libraries(MeshViewer ${OPENGL_LIBRARIES} glfw)
