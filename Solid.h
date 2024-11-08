#ifndef SOLID_H
#define SOLID_H

class Solid {
public:
    virtual void inputDimensions() = 0;
    virtual double getArea() const = 0;
    virtual double getCircumference() const = 0;

    virtual ~Solid() {}
};

#endif // SOLID_H
