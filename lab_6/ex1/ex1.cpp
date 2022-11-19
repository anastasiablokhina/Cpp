// Запись текста в файл

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	system("chcp 1251"); // переходим на страницу 1251 для поддержки русского языка
	system("cls");       // очищаем окно консоли

	ofstream fout; // создание объекта класса ofstream 
	fout.open("poem.txt"); // открытие файла

	// если файл не открывается, сообщим об этом
	if (!fout) 
	{
		cout << "Ошибка открытия файла\n";
		return 1;
	}
	else
	{
		int n; // количество строк
		string line; // строка стихотворения
		cout << "Введите количество строк в стихотворении " << endl;
		cin >> n;
		cout << "Введите стихотворение" << endl;
		cin.ignore(); // отчистим ввод

		// считаем n строк
		for (int i = 0; i < n; i++)
		{
			getline(cin, line);
			fout << line << endl;
		}
	}
	fout.close(); // закроем файл

	return 0;
}

