#pragma once
#include "dot.h"

class Triangle
{
private:
	Dot* d1, d2, d3;
	double a, b, c;
public:
	Triangle(double x1, double y1, double x2, double y2, double x3, double y3); // композиция
	Triangle(Dot* d1, Dot* d2, Dot* d3); // агрегация
	void getAllSides();
	double square();
	double perimeter();
};

