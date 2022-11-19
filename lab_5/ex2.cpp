// Возврат массива из функции

#include <iostream>
#include <vector>
using namespace std;

int *max_vect(int kc, int a[], int b[])
{
	int *c = new int[kc]; // создаем массив нужного размера

	for (int i = 0; i < kc; i++) 
	{
		// выбираем максимальный элемент из двух массивов
		if (a[i] > b[i])
			c[i] = a[i];
		else
			c[i] = b[i];
	}

	return c;
}

int main()
{
	int a[] = { 1,2,3,4,5,6,7,2 };
	int b[] = { 7,6,5,4,3,2,1,3 };
	int kc = sizeof(a) / sizeof(a[0]); // количество элементов массива
	int* c; // указатель на результирующий массив
	c = max_vect(kc, a, b); // вызов функции для создания массива
	for (int i = 0;i < kc; i++) // вывод результата.
		cout << c[i] << " ";
	cout << endl;
	delete[]c; // возврат памяти.
}