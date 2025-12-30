cmake_minimum_required(VERSION 3.23)

project(PasswordManager VERSION 1.0 LANGUAGES CXX)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(PasswordManager
    src/main.cpp
    gui/MainWindow.cpp
    gui/MainWindow.h 
)

target_include_directories(PasswordManager 
    PRIVATE 
    gui
)

#configuration for QT to check:
set_target_properties(PasswordManager PROPERTIES
    AUTOMOC ON  # Tells CMake to automatically run moc on all headers with Q_OBJECT
    AUTOUIC OFF # Not using the .ui file
    AUTORCC OFF # IDK, don't touch ...
)

target_link_libraries(PasswordManager 
    PUBLIC
    Qt6::Widgets
)