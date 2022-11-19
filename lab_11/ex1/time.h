#pragma once
#include <iostream>

class Time
{
private:
	int hours;
	int minutes;
	int seconds;

public:
	// ����������, ���������������� ���� �������� ����������
	Time();

	// �����������, ���������������� ���� ��������� ����������
	Time(int hours, int minutes, int seconds);

	// ����������� ��� �������������� ������������� ���� � ��� Time
	Time(float val);

	// �������������� � ����������� ����
	void normalize();

	// �����, ������������ �������� ���� �������� Time
	Time operator+ (const Time& t2) const;

	// �����, ������������ ������ Time � ���������� ������������� ����
	Time operator+ (const float& val) const;

	// �����, ���������� �������� ���� �������� Time
	Time operator- (const Time& t2) const;

	// ���������� ��������� ���������� ������
	friend std::ostream& operator<< (std::ostream& out, const Time& t);

	// �����, ������������ ���������� ������������� ���� � ������ Time
	friend Time operator+(float val, const Time& t2);

	// ������, ������������ ��� ������� Time
	friend bool operator<(const Time& t1, const Time& t2);
	friend bool operator>(const Time& t1, const Time& t2);
};

