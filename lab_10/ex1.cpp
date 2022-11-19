// Реализация класса Triangle
#include <iostream>
#include "dot.h"
#include "triangle.h"

int main()
{
    double x1, x2, x3;
    double y1, y2, y3;

    std::cout << "Enter coordinates for the first dot ";
    std::cin >> x1 >> y1;
   
    std::cout << "Enter coordinates for the second dot ";
    std::cin >> x2 >> y2;

    std::cout << "Enter coordinates for the third dot ";
    std::cin >> x3 >> y3;   
    
    // агрегация 
    Dot d1 = Dot(x1, y1);
    Dot d2 = Dot(x2, y2);
    Dot d3 = Dot(x3, y3);

    Triangle* t1 = new Triangle(&d1, &d2, &d3);
    std::cout << "The result of aggregation " << std::endl;
    t1->getAllSides();
    std::cout << "The perimeter is " << t1->perimeter() << std::endl;
    std::cout << "The square is " << t1->square() << "\n" << std::endl;

    // композиция
    Triangle * t2 = new Triangle(x1, y1, x2, y2, x3, y3);
    std::cout << "The result of composition " << std::endl;
    t2->getAllSides();
    std::cout << "The perimeter is " << t2->perimeter() << std::endl;
    std::cout << "The square is " << t2->square() << std::endl;

    return 0;
}

