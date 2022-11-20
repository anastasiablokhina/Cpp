// Шаблонная функция обработки массива
#include <iostream>
using namespace std;

template<class T, class T1>
T1 average(T arr[], int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return (sum / size);
}

int main()
{
    int arr_i[] = { 9,3,17,6,5,4,31,2,12 };
    long arr_l[] = { 2000000000, 1434583657, -147653856 };
    double arr_d[] = { 2.1, 2.3, 1.7, 6.6, 5.3, 2.44, 3.1, 2.4, 1.2 };
    char arr_c[] = { 'A', 'B', 'C', 'D', 'E' };
    cout << "int: " << average<int, double>(arr_i, sizeof(arr_i) / sizeof(arr_i[0])) << endl;
    cout << "long: " << average<long, double>(arr_l, sizeof(arr_l) / sizeof(arr_l[0])) << endl;
    cout << "double: " << average<double, double>(arr_d, sizeof(arr_d) / sizeof(arr_d[0])) << endl;
    cout << "char: " << average<char, char>(arr_c, sizeof(arr_c) / sizeof(arr_c[0])) << endl;

    return 0;
}

