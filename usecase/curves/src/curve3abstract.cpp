#include "curve3abstract.h"


Curves::Curve3Abstract::Curve3Abstract(double x, double y)
    : center {x, y, 0.0} {}

void Curves::Curve3Abstract::printInfoAt(std::ostream& ost, double t) const {
    Math::Point3 point = getPoint(t);
    ost << "Point X: " << point.x << " Y:" << point.y << " Z:" << point.z << std::endl;
    Math::Vector3 vec = getFirstDeriviative(t);
    ost << "FirstDeriviative X: " << vec.x << " Y:" << vec.y << " Z:" << vec.z << std::endl;
}

Curves::Curve3Abstract::~Curve3Abstract() {}
