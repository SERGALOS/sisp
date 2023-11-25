#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const int MatrixSize = 3;

	int OurMatrix[MatrixSize][MatrixSize] = {};
	int rowSum[MatrixSize] = {}; // для записи суммы по строкам
	int columnSum[MatrixSize] = {}; // ... по столбцам

	cout << "Заполните матрицу " << MatrixSize << 'x' << MatrixSize << " числами построчно. \n";
	for (int rowNum = 0; rowNum < MatrixSize; rowNum++)
	{
		for (int columnNum = 0; columnNum < MatrixSize; columnNum++)
		{
			cout << rowNum + 1 << "-я строка";
			cout << columnNum + 1 << "-й столбец";
			cin >> OurMatrix[rowNum][columnNum];
		}
		cout << endl;
		}

	// вывод на экран + подсчет суммы
	for (int rowNum = 0; rowNum < MatrixSize; rowNum++)
	{
		cout << " | ";
		for (int columnNum = 0; columnNum < MatrixSize; columnNum++)
		{
			cout << setw(4) << OurMatrix[rowNum][columnNum] << "  ";
			rowSum[rowNum] += OurMatrix[rowNum][columnNum];
			columnSum[rowNum] += OurMatrix[columnNum][rowNum];
		}
		cout << " | " << endl;
	}
		cout << "\n Сумма по строкам! \n";
		for (int i = 0; i < MatrixSize; i++)
		{
			cout << i + 1 << "-я строка: " << rowSum[i] << endl;
		}

		cout << "\n Сумма по строкам! \n";
		for (int i = 0; i < MatrixSize; i++)
		{
			cout << i + 1 << "-й столбец: " << columnSum[i] << endl;
		}
		return 0;
}