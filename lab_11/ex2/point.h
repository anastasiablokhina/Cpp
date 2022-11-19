#pragma once
#include <iostream>

class Point
{
private:
	double x, y;
public:
	Point(double x, double y);
	double radius();
	bool operator<(Point point);
	bool operator>(Point point);
	friend std::ostream& operator<<(std::ostream& out, const Point& point);
};
