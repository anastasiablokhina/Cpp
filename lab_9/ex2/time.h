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
	// ����������, ���������������� ���� �������� ����������
	Time()
	{
		hours = 0;
		minutes = 0;
		seconds = 0;
	}

	// �����������, ���������������� ���� ��������� ����������
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

	// �����, ��������� �������� ����� �� �����
	void get_time()
	{
		cout << hours << ":" << minutes << ":" << seconds << endl;
	};

	// �����, ������������ �������� ���� �������� Time
	Time add_time(Time t)
	{
		Time t_sum;
		t_sum.seconds = (seconds + t.seconds) % 60;
		t_sum.minutes = (minutes + t.minutes + ((seconds + t.seconds) / 60)) % 60;
		t_sum.hours = (hours + t.hours + (minutes + t.minutes + ((seconds + t.seconds) / 60)) / 60) % 24;

		return t_sum;
	}

	// ����� ����������
	class ExTime 
	{
	public:
		string origin; // ��� ����� �������
		string description; // ��� �������� ������
		ExTime(string org , string desc)
		{
			origin = org ; // ��� �������� ������
			description = desc; // �������� ������
		}
	};
};

