// Проверка номера СНИЛС

#include <iostream>
#include <string>
using namespace std;


bool digits_only(string &n)
{
    string chars = " -";
    // удаляем пробелы и тире из номера
    for (char c: chars)
        n.erase(remove(n.begin(), n.end(), c), n.end());
    // в номере не должно сотаться символов кроме цифр
    for (int i = 0; i < n.length(); i++)
        if (!isdigit(n[i]))
            return false;
    return true;
}

bool check_num(string n)
{
    // в номере не должно быть более двух одинаковых цифр подряд
    for (int i = 0; i < 7; i++)
        if (n[i] == n[i + 1] and n[i] == n[i + 2])
            return false;
    return true;
}

int summ_digits(string n)
{
    int digit; // цифра
    int s = 0; // сумма
    for (int i = 0; i < 9; i++)
    {
        digit = n[i] - '0'; // преобразуем char в int
        s += digit * (9 - i); // рассчитываем контрольное число
    }
    return s;
}

bool valid(string s)
{
    // снилс может состояить только из цифр, пробелов и тире и должен содержать 11 символов
    if (!digits_only(s) and s.length() != 11)
        return false;
    string num = s.substr(0, 9); // основная часть номера
    string c_val = s.substr(9, 2); // контрольное число
    // проверим, не содержит ли номер более 2 одинаковых цифр подряд
    if (!check_num(num))
        return false;  
    // рассчитываем сумму произведений номера
    int summ = summ_digits(num); // сумма
    if (summ < 100 and stoi(c_val) != summ) // если сумма меньше 100, то контрольное число должно равнятся сумме
        return false;
    if ((summ == 100 or summ == 101) and c_val != "00") // если сумма 100 или 101, то контрольное число равно 00
        return false;
    do // если сумма больше 101, то вычисляется остаток от деления суммы на 101
    {
        summ %= 101;
    } while (summ > 101);
    if (summ < 100 and stoi(c_val) != summ) // если остаток меньше 100, то контрольное число равно остаток
        return false;
    if (summ == 100 and c_val != "00") // если остаток равен 100, то контрольное число равно 00
            return false;
    return true;
}

int main()
{
    system("chcp 1251"); // переходим на страницу 1251 для поддержки русского языка
    system("cls"); // очищаем окно консоли
    string snils; // переменная для хранения введенного СНИЛС
    
    cout << "Введите номер СНИЛС " << endl;
    getline(cin, snils);
    if (valid(snils)) // если номер валидный
        cout << "True";
    else
        cout << "False";   
    return 0;
}
