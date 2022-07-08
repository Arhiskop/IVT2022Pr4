#include "Paralelogram_H.h"
#include <iostream>
#include <cmath>

using namespace std;

namespace ParallelogramLibrary
{
	double Parallelogram::estli(double a, double b, double c, double d)
	{

		if (a == c && b == d)
		{
			cout << "Данный четырёхугольник - параллелограмм " << endl;
		}
		else
			cout << "Данный четырёхугольник не является параллелограммом" << endl;
		return 0;
	}
	double Parallelogram::S(double a, double h)
	{
	
		return a * h;
	}
	double Parallelogram::P(double a, double b)
	{

		return 2 * a + 2 * b;
	}
	double Parallelogram::os_angle(double a, double b, double h)
	{

		double k = h / b;
		return asin(k) * 57.3;
	}
}