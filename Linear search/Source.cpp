﻿#include <iostream>

using namespace std;

int main()
{
	// Суть алгоритма линейного поиска заключается в сравнении каждого элемента массива с искомым значением.

	// Объявление переменной, которая содержит искомое значение.
	int nKey = 8;

	// Объявление переменной, которая будет содержать индекс найденного элемента. Если индекс будет 
	// равен -1, то искомое значение в массиве не найдено.
	int nIndex = -1;

	// Определение размера массива.
	const int nSize = 6;

	// Инициализация массива.
	int ar[nSize] = { 1, 3, 7, 8, 17, -5 };

	// Цикл, перебирающий все элементы массива.
	for (int i = 0; i < nSize; i++)
	{
		// Если текущее значение массива совпадает с искомым.
		if (ar[i] == nKey)
		{
			nIndex = i; // Запоминаем текущую позицию в массива.
			break; // Прерываем цикл.
		}
	}

	// Если индекс, по-прежнему, равен -1, то совпадений не найдено.
	if (nIndex == -1)
	{
		cout << "No matches found." << endl;
	}
	else
	{
		cout << "Match found at " << nIndex << " index." << endl;
	}

	return 0;
}