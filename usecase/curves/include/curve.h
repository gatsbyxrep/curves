#ifndef CURVE_H
#define CURVE_H

#include "point3.h"
#include "vector3.h"
#include <ostream>

namespace Curves {
    class CurveInterface
    {
        public:
            virtual ~CurveInterface() {}
            virtual Math::Point3 getPoint(double t) const = 0;
            virtual Math::Vector3 getFirstDeriviative(double t) const = 0;
            virtual void printInfoAt(std::ostream& ost, double t) const = 0;
    };
}
#endif // CURVE_H
