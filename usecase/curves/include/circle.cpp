#include <ostream>

#include "circle.h"


Curves::Circle::Circle(double x, double y, double radius)
    : Curve3Abstract(x, y), radius(radius) {}

Math::Point3 Curves::Circle::getPoint(double t) const {
    return Math::Point3 {center.x + radius * std::cos(t), center.y + radius * std::sin(t), 0.0 };
}

Math::Vector3 Curves::Circle::getFirstDeriviative(double t) const {
    return Math::Vector3 { -radius * std::sin(t), radius * std::cos(t), 0.0 };
}

void Curves::Circle::printInfoAt(std::ostream& ost, double t) const {
    ost << "Circle info" << std::endl;
    Curve3Abstract::printInfoAt(ost, t);
    ost << "Radius:" << radius << std::endl;
    ost << std::endl;
}

double Curves::Circle::getRadius() const {
    return radius;
}
