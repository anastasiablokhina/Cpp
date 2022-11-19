#pragma once
#include <iostream>

class Time
{
private:
	int hours;
	int minutes;
	int seconds;

public:
	// конструтор, инициализирующий пол€ нулевыми значени€ми
	Time();

	// конструктор, инициализирующий пол€ заданными значени€ми
	Time(int hours, int minutes, int seconds);

	// конструктор дл€ преобразовани€ вещественного типа в тип Time
	Time(float val);

	// преобразование к корректному виду
	void normalize();

	// метод, складывающий значени€ двух объектов Time
	Time operator+ (const Time& t2) const;

	// метод, складывающий объект Time и переменную вещественного типа
	Time operator+ (const float& val) const;

	// метод, вычитающий значени€ двух объектов Time
	Time operator- (const Time& t2) const;

	// перегрузка оператора потокового вывода
	friend std::ostream& operator<< (std::ostream& out, const Time& t);

	// метод, складывающий переменную вещественного типа и объект Time
	friend Time operator+(float val, const Time& t2);

	// методы, сравнивающие два объекта Time
	friend bool operator<(const Time& t1, const Time& t2);
	friend bool operator>(const Time& t1, const Time& t2);
};

