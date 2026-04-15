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

Circle::Circle(double r) : radius(r) {}

double Circle::getArea() const {
    return M_PI * radius * radius;
}

void Circle::display() const {
    std::cout << "Circle (radius: " << radius << ")\n";
}
