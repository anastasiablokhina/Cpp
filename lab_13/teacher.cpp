#include "teacher.h"
using namespace std;

// ����������� ������ teacher
teacher::teacher(string last_name, 
	string name,
	string second_name,
	unsigned int work_time) // ���������� ������� ����� �� ������� � �������������
	: human(last_name, 
			name,
			second_name)
{
	this->work_time = work_time;
}

// ��������� ���������� ������� �����
unsigned int teacher::get_work_time()
{
	return this->work_time;
}
