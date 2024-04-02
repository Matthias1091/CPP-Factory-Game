cmake_minimum_required(VERSION 3.6)
project(FactoryGame VERSION 1.0 LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_GENERATOR_PLATFORM x64)
set(MY_SOURCE_FILES
"C:/Users/BenutzerIn/Documents/Visual Studio 2022/Projects/ConsoleApp1/ConsoleApplication1/ColorPalette.cpp"
"C:/Users/BenutzerIn/Documents/Visual Studio 2022/Projects/ConsoleApp1/ConsoleApplication1/ConsoleApplication1.cpp"
"C:/Users/BenutzerIn/Documents/Visual Studio 2022/Projects/ConsoleApp1/ConsoleApplication1/Window_create.cpp"
"C:/Users/BenutzerIn/Documents/Visual Studio 2022/Projects/ConsoleApp1/ConsoleApplication1/Window_OnClick.cpp"
"C:/Users/BenutzerIn/Documents/Visual Studio 2022/Projects/ConsoleApp1/ConsoleApplication1/Window_public.cpp"
)


set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT bar)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "C:/Users/BenutzerIn/Documents/Visual Studio 2022/Projects/ConsoleApp1/ConsoleApplication1/build/Debug/bin")

set(SFML_DIR "C:/Users/BenutzerIn/Documents/Visual Studio 2022/SFML/SFML-2.6.1/include/SFML")


find_package(SFML 2.6.1 COMPONENTS graphics audio REQUIRED)

add_executable(app ${MY_SOURCE_FILES})
add_executable(FactoryGame ConsoleApplication1.cpp ColorPalette.cpp Window_public.cpp Window_create.cpp Window_OnClick.cpp)

target_include_directories(FactoryGame PRIVATE 
    "C:/Users/BenutzerIn/Documents/Visual Studio 2022/Projects/ConsoleApp1/ConsoleApplication1/include"
)

target_link_libraries(FactoryGame sfml-graphics sfml-audio sfml-window sfml-system)


add_custom_command(TARGET FactoryGame POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
    "C:/Users/BenutzerIn/Documents/Visual Studio 2022/SFML/SFML-2.6.1/bin"
    $<TARGET_FILE_DIR:FactoryGame>)
