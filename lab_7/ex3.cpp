// Решение квадратного уравнения

#include <iostream>
#include <cmath>
#include <tuple>
using namespace std;

// функция для решения уравнения, возвращаюшая кортеж
tuple <double, double, int> FindSolution(float a, float b, float c)
{
    tuple <double, double, int> solution;
    float d_squared = b * b - 4 * a * c;
    if (d_squared < 0)
        get<2>(solution) = -1;
    else if (d_squared == 0)
    {
        get<2>(solution) = 0;
        get<0>(solution) = -b / (2 * a);
    }
    else
    {
        get<2>(solution) = 1;
        get<1>(solution) = (-b - sqrt(d_squared)) / (2 * a);
        get<0>(solution) = (-b + sqrt(d_squared)) / (2 * a);
    }
    return solution;
}

// вывод элементов кортежа на экран
void ShowRoots(tuple <double, double, int> r)
{
    if (get<2>(r) == -1)
        cout << "The equation cannot be solved";
    else if (get<1>(r) == 0)
        cout << "The root is " << get<0>(r);
    else
        cout << "The first root is " << get<0>(r) << " and the second is " << get<1>(r);
}

int main()
{
    float a, b, c;
    cout << "Enter the coefficients "; // запрашиваем ввод коэффициентов
    cin >> a >> b >> c;
    tuple <double, double, int> roots = FindSolution(a, b, c); // находим решение и записываем в кортеж
    ShowRoots(roots); // выводим на экран
    return 0;
}
