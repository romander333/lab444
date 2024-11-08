

#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <cmath>
#include "Solid.h"

class Circle : public Solid {
private:
    double radius;

public:
    Circle() : radius(0) {}
    Circle(double radius) : radius(radius) {}

    void inputDimensions() override {
        std::cout << "Calculating the Area of a Circle:" << std::endl;
        std::cout << "Enter radius (R): ";
        std::cin >> radius;
    }

    double getArea() const override {
        return 3.14 * pow(radius, 2);
    }

    double getCircumference() const override {
        return 2 * 3.14 * radius;
    }
};

#endif // CIRCLE_H

