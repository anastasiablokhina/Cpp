// Применение итерации реализации функции

#include <iostream>
#include <cmath>
using namespace std;

// функция, вычисляющая кубический корень по итерационной формуле
double pow_function(double a)
{
    double x_0, x_1; 

    x_0 = a / 3; 
    x_1 = (a / (x_0 * x_0) + 2 * x_0) / 3;

    do
    {
        x_0 = x_1;
        x_1 = (a / (x_0 * x_0) + 2 * x_0) / 3;
    } while (abs(x_0 - x_1) >= 1e-6); // добиваемся точности не менее 6 знаков после запятой

    return x_1;
}

int main()
{
    double n; 

    cout << "Enter the number "; // ввод числа
    cin >> n;

    cout << "Cube root using pow from cmath: " << pow(n, 1.0 / 3) << endl; // результат работы стандартной функции pow 
    cout << "Cube root using my function: " << pow_function(n); // результат работы функции pow_function()

    return 0;
}
