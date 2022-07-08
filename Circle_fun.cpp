#include "Circle_H.h"
#include <iostream>

using namespace std;
const double PI = 3.1415926535;
namespace CircleLibrary
{
	double Circle::estli(double a)
	{

		if (a == 0)
		{
			cout << "Окружность не существует" << endl;
		}
		else
		{
			cout << "Окружность существует" << endl;
		}

	}
	double Circle::P(double a)
	{
		return 2 * PI * a;
	}
	double Circle::S(double a)
	{

		return PI * a * a;
	}
}