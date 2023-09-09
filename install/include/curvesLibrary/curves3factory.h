#ifndef CURVES3FACTORY_H
#define CURVES3FACTORY_H

#include <vector>
#include <memory>
#include <random>
#include "circle.h"
#include "curve.h"




namespace Curves {
    using RealDist = std::uniform_real_distribution<double>;
    class CurveFactoryInterface {
    public:
        virtual std::shared_ptr<CurveInterface> create() = 0;
    };

    class CircleFactory : public CurveFactoryInterface {
    private:
        Curves::RealDist x;
        Curves::RealDist y;
        Curves::RealDist radius;
    public:
        CircleFactory(RealDist x, RealDist y, RealDist radius);
        std::shared_ptr<CurveInterface> create() override;
    };

    class EllipseFactory : public CurveFactoryInterface {
    private:
        RealDist x;
        RealDist y;
        RealDist radiusX;
        RealDist radiusY;
    public:
        EllipseFactory(RealDist x, RealDist y, RealDist radiusX, RealDist radiusY);
        std::shared_ptr<CurveInterface> create() override;
    };

    class Helix3Factory : public CurveFactoryInterface {
    private:
        RealDist x;
        RealDist y;
        RealDist radius;
        RealDist step;
    public:
        Helix3Factory(RealDist x, RealDist y, RealDist radius, RealDist step);
        std::shared_ptr<CurveInterface> create() override;
    };


    class Curves3Factory
    {
    public:
        static std::vector<std::shared_ptr<CurveInterface>> createCurves(const std::vector<CurveFactoryInterface *>& factories, size_t count);
        static std::vector<std::shared_ptr<Circle>> getPointersOnCircleFrom(std::vector<std::shared_ptr<CurveInterface>>& curves);
    };
}

#endif // CURVES3FACTORY_H
