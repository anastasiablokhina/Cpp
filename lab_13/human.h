#include <string>
#include <sstream>
#pragma once
using namespace std;

class human
{
public:
	// ����������� ������ human
	human(string last_name, string name, string second_name);

	// ��������� ��� ��������
	virtual string get_full_name();
private:
	string name; // ���
	string last_name; // �������
	string second_name; // ��������
};

