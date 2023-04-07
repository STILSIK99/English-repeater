cmake_minimum_required(VERSION 3.9)

set (PROJECT_NAME English_repeater)
set(INCLUDE_PATH ${CMAKE_SOURCE_DIR}/include)
set(SOURCE_PATH ${CMAKE_SOURCE_DIR}/src)
set(CMAKE_AUTOUIC_SEARCH_PATHS ${SOURCE_PATH}/UI)

include(CMakePrintHelpers)

cmake_print_variables(CMAKE_AUTOUIC_SEARCH_PATHS)

project(${PROJECT_NAME} VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)


set(PROJECT_SOURCES


        ${SOURCE_PATH}/main.cpp
        ${SOURCE_PATH}/GUI/mainwindow.cpp
        ${SOURCE_PATH}/GUI/dataform.cpp
        ${SOURCE_PATH}/GUI/dialogform.cpp
        ${SOURCE_PATH}/GUI/repeatform.cpp

        ${SOURCE_PATH}/UI/mainwindow.ui
        ${SOURCE_PATH}/UI/dialogform.ui
        ${SOURCE_PATH}/UI/dataform.ui
        ${SOURCE_PATH}/UI/repeatform.ui

        ${INCLUDE_PATH}/GUI/mainwindow.h
        ${INCLUDE_PATH}/GUI/dataform.h
        ${INCLUDE_PATH}/GUI/dialogform.h
        ${INCLUDE_PATH}/GUI/repeatform.h

)

add_subdirectory(src)

