#include <iostream>
#include "rectangle.h"

void checkRectangle() {
    auto rect = Rectangle(2, 4);
    std::cout << "Width: " << rect.getWidth() << std::endl;
    std::cout << "Heigth: " << rect.getHeigth() << std::endl;
    std::cout << "Square: " << rect.square() << std::endl;
    std::cout << "Perimeter: " << rect.perimeter() << std::endl;
}

int main() {                   
    checkRectangle();
    return 0;                   
}  
