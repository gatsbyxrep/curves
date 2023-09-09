#ifndef CIRCLE_H
#define CIRCLE_H

#include "curve3abstract.h"

#include <ostream>

namespace Curves {
    class Circle : public Curve3Abstract {
    public:
        Circle(double x, double y, double radius);
        // CurveInterface interface
        Math::Point3 getPoint(double t) const override;
        Math::Vector3 getFirstDeriviative(double t) const override;
        void printInfoAt(std::ostream& ost, double t) const override;
        double getRadius() const;
    private:
        double radius = 0.0;
    };
}


#endif // CIRCLE_H
