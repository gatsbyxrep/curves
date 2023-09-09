#include "helix3.h"

Curves::Helix3::Helix3(double x, double y, double radius, double step)
    : Curve3Abstract(x, y), radius(radius), step(step) {}

Math::Point3 Curves::Helix3::getPoint(double t) const {
    return Math::Point3 {
         center.x + radius * t * std::cos(t),
         center.y + radius * t * std::sin(t),
         step * t + center.z
    };
}

Math::Vector3 Curves::Helix3::getFirstDeriviative(double t) const {
    return Math::Vector3 {
         radius * (std::cos(t) - t * std::sin(t)),
         radius * (std::sin(t) + t * std::cos(t)),
         step
    };
}

void Curves::Helix3::printInfoAt(std::ostream &ost, double t) const{
    ost << "Helix info" << std::endl;
    Curve3Abstract::printInfoAt(ost, t);
    ost << "Radius: " << radius << std::endl;
    ost << "Step: " << step << std::endl;
    ost << std::endl;
}
