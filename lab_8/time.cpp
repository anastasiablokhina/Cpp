#include "time.h"

// ����������, ���������������� ���� �������� ����������
Time::Time()
{
	hours = 0;
	minutes = 0;
	seconds = 0;

}

// �����������, ���������������� ���� ��������� ����������
Time::Time(int hours, int minutes, int seconds)
{
	this->seconds = seconds;
	this->minutes = minutes;
	this->hours = hours;
	normalize();
}

void Time::normalize()
{
	minutes += seconds / 60;
	seconds %= 60;
	hours += minutes / 60;
	minutes %= 60;
	hours %= 24;
}


// �����, ��������� �������� ����� �� �����
void Time::getTime()
{
	cout << hours << ":" << minutes << ":" << seconds << endl;
};

// �����, ������������ �������� ���� �������� Time
Time Time::addTime(Time t)
{
	Time t_sum;
	t_sum.seconds = seconds + t.seconds;
	t_sum.minutes = minutes + t.minutes;
	t_sum.hours += hours + t.hours;
	t_sum.normalize();
	return t_sum;
}