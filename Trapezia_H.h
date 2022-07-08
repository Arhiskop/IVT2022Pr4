#pragma once
namespace trapLibrary
{
	class Trap
	{
	public:
		double x;
		static double H(double a, double b, double c, double d ,double e);
		static double S(double a, double b, double c, double d);
		static double P(double a, double b, double c, double d);
		static double angleAD(double a, double b, double c, double d);
		static double angleDC(double a, double b, double c, double d);
		static double angleCB(double a, double b, double c, double d);
		static double angleBA(double a, double b, double c, double d);
	};
}