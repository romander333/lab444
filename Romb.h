

#ifndef ROMB_H
#define ROMB_H

#include <iostream>
#include "Solid.h"
using namespace std;

class Romb : public Solid {
private:
    double diagonal1;
    double diagonal2;

public:
    Romb() : diagonal1(0), diagonal2(0) {}

    void inputDimensions() override {
        std::cout << "Calculating the Area of a Romb:" << std::endl;
        std::cout << "Enter first diagonal (d1): ";
        std::cin >> diagonal1;
        std::cout << "Enter second diagonal (d2): ";
        std::cin >> diagonal2;
    }

    double getArea() const override {
        return (diagonal1 * diagonal2) / 2;
    }

    double getCircumference() const override {
        return (diagonal1 + diagonal2) * 2;
    }
};

#endif // ROMB_H

