cmake_minimum_required(VERSION 3.16)
project(PVZ LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS 
    Core 
    Gui 
    Widgets 
    Multimedia 
    REQUIRED)

set(PROJECT_SOURCES
    src/main.cpp
    src/mainwindow.h
    src/mainwindow.cpp
    src/gamewidget.h
    src/gamewidget.cpp
    src/plant.h
    src/plant.cpp
    src/plants/peashooter.h
    src/plants/peashooter.cpp
    src/plants/sunflower.h
    src/plants/sunflower.cpp
    src/plants/wallnut.h
    src/plants/wallnut.cpp
    src/zombie.h
    src/zombie.cpp
    src/zombies/normalzombie.h
    src/zombies/normalzombie.cpp
    src/zombies/flagzombie.h
    src/zombies/flagzombie.cpp
    src/bullet.h
    src/bullet.cpp
    src/gamemanager.h
    src/gamemanager.cpp
    src/constants.h
    src/constants.cpp
    resources/resources.qrc
)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})

target_link_libraries(${PROJECT_NAME}
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
    Qt5::Multimedia
)

# 设置输出目录
set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)
