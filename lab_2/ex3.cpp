// Размен монет

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    system("chcp 1251"); // переходим на страницу 1251 для поддержки русского языка
    system("cls");       // очищаем окно консоли
    short values[4] = {10, 5, 2, 1}; // массив с номиналом монет
    int numbers[4] = {0, 0, 0, 0}; // массив с количеством каждой монеты
    int coins = 0; // переменная для общего количесвта монет
    int summa; // вводимая с клавиатуры сумма

    cout << "Введите сумму ";
    cin >> summa;
    
    for (int i = 0; i < 4; i++) {
        numbers[i] = summa / values[i]; // определение максимального кол-ва монет большего номинала
        summa -= numbers[i] * values[i]; 
    }
    
    for (int i = 0; i < 4; i++)
        coins += numbers[i]; // количество монет
    
    cout << "Количество монет: " << coins << endl;

    // вывод используемых монет
    for (int i = 0; i < 4; i++)
        if (numbers[i] != 0)
            cout << numbers[i] << " по " << values[i] << " руб." << endl;

    return 0;
}

