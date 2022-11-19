// Вычисление корней квадратного уравнения
#include <iostream>
#include <cmath>

using namespace std;

int Myroot(double a, double b, double c, double& x_1, double& x_2)
{
    double d = pow(b, 2) - 4 * a * c; // дискриминант

    if (d > 0) // если дискриминант положительный, то корня два
    {
        x_1 = (-b + sqrt(d)) / (2 * a);
        x_2 = (-b - sqrt(d)) / (2 * a);
        return 1;
    }
    else
        if (d == 0) // если равен нулю, то корень один
        {
            x_1 = (-b + sqrt(d)) / (2 * a);
            return 0;
        }
        else // если меньше нуля, корней нет
            return -1;
}

int main() {

    int res;
    float a, b, c;
    double x_1 = 0, x_2 = 0;


    cout << "Enter the coefficients ";
    cin >> a >> b >> c;
    res = Myroot(a, b, c, x_1, x_2);

    if (res == 1)
        cout << "There are two roots of the equation: x1 = " << x_1 << " and x2 = " << x_2;
    else
        if (res == 0)
            cout << "There is one root of the equation: x = " << x_1;
        else
            if (res == -1)
                cout << "There are no roots of the equation";

    return 0;
}

