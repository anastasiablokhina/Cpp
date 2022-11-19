// Проверка номера СНИЛС

#include <iostream>
#include <string>
using namespace std;

int main()
{
    system("chcp 1251"); // переходим на страницу 1251 для поддержки русского языка
    system("cls"); // очищаем окно консоли
    string snils; // переменная для хранения введенного СНИЛС
    bool flag = true;
    cout << "Введите номер СНИЛС " << endl;
    cin >> snils; 
    // определяем длину введенного числа
    if (snils.length() != 11)
        flag = false;
    else
    {
        string num = snils.substr(0, 9); // основная часть номера
        string c_val = snils.substr(9, 2); // контрольное значение
         
        // проверим, не содержит ли номер более 2 одинаковых цифр подряд
        for (int i = 0; i < 7; i++)
        {
            if (num[i] == num[i + 1] and num[i] == num[i + 2])
            {
                flag = false;
                break;
            }
        }

        // рассчитываем сумму произведений номера
        if (flag)
        {
            int summ = 0; // сумма
            int n; // цифра
            for (int i = 0; i < 9; i++)
            {
                n = num[i] - '0'; // преобразуем char в int
                summ += n * (9 - i);
            }

            if (summ < 100 and stoi(c_val) != summ) // если сумма меньше 100, то контрольное число должно равнятся сумме
                flag = false;
            else if ((summ == 100 or summ == 101) and c_val != "00") // если сумма 100 или 101, то контрольное число равно 00
                flag = false;
            else
            {
                do // если сумма больше 101, то вычисляется остаток от деления суммы на 101
                {
                    summ %= 101;
                } while (summ > 101);
                
                if (summ < 100 and stoi(c_val) != summ) // если остаток меньше 100, то контрольное число равно остаток
                    flag = false;
                else if (summ == 100 and c_val != "00") // если остаток равен 100, то контрольное число равно 00
                    flag = false;
            }
        }
    }
    if (flag) // если номер валидный
        cout << "True";
    else
        cout << "False";
    return 0;
}
