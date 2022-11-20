#include "human.h"
#include <string>
#include <vector>
#pragma once
using namespace std;

class student : public human
{
public:
	// Конструктор класса Student
	student(string last_name, string name, string second_name, vector<int> scores);
	// Получение среднего балла студента
	float get_average_score();
private:
	// Оценки студента
	vector<int> scores;
};

