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
	Time();

	// �����������, ���������������� ���� ��������� ����������
	Time(int hours, int minutes, int seconds);

	void normalize();

	// �����, ��������� �������� ����� �� �����
	void getTime();

	// �����, ������������ �������� ���� �������� Time
	Time addTime(Time t);
};

