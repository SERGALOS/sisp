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

}