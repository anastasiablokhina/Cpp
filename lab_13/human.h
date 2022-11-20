#include <string>
#include <sstream>
#pragma once
using namespace std;

class human
{
public:
	// Конструктор класса human
	human(string last_name, string name, string second_name);

	// Получение ФИО человека
	virtual string get_full_name();
private:
	string name; // имя
	string last_name; // фамилия
	string second_name; // отчество
};

