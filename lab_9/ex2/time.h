#pragma once
#include <iostream>
using namespace std;

class Time
{
private:
	int hours;
	int minutes;
	int seconds;

public:
	// конструтор, инициализирующий поля нулевыми значениями
	Time()
	{
		hours = 0;
		minutes = 0;
		seconds = 0;
	}

	// конструктор, инициализирующий поля заданными значениями
	Time(int h, int m, int s)
	{
		if (s > 60)
			throw ExTime("in constructor", "seconds cannot be greater than or equal to 60");
		if (m > 60)
			throw ExTime("in constructor", "minutes cannot be greater than or equal to 60");
		if (h > 60)
			throw ExTime("in constructor", "hours cannot be greater than or equal to 24");
		if (s < 0 or m < 0 or h < 0)
			throw ExTime("in constructor", "negative values");

		seconds = s;
		minutes = m;
		hours = h;
	}

	// метод, выводящий значения полей на экран
	void get_time()
	{
		cout << hours << ":" << minutes << ":" << seconds << endl;
	};

	// метод, складывающий значения двух объектов Time
	Time add_time(Time t)
	{
		Time t_sum;
		t_sum.seconds = (seconds + t.seconds) % 60;
		t_sum.minutes = (minutes + t.minutes + ((seconds + t.seconds) / 60)) % 60;
		t_sum.hours = (hours + t.hours + (minutes + t.minutes + ((seconds + t.seconds) / 60)) / 60) % 24;

		return t_sum;
	}

	// класс исключений
	class ExTime 
	{
	public:
		string origin; // для имени функции
		string description; // для описания ошибки
		ExTime(string org , string desc)
		{
			origin = org ; // где возникла ошибка
			description = desc; // описание ошибки
		}
	};
};

