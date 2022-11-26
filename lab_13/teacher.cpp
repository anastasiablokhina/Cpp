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

// Получение информации о преподавателе
string teacher::get_info()
{
	ostringstream full_name;
	full_name << this->last_name << " "
		<< this->name << " "
		<< this->second_name << ". Количество часов: "
		<< this->get_work_time();
	return full_name.str();
}
