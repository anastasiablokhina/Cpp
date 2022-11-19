// Решение квадратного уравнения

#include <iostream>
#include <cmath>
using namespace std;

// структура для хранения корней
struct Roots
{
    double x1, x2;
    int flag;

    // вывод корней на экран
    void ShowRoots()
    {
        if (flag == -1)
            cout << "The equation cannot be solved";
        else if (flag == 0)
            cout << "The root is " << x1;
        else
            cout << "The first root is " << x1 << " and the second is " << x2;
    }
};

// решение квадратного уравнения
Roots FindSolution(float a, float b, float c)
{
    Roots r;
    float d_squared = b * b - 4 * a * c;
    if (d_squared < 0)
        r.flag = -1;
    else if (d_squared == 0)
    {
        r.flag = 0;
        r.x1 = -b / (2 * a);
    }
    else
    {
        r.flag = 1;
        r.x1 = (- b + sqrt(d_squared)) / (2 * a);
        r.x2 = (- b - sqrt(d_squared)) / (2 * a);
    }
    return r;
}

int main()
{
    float a, b, c;
    cout << "Enter the coefficients "; // запрашиваем ввод коэффициентов
    cin >> a >> b >> c;
    Roots r = FindSolution(a, b, c); // находим решение и записываем в член структуры
    r.ShowRoots(); // выводим на экран
    return 0;
}