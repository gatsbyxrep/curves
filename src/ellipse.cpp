#include "ellipse.h"

Curves::Ellipse::Ellipse(double x, double y, double radX, double radY)
    : Curve3Abstract(x, y), radX(radX), radY(radY) {}

Math::Point3 Curves::Ellipse::getPoint(double t) const {
    return Math::Point3 {center.x + radX * std::cos(t), center.y + radY * std::sin(t), 0.0};
}

Math::Vector3 Curves::Ellipse::getFirstDeriviative(double t) const {
    return Math::Vector3 {-radX * std::sin(t), radY * std::cos(t), 0.0};
}

void Curves::Ellipse::printInfoAt(std::ostream &ost, double t) const {
    ost << "Ellipse info" << std::endl;
    Curve3Abstract::printInfoAt(ost, t);
    ost << "Radius X: " << radX << std::endl;
    ost << "Radius Y: " << radY << std::endl;
    ost << std::endl;
}


