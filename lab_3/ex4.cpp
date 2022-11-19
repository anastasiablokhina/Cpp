// Рекурсивная функция суммы ряда
#include <iostream>
using namespace std;

int add(int n)
{
    if (n == 0) return 0; // выход из рекурсии
    else return (5 * n + add(n - 1));
}

int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    cout << add(n); // вызов функции
}

