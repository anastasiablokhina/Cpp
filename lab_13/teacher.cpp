#include "teacher.h"
using namespace std;

// Конструктор класса teacher
teacher::teacher(string last_name, 
	string name,
	string second_name,
	unsigned int work_time) // Количество учебных часов за семестр у преподавателя
	: human(last_name, 
			name,
			second_name)
{
	this->work_time = work_time;
}

// Получение количества учебных часов
unsigned int teacher::get_work_time()
{
	return this->work_time;
}
