// Реализация алгоритмов поиска методом транспозиции

#include <iostream>
using namespace std;

int search(int *a, int n, int key) 
{
	int temp;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == key) 
		{
			// возвращаем индекс элемента
			if (i == 0)
				return i;
			// сдвигаем элемент к началу и возвращаем его индекс
			temp = a[i];
			a[i] = a[i - 1];
			a[i - 1] = temp;
			return i;
		}
	}
	return -1;
}

int main()
{
	int n; // размер массива
	int key; // элемент, который нужно найти
	int idx; // индекс искомого элемента

	cout << "Enter the srray size ";
	cin >> n;
	cout << "Enter the items ";
	int* arr = new int[n]; // создаем массив заданного размера
	// вводим элементы массива
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	while (true) 
	{
		cout << "Enter the item you need to find ";
		cin >> key;
		idx = search(arr, n, key);
		if (idx == -1)
			cout << "There is no item in the array ";
		else
			cout << "Number " << key << " has index " << idx << "\n";
	}
	
	return 0;
}

