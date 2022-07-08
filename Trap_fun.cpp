#include "Trapezia_h.h"
#include <cmath>
#include <iostream>

using namespace std;

namespace trapLibrary
{
	double Trap::H(double a, double b, double c, double d,double e)
	{
		if ((((a + b) / 2) == e) or (((b + c) / 2) == e) or (((a + c) / 2) == e) or (((a + d) / 2) == e) or (((c + d) / 2) == e) or (((b + d) / 2) == e))
		{
			cout << "�������� ���������� ";
			if (((a + b) / 2) == e)
				cout << "������ �������� �����:   " << sqrt(pow(c, 2) - pow(((pow((a - b), 2) + pow(c, 2) - (pow(d,2)))/(2*(a - b))), 2)) << endl << "  �   ������� �����: "<< e* sqrt(pow(c, 2) - pow(((pow((a - b), 2) + pow(c, 2) - (pow(d, 2))) / (2 * (a - b))), 2)) << endl;
			if (((a + c) / 2) == e)
				cout << "������ �������� �����: " << sqrt(pow(a, 2) - pow(((pow((a - b), 2) + pow(b, 2) - (pow(d, 2))) / (2 * (a - b))), 2)) << endl << " ������� �����: " << e * sqrt(pow(a, 2) - pow(((pow((a - b), 2) + pow(b, 2) - (pow(d, 2))) / (2 * (a - b))), 2)) << endl;
			if (((b + c) / 2) == e)
				cout << "������ �������� �����: " << sqrt(pow(b, 2) - pow(((pow((a - b), 2) + pow(a, 2) - (pow(d, 2))) / (2 * (a - b))), 2)) << endl << " ������� �����: " << e * sqrt(pow(b, 2) - pow(((pow((a - b), 2) + pow(a, 2) - (pow(d, 2))) / (2 * (a - b))), 2)) << endl;
			if (((a + d) / 2) == e)
				cout << "������ �������� �����: " << sqrt(pow(d, 2) - pow(((pow((a - b), 2) + pow(b, 2) - (pow(d, 2))) / (2 * (d - c))), 2)) << endl << " ������� �����: " << e * sqrt(pow(d, 2) - pow(((pow((a - b), 2) + pow(b, 2) - (pow(d, 2))) / (2 * (d - c))), 2)) << endl;
			if (((c + d) / 2) == e)
				cout << "������ �������� �����: " << sqrt(pow(c, 2) - pow(((pow((a - b), 2) + pow(d, 2) - (pow(d, 2))) / (2 * (a - b))), 2)) << endl << " ������� �����: " << e * sqrt(pow(c, 2) - pow(((pow((a - b), 2) + pow(d, 2) - (pow(d, 2))) / (2 * (a - b))), 2)) << endl;
			if (((b + d) / 2) == e)
				cout << "������ �������� �����: " << sqrt(pow(a, 2) - pow(((pow((a - b), 2) + pow(c, 2) - (pow(d, 2))) / (2 * (b - d))), 2)) << endl << " ������� �����: " << e * sqrt(pow(a, 2) - pow(((pow((a - b), 2) + pow(c, 2) - (pow(d, 2))) / (2 * (b - d))), 2)) << endl;
			
			cout << "�������� �����: " << a + b + c + d << endl;
			cout<<"���� AD ����� "<<cos(d - b / 2 / a) << endl;
            cout<<"���� DC �����"<< cos(d - b / 2 / c) << endl;
            cout<<"���� CB ����� "<< 180 - cos(d - b / 2 / c) << endl;
		    cout<<"���� AB ����� "<< 180 - cos(b - d / 2 / a) << endl;
		} else cout << "�������� ������������ " << endl;
		return 0;
		
	}

	/*double Trap::S(double a, double b, double c, double d)
	{
		return ((b + d) / 2);
	}

	double Trap::P(double a, double b, double c, double d)
	{
		return a + b + c + d;
	}

	double Trap::angleAD(double a, double b, double c, double d)
	{
		return cos(d - b / 2 / a);
	}


	double Trap::angleDC(double a, double b, double c, double d)
	{
		return cos(d - b / 2 / c);
	}


	double Trap::angleCB(double a, double b, double c, double d)
	{
		return 180 - cos(d - b / 2 / c);
	}


	double Trap::angleBA(double a, double b, double c, double d)
	{
		return 180 - cos(b - d / 2 / a);
	}*/
}