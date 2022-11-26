// Организация хранения данных в контейнере

#include <iostream>
#include <string>
#include <map>
using namespace std;

struct StudentGrade
{
    string name;
    char grade;
    StudentGrade(string name, char grade)
    {
        this->name = name;
        this->grade = grade;
    }
};

int main()
{ 
    map<string, char> gradebook; // контейнер журнал
    int n; // количество студентов в группе

    cout << "Enter the number of students ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string name;
        char grade;

        cout << "Enter student name and grade ";
        cin >> name >> grade;
  
        StudentGrade studentGrade = StudentGrade(name, grade);
        gradebook[studentGrade.name] = studentGrade.grade;    
    }

    for (const auto& student : gradebook)
    {
        cout << "Student: " << student.first << ", Grade: " << student.second << endl;
    }

    return 0;
}
