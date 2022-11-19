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
	// конструктор, инициализирующий поля нулевыми значениями
	Time();

	// конструктор, инициализирующий поля заданными значениями
	Time(int hours, int minutes, int seconds);

	// преобразование к корректному виду
	void normalize();

	// метод, выводящий значения полей на экран
	void getTime();

	// метод, складывающий значения двух объектов Time
	Time addTime(Time t);
};

