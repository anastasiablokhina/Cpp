#include "human.h"
using namespace std;

// Конструктор класса human
human::human(string last_name, string name, string second_name)
{
	this->last_name = last_name;
	this->name = name;
	this->second_name = second_name;
}
// Получение ФИО человека
string human::get_full_name()
{
	ostringstream full_name;
	full_name << this->last_name << " "
			  << this->name << " "
			  << this->second_name;
	return full_name.str();
}
