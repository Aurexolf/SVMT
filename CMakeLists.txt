cmake_minimum_required(VERSION 3.15)
project(SVMT)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

set(CMAKE_AUTOMOC ON)

add_executable(SVMT main.cpp Qt/SVMTMainGui.cpp Qt/SVMTMainGui.h Qt/SVMTGui.h)
target_link_libraries(SVMT Qt5::Core Qt5::Widgets)