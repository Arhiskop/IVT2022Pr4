#include "Pryamougl_H.h"
#include <iostream>
#include <cmath>

using namespace std;

namespace PryamouglLibrary
{
	double Arithmetic::proof(double a, double b, double c, double d)
	{
		if (((a == b) and (c == d)) or ((a == c) and (b == d)) or ((a == d) and (b == c)))
		{
			cout << "Прямоугольник правильный  и его площадь равна:  " << endl;
		
			if ((a == b) and (c == d))
			cout << a * c << endl; else if ((a == c) and (b == d)) cout << a * b << endl;

			cout << "Периметр прямоугольника:  " << a + b + c + d << endl;
			cout << "Углы в прямоугольнике одинковы и равны:  90 градусов" << endl;
			return 0;

		}
		else cout << "Прямоугольник неправильный " << endl;

		return 0;
	}

	/*double Arithmetic::So(double a, double b, double c, double d)
	{
		if ((a == b) and (c == d))
			return a * c; else if ((a == c) and (b == d)) return a * b;
	}

	double Arithmetic::Pe(double a, double b, double c, double d)
	{
		return a+b+c+d;
	}

	double Arithmetic::anglAD(double a, double b, double c, double d)
	{
		return 90;
	}


	double Arithmetic::anglDC(double a, double b, double c, double d)
	{
		return 90;
	}


	double Arithmetic::anglCB(double a, double b, double c, double d)
	{
		return 90;
	}


	double Arithmetic::anglBA(double a, double b, double c, double d)
	{
		return 90;
	}*/
}