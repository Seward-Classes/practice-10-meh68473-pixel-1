#pragma once
#include <iostream>

class Shape {
public:
    virtual double getArea() const = 0;   // pure virtual
    virtual void display() const;         // virtual
    virtual ~Shape() = default;           // virtual destructor
};

