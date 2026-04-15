#include "Shape.h"

void Shape::display() const {
    std::cout << "Generic Shape\n";
}

Rectangle::Rectangle(double w, double h) : width(w), height(h) {}

double Rectangle::getArea() const {
    return width * height;
}

void Rectangle::display() const {
    std::cout << "Rectangle (" << width << " x " << height << ")\n";
}
