#pragma once
#include "human.h"
#include <string>
using namespace std;

class teacher : public human
{
private:
	// ������� ����
	unsigned int work_time;

public:
	// ����������� ������ teacher
	teacher(string last_name,
		string name,
		string second_name,
		unsigned int work_time); // ���������� ������� ����� �� ������� � �������������

	// ��������� ���������� ������� �����
	unsigned int get_work_time();
};

