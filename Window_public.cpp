// 2.cpp
#include "Window.h"
#include <iostream>

Window::Window() {
    // Lade die Schriftart
    if (!font.loadFromFile("C:\\Windows\\Fonts\\Arial.ttf")) {
        std::cerr << "Failed to load font Arial from C:\\Windows\\Fonts\\Arial.ttf" << std::endl;
        exit(1);
    }
}


