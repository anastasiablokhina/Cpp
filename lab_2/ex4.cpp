// Стрельба по мишени

#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    system("chcp 1251"); // переходим на страницу 1251 для поддержки русского языка
    system("cls");

    float x, y; // координаты выстрела
    int pts = 0; // сумма баллов
    int goal = 50; // количество очков, которые нужно набрать
    int n = 0; // количество сделанных выстрелов
    string lvl; // уровень
    double acc; // точность попадания

    while (pts < goal) {
        cout << "Введите координаты " << ++n << " выстрела ";
        cin >> x >> y;
        if (pow(x, 2) + pow(y, 2) <= 1) // точка внутри окружности радиуса 1
            pts += 10;
        else
            if (pow(x, 2) + pow(y, 2) <= 4) // точка внутри окружности радиуса 2
                pts += 5;
    }

    acc = pts * 1.0 / (10 * n); // домножаем на 1.0, т.к. иначе при делении целых чисел получим целый результат

    if (acc > 0.8)
        lvl = "Снайпер";
    else
        if (acc > 0.4)
            lvl = "Стрелок";
        else
            lvl = "Новичок";

    cout.precision(2);
    cout << "Ваш результат - " << pts << " баллов" << endl;
    cout << "Сделано " << n << " выстрелов" << endl;
    cout << "Уровень: " << lvl;

    return 0;
}
