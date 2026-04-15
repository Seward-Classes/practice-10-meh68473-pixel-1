/*
AI Usage Disclosure:
Ai was used to help understand structure. All code was reviewed and adapted by me.
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <memory>
#include <iomanip>

#include "Shape.h"
#include "Shape.cpp" // temporary workaround

void printAllAreas(const std::vector<std::unique_ptr<Shape>>& shapes) {
    for (const auto& shape : shapes) {
        shape->display();
        std::cout << "Area: " << std::fixed << std::setprecision(4)
                  << shape->getArea() << "\n\n";
    }
}

int main() {
    std::ifstream file("shapes.txt");

    if (!file) {
        std::cerr << "Error: Could not open shapes.txt\n";
        return 1;
    }

    std::vector<std::unique_ptr<Shape>> shapes;

    std::string line;
    int lineNumber = 0;

    while (std::getline(file, line)) {
        lineNumber++;
        std::istringstream iss(line);

        std::string type;
        iss >> type;

        if (type == "rectangle") {
            double w, h;
            if (iss >> w >> h) {
                shapes.push_back(std::make_unique<Rectangle>(w, h));
            } else {
                std::cerr << "Error on line " << lineNumber << ": Invalid rectangle data\n";
            }
        }
        else if (type == "circle") {
            double r;
            if (iss >> r) {
                shapes.push_back(std::make_unique<Circle>(r));
            } else {
                std::cerr << "Error on line " << lineNumber << ": Invalid circle data\n";
            }
        }
        else {
            std::cerr << "Error on line " << lineNumber << ": Unknown shape type\n";
        }
    }

    printAllAreas(shapes);

    return 0;
}