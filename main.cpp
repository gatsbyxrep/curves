#include <iostream>
#include <algorithm >

#include <cmath>

#include "curves/curves3factory.h"

int main()
{
    Curves::CircleFactory cFactory {
        RealDist {-100.0, 100.0},
        RealDist {-100.0, 100.0},
        RealDist {1.0, 50.0}
    };

    Curves::EllipseFactory eFactory {
        RealDist {-100.0, 100.0},
        RealDist {-100.0, 100.0},
        RealDist {1.0, 50.0},
        RealDist {1.0, 50.0}
    };

    Curves::Helix3Factory hFactory {
        RealDist {-100.0, 100.0},
        RealDist {-100.0, 100.0},
        RealDist {1.0, 50.0},
        RealDist {1.0, 50.0}
    };

    std::vector<Curves::CurveFactoryInterface*> factories {
        &cFactory, &eFactory, &hFactory
    };

    auto curves = Curves::Curves3Factory::createCurves(factories, 10);
    for(const auto& curve : curves) {
        curve->printInfoAt(std::cout, M_PI / 4);
    }
    auto circles = Curves::Curves3Factory::getPointersOnCircleFrom(curves);
    std::sort(circles.begin(), circles.end(), [](std::shared_ptr<Curves::Circle> a, std::shared_ptr<Curves::Circle> b) {
        return a->getRadius() < b->getRadius();
    });
    std::cout << std::endl << "----Circles----" << std::endl;
    for(const auto& circle : circles) {
        circle->printInfoAt(std::cout, M_PI / 4);
    }
    double sum = 0.0;
    for(size_t i = 0; i < circles.size(); i++) {
        sum += circles[i]->getRadius();
    }
    std::cout << "Circels radiuses sum: " << sum << std::endl;


    return 0;
}
