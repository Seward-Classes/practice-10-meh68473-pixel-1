#include "Shape.h"
#include <cmath>
#include <iomanip>

// Base display
void Shape::display() const {
    std::cout << "Generic Shape\n";
}

// Rectangle
Rectangle::Rectangle(double w, double h) : width(w), height(h) {}

double Rectangle::getArea() const {
    return width * height;
}

void Rectangle::display() const {
    std::cout << "Rectangle (" << std::fixed << std::setprecision(1)
              << width << " x " << height << ")\n";
}

// Circle
Circle::Circle(double r) : radius(r) {}

double Circle::getArea() const {
    return M_PI * radius * radius;
}

void Circle::display() const {
    std::cout << "Circle (radius: " << std::fixed << std::setprecision(1)
              << radius << ")\n";
}