#include <iostream>
#include <random>
#include <stdexcept>

#include "curves3factory.h"
#include "circle.h"
#include "ellipse.h"
#include "helix3.h"

Curves::CircleFactory::CircleFactory(Curves::RealDist x, Curves::RealDist y, Curves::RealDist radius)
    : x(x), y(y), radius(radius) {
    if(radius.min() <= 0.0 || radius.max() <= 0.0) {
        throw std::runtime_error("Radius distribution with negative border");
    }
}

std::shared_ptr<Curves::CurveInterface> Curves::CircleFactory::create() {
    std::mt19937 eng { std::random_device{}() };
    return std::make_shared<Circle>(x(eng), y(eng), radius(eng));
}

Curves::EllipseFactory::EllipseFactory(RealDist x, RealDist y, RealDist radiusX, RealDist radiusY)
    : x(x), y(y), radiusX(radiusX), radiusY(radiusY) {
    if(radiusX.a() <= 0.0 || radiusX.b() <= 0.0) {
        throw std::runtime_error("Radius X distribution with negative border");
    }
    if(radiusY.a() <= 0.0 || radiusY.b() <= 0.0) {
        throw std::runtime_error("Radius Y distribution with negative border");
    }
}

std::shared_ptr<Curves::CurveInterface> Curves::EllipseFactory::create() {
    std::mt19937 eng { std::random_device{}() };
    return std::make_shared<Ellipse>(x(eng), y(eng), radiusX(eng), radiusY(eng));
}

Curves::Helix3Factory::Helix3Factory(RealDist x, RealDist y, RealDist radius, RealDist step)
    :  x(x), y(y), radius(radius), step(step) {
    if(radius.a() <= 0.0 || radius.b() <= 0.0) {
        throw std::runtime_error("Radius distribution with negative border");
    }
}

std::shared_ptr<Curves::CurveInterface> Curves::Helix3Factory::create() {
    std::mt19937 eng { std::random_device{}() };
    return std::make_shared<Helix3>(x(eng), y(eng), radius(eng), step(eng));
}

std::vector<std::shared_ptr<Curves::CurveInterface> > Curves::Curves3Factory::createCurves(const std::vector<CurveFactoryInterface*>& factories, size_t count) {
    std::vector<std::shared_ptr<CurveInterface>> curves;
    curves.reserve(count);
    std::mt19937 eng { std::random_device{}() };
    std::uniform_int_distribution<> dist{0, static_cast<int>(factories.size()) - 1};
    for(size_t i = 0; i < count; i++) {
        curves.emplace_back(factories[dist(eng)]->create());
    }
    return curves;
}

std::vector<std::shared_ptr<Curves::Circle>> Curves::Curves3Factory::getPointersOnCircleFrom(std::vector<std::shared_ptr<CurveInterface>>& curves) {
    size_t circlesCount = 0;
    for(size_t i = 0; i < curves.size(); i++) {
        if(std::dynamic_pointer_cast<Curves::Circle>(curves[i])) {
            circlesCount++;
        }
    }
    std::vector<std::shared_ptr<Curves::Circle>> circles;
    circles.reserve(circlesCount);
    for(size_t i = 0; i < curves.size(); i++) {
        std::shared_ptr<Curves::Circle> circle = std::dynamic_pointer_cast<Curves::Circle>(curves[i]);
        if(circle) {
            circles.emplace_back(circle);
        }
    }
    return circles;
}
