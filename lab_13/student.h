#include "human.h"
#include <string>
#include <vector>
#pragma once
using namespace std;

class student : public human
{
public:
	// ����������� ������ Student
	student(string last_name, string name, string second_name, vector<int> scores);
	// ��������� �������� ����� ��������
	float get_average_score();
private:
	// ������ ��������
	vector<int> scores;
};

