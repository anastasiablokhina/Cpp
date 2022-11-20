#pragma once
#include "human.h"
#include <string>
using namespace std;

class teacher : public human
{
private:
	// Учебные часы
	unsigned int work_time;

public:
	// Конструктор класса teacher
	teacher(string last_name,
		string name,
		string second_name,
		unsigned int work_time); // Количество учебных часов за семестр у преподавателя

	// Получение количества учебных часов
	unsigned int get_work_time();
};

