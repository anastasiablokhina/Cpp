#pragma once
#include <string>
#include <cmath>

class Triangle
{
private:
	float a, b, c;
public:
	// конструктор 
	Triangle(float x, float y, float z)
	{
		// если не выполняется условие, бросаем исключение
		if ((z >= x + y) or (y >= x + z) or (x >= z + y))
			throw "Triangle doesn't exist";
		// инициализируем стороны
		a = x;
		b = y;
		c = z;
	}
	// вычисляем площадь
	double Square()
	{
		double p = (a + b + c) / 2;
		return sqrt(p * (p - a) * (p - b) * (p - c));
	}
};

