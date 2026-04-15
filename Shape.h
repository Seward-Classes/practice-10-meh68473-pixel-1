#pragma once
#include <iostream>

class Shape {
public:
    virtual double getArea() const = 0;   // pure virtual
    virtual void display() const;         // virtual
    virtual ~Shape() = default;           // virtual destructor
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h);
    double getArea() const override;
    void display() const override;
};