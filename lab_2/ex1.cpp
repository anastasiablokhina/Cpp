// Определение суперпростого числа

#include <iostream>
using namespace std;

// определяем, является ли число простым
bool is_prime(int n) {
    bool flag = true;
    if (n == 0 || n == 1) // 0 и 1 простыми не являются
        flag = false; 
    // перебираем делители числа, кроме 1 и максимального делителя (кроме самого себя)
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = false;
            break;
        }
    }
    return flag;
}

int main()
{
    int num;
    int count = 0; // переменная для количества простых чисел 
    cout << "Enter the number "; // ввод числа
    cin >> num;

    if (is_prime(num)) { // если число простое, то ищем количество простых чисел до него
        for (int i = 2; i < num; i++) {
            if (is_prime(i)) {
                count++;
            }
        }
        if (is_prime(count + 1)) { // если позиция числа - простое число, то число суперспростое
            cout << num << " is superprime.";
        }
        else { // иначе простое, но не суперпростое
            cout << num << " is not superprime.";
        }
    }
    else { // число не простое и не суперпростое 
        cout << num << " is not superprime.";
    }
    return 0;
}