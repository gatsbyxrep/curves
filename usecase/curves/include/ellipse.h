#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "curve3abstract.h"

namespace Curves {
    class Ellipse : public Curve3Abstract
    {
    public:
        Ellipse(double x, double y, double radX, double radY);

        // CurveInterface
        Math::Point3 getPoint(double t) const override;
        Math::Vector3 getFirstDeriviative(double t) const override;
        void printInfoAt(std::ostream& ost, double t) const override;
    private:
        double radX = 0.0;
        double radY = 0.0;
    };
}

#endif // ELLIPSE_H
