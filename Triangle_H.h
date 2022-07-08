#pragma once
namespace TriangleLibrary
{
    class Triangle
    {
    public:

        static double S(double a, double b, double c);


        static double P(double a, double b, double c);


        static double estli(double a, double b, double c);


        static double angleAB(double a, double b, double c);
        static double angleBC(double a, double b, double c);
        static double angleAC(double a, double b, double c);
    };
}
