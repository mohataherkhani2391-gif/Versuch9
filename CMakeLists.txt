cmake_minimum_required(VERSION 3.16)

project(Streetplanner VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets LinguistTools)

set(TS_FILES Streetplanner_de_DE.ts)

qt_add_executable(Streetplanner
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    city.h city.cpp
    map.h map.cpp
    abstractmap.cpp abstractmap.h
    street.cpp street.h
    addcitydialog.h addcitydialog.cpp addcitydialog.ui
    mapio.cpp mapio.h mapionrw.cpp mapionrw.h
)

qt_add_translations(Streetplanner
    TS_FILES ${TS_FILES}
)

target_link_libraries(Streetplanner PRIVATE Qt6::Widgets)

set_target_properties(Streetplanner PROPERTIES
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS Streetplanner
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
