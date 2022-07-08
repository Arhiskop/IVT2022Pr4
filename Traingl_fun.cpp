#include "Triangle_H.h"
#include <cmath>
#include <iostream>

using namespace std;

namespace TriangleLibrary
{
    double Triangle::S(double a, double b, double c)
    {
        return sqrt(((a + b + c) / 2) * (((a + b + c) / 2) - a) * (((a + b + c) / 2) - b) * (((a + b + c) / 2) - c));
    }

    double Triangle::P(double a, double b, double c)
    {
        return a + b + c;
    }

    double Triangle::estli(double a, double b, double c)
    {
        if ((a + b > c) and (a + c > b) and (b + c > a))
            cout << "Треугольник существует" << endl;
        else
            cout << "Треугольник не существует" << endl;
        return 0;
    }

    double Triangle::angleAB(double a, double b, double c)
    {

        return acos((pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2 * a * b));
    }
    double Triangle::angleBC(double a, double b, double c)
    {

        return acos((pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * b * c));
    }
    double Triangle::angleAC(double a, double b, double c)
    {

        return acos((pow(a, 2) + pow(c, 2) - pow(b, 2)) / (2 * a * c));
    }
}

