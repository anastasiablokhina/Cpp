// Реализация ввода данных

#include <iostream>
using namespace std;

bool Input(int x, int y) // проверка, что числа положительные
{
    return (x > 0 and y > 0);
}

int main()
{
    int a, b;
    cout << "Enter two positive numbers "; 
    cin >> a >> b; // ввод двух положительных чисел
    if (Input(a, b) == false) // если ввод некорректен, то выводится сообщение об ошибке, программа завершается
    {
        cerr << "error";
        return 1;
    }
    int s = a + b; // вычисление суммы
    cout << a << " + " << b << " = " << s; // вывод
    return 0;
}

