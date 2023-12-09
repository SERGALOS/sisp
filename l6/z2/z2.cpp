#include <iostream>
#include <conio.h>

using namespace std;

int main() // матрици произвольног размера
{
	setlocale(LC_ALL, "rus");

	int a; // размерность матриц
	int b;
	int c;
	int d;

	do
	{
		system("cls");
		cout << "Введите размерность 1-й матрицы: ";
		cin >> a;
		cin >> d;
		cout << endl;
		cout << "Введите размерность 2-й матрицы: ";
		cin >> c;
		cin >> d;
		cout << endl;
		if (b != c)
		{
			system("cls");
			cout << " Эти матрицы невозможно умножитиь!";
			cout << "\n Нажмите  Enter для повторного ввода!";
			getch();
		}
	} while (b != c)

		// выделяем память под матрицы с заданным размером
		int** M1 = new int* [a];
}