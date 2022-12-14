// Сохранение данных в текстовый файл
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    system("chcp 1251"); // переходим на страницу 1251 для поддержки русского языка
    system("cls");       // очищаем окно консоли

    const int N = 10;
    int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
    
    ofstream fout; // создание объекта класса ofstream 
    fout.open("arrays.txt"); // открытие файла
    if (!fout)
    {
        cout << "Ошибка открытия файла\n";
        return 1;
    }

    // записываем исходный массив в файл
    for (int i : a)
        fout << i << '\t';
    fout << "\n";

    // сортируем массив
    int min = 0; // для записи минимального значения
    int buf = 0; // для обмена значениями
    for (int i = 0; i < N; i++)
    {
        min = i; // номер текущей ячейки, как ячейки с минимальным значением
        // в цикле найдем реальный номер ячейки с минимальным значением
        for (int j = i + 1; j < N; j++)
            min = (a[j] < a[min]) ? j : min; // если ячейка меньше минимума, то индекс минимума - j
        // иначе min = min
        // перестановка этого элемента, поменяв его местами с текущим
        if (i != min)
        {
            buf = a[i];
            a[i] = a[min];
            a[min] = buf;
        }
    }
    // записываем отсортированный массив в файл
    for (int i : a)
        fout << i << '\t';

    fout.close(); // закрываем файл

    // ifstream используется для чтения содержимого файла
    // попытаемся прочитать содержимое файла 
    ifstream fin("arrays.txt");

    // если мы не можем открыть этот файл для чтения, сообщим об ошибке
    if (!fin)
    {
        cout << "Ошибка открытия файла\n";
        return 1;
    }

    // пока есть данные, которые мы можем прочитать
    while (fin)
    {
        // то перемещаем эти данные в строку, которую затем выводим на экран
        string line;
        getline(fin, line);
        cout << line << endl;
    }

    return 0;
}
