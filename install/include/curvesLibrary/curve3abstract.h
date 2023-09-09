#ifndef CURVE3ABSTRACT_H
#define CURVE3ABSTRACT_H

#include <cmath>
#include "curve.h"

namespace Curves {
    class Curve3Abstract : public CurveInterface
    {
    public:
        Curve3Abstract(double x, double y);
        virtual void printInfoAt(std::ostream& ost, double t) const;
        virtual ~Curve3Abstract();
    protected:
        Math::Point3 center;
    };
}

#endif // CURVE3ABSTRACT_H
