#ifndef HELIX3_H
#define HELIX3_H

#include "curve3abstract.h"

namespace Curves {
    class Helix3 : public Curve3Abstract {
    public:
        Helix3(double x, double y, double radius, double step);
        // CurveInterface
        Math::Point3 getPoint(double t) const override;
        Math::Vector3 getFirstDeriviative(double t) const override;
        void printInfoAt(std::ostream& ost, double t) const override;
    private:
        double radius = 0.0;
        double step = 0.0;
    };
}

#endif // HELIX3_H
