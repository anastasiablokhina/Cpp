// Реализация сортировки точек в векторе

#include "point.h"
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm> 
using namespace std;

int main()
{
	vector<Point> vector;
	vector.push_back(Point(1, 2));
	vector.push_back(Point(10, 12));
	vector.push_back(Point(21, 7));
	vector.push_back(Point(4, 8));

	sort(vector.begin(), vector.end());

	for (auto& point : vector)
		cout << point << '\n';

    return 0;
}

