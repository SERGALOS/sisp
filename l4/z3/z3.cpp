#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const int SIZE = 10;

	int ourArr[SIZE] = {};
	int ourArr2[SIZE] = {};
	int ourArr3[SIZE] = {};
	
	srand(time(NULL));
	// заполняем первые два массива
	cout << "Массив ourArr:  ";
	for (int i = 0; i < SIZE; i++)
	{
		ourArr[i] = 10 + rand() % 21;
		cout << ourArr[i] << " | ";
	}
	cout << endl << endl;

	cout << "Масив ourArr2:  ";
	for (int i = 0; i < SIZE; i++)
	{
		ourArr2[i] = 10 + rand() % 21;
		cout << ourArr2[i] << " | ";
	}
	cout << endl << endl;

	// заполняем третий масив
	cout << "Масив ourArr3:  ";
	for (int i = 0; i < SIZE; i++)
	{
		ourArr3[i] = ourArr2[i] + ourArr3[i];
		cout << ourArr3[i] << " | ";
	}
	cout << endl << endl;

	// ищем среднее ариф., минимум и максимум
	int averageValue = 0;
	int sum = 0;
	int minValue = ourArr3[0];
	int maxValue = ourArr3[0];

	for (int i = 0; i < SIZE; i++)
	{
		sum += ourArr3[i];

		if (ourArr3[i] < minValue)
		{
			minValue = ourArr3[i];
		}
		if (ourArr3[i] > maxValue)
		{
			maxValue = ourArr3[i];
		}
	}	
	averageValue = sum / SIZE;

	cout << "Среднее арифметическое = " << averageValue << endl;
	cout << "Минимальное значение = " << minValue << endl;
	cout << "Максимальное значение = " << maxValue << endl;

	return 0;
}