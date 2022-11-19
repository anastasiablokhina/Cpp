// Применение рекурсии для перевода целого числа в двоичный код

#include <iostream>
using namespace std;

// функция для перевода числа в двоичный код
void convert_to_bin (int n)
{
    if (n >= 2) 
        convert_to_bin(n / 2); // делим на 2 пока результат деления не 1
    cout << n % 2; // вывод результата деления и всех остатков в обратном порядке
}

int main()
{
    int n;

    cout << "Enter the number ";
    cin >> n;
    convert_to_bin(n);

    return 0;
}
