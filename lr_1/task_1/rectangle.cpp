#include "rectangle.h"

void Rectangle::setWidth(double width) {
        _width = width > 0 ? width : throw "Invalid width!";
} 
        
void Rectangle::setHeigth(double heigth) {
        _heigth = heigth > 0 ? heigth : throw "Invalid heigth!";
}

Rectangle::Rectangle(double width, double heigth) {
        setWidth(width);
        setHeigth(heigth);
}

double Rectangle::square(double width, double heigth) {
        return _width * _heigth;
}

double Rectangle::perimeter() {
        return (_width + _heigth) * 2;
}

double Rectangle::getWidth() {
        return _width;
} 
        
double Rectangle::getHeigth() {
        return _heigth;
}


