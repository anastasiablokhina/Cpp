#include "student.h"
using namespace std;

// Конструктор класса Student
student::student(string last_name, string name, string second_name, vector<int> scores) : human(last_name, name, second_name) 
{
	this->scores = scores;
}

// Получение среднего балла студента
float student::get_average_score()
{
	// Общее количество оценок
	unsigned int count_scores = this->scores.size();

	// Сумма всех оценок студента
	unsigned int sum_scores = 0;

	// Средний балл
	float average_score;

	for (unsigned int i = 0; i < count_scores; ++i)
	{
		sum_scores += this->scores[i];
	}
	average_score = (float)sum_scores / (float)count_scores;
	return average_score;
}
