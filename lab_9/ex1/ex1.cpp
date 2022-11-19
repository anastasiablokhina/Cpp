// Безопасная реализация класса Triangle

#include <iostream>
#include <string>
#include "triangle.h"
using namespace std;

int main()
{
    int x, y, z;
    cout << "Enter the sides ";
    cin >> x >> y >> z;
    // создаем объект класса и вызываем один из методов
    try
    {
        Triangle t1 = Triangle(x, z, y);
        cout << "The square is " << t1.Square();
    }
    // обработка исключения
    catch (const char* str)
    {
        cout << str << endl;
        return 1;
    }
    return 0;
}
