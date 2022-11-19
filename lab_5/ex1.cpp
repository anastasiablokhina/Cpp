// Передача массива в функцию

#include <iostream>
using namespace std;

bool from_min(const int a, const int b)
{
    return a > b;
}

bool from_max(const int a, const int b)
{
    return a < b;
}

void sort(int a[], const int n, bool (*compare)(int a, int b))
{
    // перебираем элементы массива
    for (int i = 1; i < n; i++)
    {
        // меняем элементы местами в зависимости от условия
        for (int j = 0; j < n - 1; j++)
        {
            if ((*compare)(a[j], a[j + 1]))
                swap(a[j], a[j + 1]);
        }
    }
    // вывод отсортированного массива
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
}

bool positive(const int a)
{
    return a > 0;
}

bool negative(const int a)
{
    return a < 0;
}

void sum_by_sign(int a[], const int n, bool (*compare)(int a))
{
    int s = 0; // переменная для суммы чисел
    for (int i = 0; i < n; i++)
    {
        // суммируем в зависимости от условия
        if ((*compare)(a[i]))
            s += a[i];
    }
    // выводим сумму
    cout << s << "\n";
}

void sum_by_index(int a[], const int n, int i)
{
    int s = 0; // переменная для суммы
    // перебираем элементы с шагом два
    for (i; i < n; i += 2)
    {
        s += a[i];
    }
    // выводим сумму
    cout << s << "\n"; 
}


int main()
{
    int n;
    int choice;

    cout << "Enter the size of array ";
    cin >> n;
    int* arr = new int[n]; // создаем массив целых чисел введенного размера
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " item of array "; // вводим элементы 
        cin >> arr[i];
    }

    cout << "1. Sort by ascending\n";
    cout << "2. Sort by descending\n";
    cout << "3. Sum of negative items\n";
    cout << "4. Sum of positive items\n";
    cout << "5. Sum of items with odd indexes\n";
    cout << "6. Sum of items with even indexes\n";

    do
    {
        cin >> choice;
        switch (choice)
        {
        case 1: sort(arr, n, from_min); break; // сортируем по возрастанию  
        case 2: sort(arr, n, from_max); break; // сортируем по убыванию
        case 3: sum_by_sign(arr, n, negative); break; // суммируем отрицательные числа
        case 4: sum_by_sign(arr, n, positive); break; // суммируем положительные числа
        case 5: sum_by_index(arr, n, 1); break; // суммируем элементы на нечетных местах 
        case 6: sum_by_index(arr, n, 0); break; // суммируем элементы на четных местах 
        default: cout << "Unknown operation\n"; // команда не найдена
        }
    } while (true);
    return 0;
}
