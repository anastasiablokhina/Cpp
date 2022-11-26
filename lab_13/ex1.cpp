// Полиморфизм в системе классов учебного центра
#include "human.h"
#include "student.h"
#include "teacher.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    system("chcp 1251"); // переходим на страницу 1251 для поддержки русского языка
    system("cls"); // очищаем окно консоли

    // Оценки студента
    vector<int> scores;
    // Добавление оценок студента в вектор
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(4);
    scores.push_back(4);
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);

    student* stud = new student("Петров", "Иван", "Алексеевич", scores);
    cout << stud->get_info() << endl;
    
    unsigned int teacher_work_time = 40;
    teacher* tch = new teacher("Сергеев", "Дмитрий", "Сергеевич", teacher_work_time);
    cout << tch->get_info() << endl;

    return 0;
}

