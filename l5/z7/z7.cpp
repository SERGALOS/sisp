#include <iostream>
#include <ctime>
using namespace std;

void show2Arr(int** ArrForChange, int strAmout, int colAmout);
void fill2Array(int** ArrForChange, int strAmout, int colAmout);

int main()
{
	setlocale(LC_ALL, "rus");
	int stringAmout = 0;
	int columnAmout = 0;

	cout << "Введите раземерность двумерного масива!\n";
	cout << "Строк: ";
	cin >> stringAmout;
	cout << "Столбцов: ";
	cin >> columnAmout;

	// создавая двумерный динамический масив используем указатель на указатель/

	int** ArrayForChange = new int* [stringAmout];
	for (int i = 0; i < stringAmout; i++)
	{
		ArrayForChange[i] = new int[columnAmout];
	}

	fill2Array(ArrayForChange, stringAmout, columnAmout);// заполнение масива
	show2Arr(ArrayForChange, stringAmout, columnAmout); // показ на экран

	// Очисика памяти динамического двумерного масива
	for (int i = 0; i < stringAmout; i++)
	{
		delete[] ArrayForChange[i];
	}
	delete[] ArrayForChange;
	
	return 0;
}

void show2Arr(int** ArrForChange, int strAmount, int colAmount)
{
	cout << endl << endl;
	for (int i = 0; i < strAmount; i++)
	{
		cout << " |  ";
		for (int j = 0; j < colAmount; j++)
		{
			cout << ArrForChange[i][j] << " ";
		}
		cout << "|" << endl;
	}
}
// заполнение элементов двумерного масива случайными значениями
void fill2Array(int** ArrForChange, int strAmmoute, int colAmount)
{
	srand(time(0));
	for (int i = 0; i < strAmmoute; i++)
	{
		for (int j = 0; j < colAmount; j++)
		{
			ArrForChange[i][j] = 10 + rand() % 41;
		}
	}
}