#include "triangle.h"
#include <math.h>
#include <iostream>

Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3)
{
	Dot d1 = Dot(x1, y1);
	Dot d2 = Dot(x2, y2);
	Dot d3 = Dot(x3, y3);
	a = d1.distanceTo(d2);
	b = d1.distanceTo(d3);
	c = d2.distanceTo(d3);
}

Triangle::Triangle(Dot* d1, Dot* d2, Dot* d3)
{
	a = d1->distanceTo(*d2);
	b = d1->distanceTo(*d3);
	c = d2->distanceTo(*d3);
}

void Triangle::getAllSides()
{
	std::cout << "The sides are " << a << ", " << b << " and " << c << std::endl;
}

double Triangle::perimeter()
{
	return a + b + c;
}

double Triangle::square()
{
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
