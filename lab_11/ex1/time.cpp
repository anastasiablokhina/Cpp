#include "time.h"

// конструктор, инициализирующий поля нулевыми значениями
Time::Time() : hours(0), minutes(0), seconds(0) {};

// конструктор, инициализирующий поля заданными значениями
Time::Time(int hours, int minutes, int seconds) : hours(hours), minutes(minutes), seconds(seconds)
{
	normalize();
}

// конструктор для преобразования вещественного типа в тип Time
Time::Time(float val) : hours(0), minutes(0), seconds(val*3600)
{
	normalize();
}

// преобразование к корректному виду
void Time::normalize()
{
	minutes += seconds / 60;
	seconds %= 60;
	hours += minutes / 60;
	minutes %= 60;
	hours %= 24;
}

// метод, складывающий значения двух объектов Time 
Time Time::operator+ (const Time& t2) const
{
	Time t_sum(hours + t2.hours, minutes + t2.minutes, seconds + t2.seconds);
	t_sum.normalize();
	return t_sum;
}

// метод, складывающий объект Time и переменную вещественного типа 
Time Time::operator+ (const float& val) const
{
	Time t2 = Time(val);
	Time t_sum(hours + t2.hours, minutes + t2.minutes, seconds + t2.seconds);
	t_sum.normalize();
	return t_sum;
}

// метод, вычитающий значения двух объектов Time 
Time Time::operator- (const Time& t2) const
{
	Time t_sub(0, 0, hours * 3600 + minutes * 60 + seconds - (t2.hours * 3600 + t2.minutes * 60 + t2.seconds));
	t_sub.normalize();
	return t_sub;
}

// метод, складывающий переменную вещественного типа и объект Time 
Time operator+(float val, const Time& t2)
{
	Time t1 = Time(val);
	Time t_sum(t1.hours + t2.hours, t1.minutes + t2.minutes, t1.seconds + t2.seconds);
	t_sum.normalize();
	return t_sum;

}

// методы, сравнивающие два объекта Time
bool operator<(const Time& t1, const Time& t2)
{
	int t1Sec = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
	int t2Sec = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
	return t1Sec < t2Sec;
}

bool operator>(const Time& t1, const Time& t2)
{
	int t1Sec = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
	int t2Sec = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
	return t1Sec > t2Sec;
}

// перегрузка оператора потокового вывода
std::ostream& operator<< (std::ostream& out, const Time& t)
{
	return out << t.hours << ":" << t.minutes << ":" << t.seconds;
}
