#include "point.h"

Point::Point(double x, double y) : x(x), y(y) {}

double Point::radius()
{
	return sqrt(x * x + y * y);
}
bool Point::operator<(Point point)
{
	return radius() < point.radius();
}
bool Point::operator>(Point point)
{
	return radius() > point.radius();
}
std::ostream& operator<<(std::ostream& out, const Point& point)
{
	out << "(" << point.x << ", " << point.y << ")";
	return out;
}
