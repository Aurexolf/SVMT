cmake_minimum_required(VERSION 3.12.4)
project(SVMT)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

#Determine operating system and compiler
if (WIN32)
    set(OS "win")
    if (MINGW)
        set(COMP "mingw")
    elseif (MSVC)
        set(COMP "msvc")
    elseif (MSYS)
        set(COMP "msys")
    endif ()
    #TODO:Check actual values for the below compilers
elseif (APPLE)
    set(OS "mac")
    set(COMP "xcode")
elseif (UNIX)
    set(OS "linux")
    set(COMP "gcc")
endif ()

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

set(CMAKE_AUTOMOC ON)

add_executable(SVMT main.cpp Qt/SVMTMainGui.cpp Qt/SVMTMainGui.h Qt/SVMTGui.h Util.cpp Util.h)
target_link_libraries(SVMT Qt5::Core Qt5::Widgets)

#TODO:Make 'debug' not hard-coded
file(GLOB QT_DLLS "${CMAKE_SOURCE_DIR}/Qt/lib/${OS}/${COMP}/debug/*")
set(QT_PLATFORMS "${CMAKE_SOURCE_DIR}/Qt/lib/${OS}/${COMP}/debug/platforms")

#Leave this just for windows right now
if (WIN32)
    add_custom_command(
            TARGET SVMT POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy
            ${QT_DLLS} ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
    )

    add_custom_command(
            TARGET SVMT POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy_directory
            ${QT_PLATFORMS} ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/platforms
    )
endif ()
