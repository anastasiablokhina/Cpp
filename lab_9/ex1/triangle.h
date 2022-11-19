#pragma once
#include <string>
#include <cmath>

class Triangle
{
private:
	float a, b, c;
public:
	// ����������� 
	Triangle(float x, float y, float z)
	{
		// ���� �� ����������� �������, ������� ����������
		if ((z >= x + y) or (y >= x + z) or (x >= z + y))
			throw "Triangle doesn't exist";
		// �������������� �������
		a = x;
		b = y;
		c = z;
	}
	// ��������� �������
	double Square()
	{
		double p = (a + b + c) / 2;
		return sqrt(p * (p - a) * (p - b) * (p - c));
	}
};

