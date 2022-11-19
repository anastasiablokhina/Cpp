// Структура Time

#include <iostream>
using namespace std;

// структура для хранения времени
struct Time
{
    int hours;
    int minutes;
    int seconds;
};

// определение кол-ва секунд в введенном времени
int TimeInSec(Time t)
{
    return t.hours * 3600 + t.minutes * 60 + t.seconds;
}

// вывод времени на экран
void ShowTime(Time t)
{
    cout << t.hours << " ч. " << t.minutes << " мин. " << t.seconds << " сек.\n";
    cout << "Это " << TimeInSec(t) << " сек.\n";
}

// ввод значений
Time InputTime() 
{
    Time t;
    cout << "\nВведите число часов: ";
    cin >> t.hours;
    cout << "Введите число минут: ";
    cin >> t.minutes;
    cout << "Введите число секунд: ";
    cin >> t.seconds;
    return t;

}

// сложение интервалов времени
Time AddTime(Time t1, Time t2)
{
    Time t;
    t.hours = t1.hours + t2.hours;
    t.minutes = t1.minutes + t2.minutes;
    if (t.minutes >= 60)
    {
        t.minutes -= 60;
        t.hours++;
    }
    t.seconds = t1.seconds + t2.seconds;
    if (t.seconds >= 60)
    {
        t.seconds -= 60;
        t.minutes++;
    }
    return t;
}

// вычитание интервалов времени
Time SubTime(Time t1, Time t2)
{        
    Time t;
    int diff;
    diff = abs(TimeInSec(t1) - TimeInSec(t2));
    t.hours = diff / 3600;
    diff -= 3600 * t.hours;
    t.minutes = diff / 60;
    diff -= 60 * t.minutes;
    t.seconds = diff;
    return t;
}

int main()
{
    system("chcp 1251"); // переходим на страницу 1251 для поддержки русского языка
    system("cls"); // очищаем окно консоли
    Time t1 = InputTime(); // вызов функции для инициализации
    Time t2 = { 4, 2, 43 }; // присваивание значений при помощи списка инициализаторов
    Time t3 = AddTime(t1, t2); 
    Time t4 = SubTime(t1, t2);
    ShowTime(t1);
    ShowTime(t2);
    ShowTime(t3);
    ShowTime(t4);
    return 0;
}

