

// how to build a cmkae build file:
// 1. open the Developer Command Promt for Vs
// 2. change the path to: cd build
// 3. write: cmake ..
// 4. change path back to the project folder
// 5. write: cmake --build build


#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
#include <map>
#include "Class.h"
#include "ColorPalette.h"
#include "Window.h"




int main() {
    Window window;
    window.create_objects();

    return 0;
}

