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
		cin >> b;
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
			
		}
	}	while (b != c);
		
		// выделяем память под матрицы с заданным размером
		int** M1 = new int* [a]; //  сначал для масива указателей на строку матрицы
		for (int i(0); i < a; i++)
			M1[i] = new int[b]; // и для каждого элемента

		int** M2 = new int* [c];
		for (int i(0); i < c; i++)
			M2[i] = new int[d];
		
		int** M3 = new int* [a];
		for (int i(0); i < a; i++)
			M3[i] = new int[d];
		
		system("cls");
		cout << "Заполнените 1-й матрицу " << a << "x" << b << endl;
		for (int i(0); i < a; i++)
		{
			for (int j(0); j < b; j++)
			{
				cin >> M1[i][j];
			}
			cout << endl;
		}
		
		cout << "Заполните 2-ю матрицу " << c << "x" << d << endl;
		for (int i(0); i < c; i++)
		{
			for (int j(0); j < d; j++)
			{
				cin >> M2[i][j];
			}
			cout << endl;
		}

		for (int i(0); i < a; i++) // обнуляем 3-ю матрицу
		{
			for (int j(0); j < d; j++)
			{
				M3[i][j] = 0;
			}
		}
		
		system("cls");
		cout << "Первая матирца: " << endl;
		for (int i(0); i < a; i++)
		{
			cout << "| ";
			for (int j(0); j < b; j++)
			{
				cout << M1[i][j];
				if (j < b - 1) cout << " ";
				else cout << " |" << endl;
			}
		}
		
		cout << "\nВторая матрица : " << endl;
		for (int i(0); i < c; i++)
		{
			cout << "| ";
			for (int j(0); j < d; j++)
			{
				cout << M2[i][j];
				if (j < d - 1) cout << " ";
				else cout << " |" << endl;
			}
		}
		
		//умножение (произведение) матриц
		for (int i(0); i < a; i++)
		{
			for (int j(0); j < d; j++)
			{
				for (int m(0); m < b; m++)
					M3[i][j] += M1[i][m] * M2[m][j];
			}
		}

		cout << "\nИтоговая матрица : " << endl;
		for (int i(0); i < a; i++)
		{
			cout << "| ";
			for (int j(0); j < d; j++)
			{
				cout << M3[i][j] << " ";
			}
			cout << "|" << endl;
		}
		// освободим память
		for (int i(0); i < a; i++) //сначала элементы строк
		{
			delete[] M1[i];
			delete[] M2[i];
			delete[] M3[i];
		}

		delete[] M1; // затем память указателей на строки
		delete[] M2;
		delete[] M3;
}