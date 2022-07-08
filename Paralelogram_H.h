#pragma once
namespace ParallelogramLibrary
{
	class Parallelogram
	{
	public:
		static double estli(double a, double b, double c, double d);

		static double S(double a, double h);

		static double P(double a, double b);

		static double os_angle(double a, double b, double h);
	};
}