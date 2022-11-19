// Работа с различными треугольниками

#include <iostream>
#include <cmath>
using namespace std;

double square(float x, float y, float z) // площадь равнобедренного треугольника
{
    double p = (x + y + z) / 2; // полупериметр
    double s = sqrt(p / 2 * (p - x) * (p - y) * (p - z));
    return s;
}

double square(float x) // площадь равностороннего треугольника
{
    double s = sqrt(3) / 4 * x * x;
    return s;
}



int main()
{
    int choice; // переменная выбора
    double s; // переменная для площади треугольника 

    do // запрос пользователю пока выбор не будет корректен
    {
        cout << "What type of triangle is used? \nPress 0 if isosceles, press 1 if equilateral. ";
        cin >> choice;
    } while (choice != 0 && choice != 1);
    
    if (choice == 0) // если равнобедренный
    {
        float a, b, c; 
        cout << "Enter the sides ";
        cin >> a >> b >> c;
        s = square(a, b, c);
    }

    else // если равносторонний
    {
        float a;
        cout << "Enter the side ";
        cin >> a;
        s = square(a);
    }

    cout << "The square is " << s; // вывод площади

    return 0;
}


