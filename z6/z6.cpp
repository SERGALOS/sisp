#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const int MatrixSize = 7;

	int ourMatrix[MatrixSize][MatrixSize] = {};
	int rowSum[MatrixSize] = {}; // для записи суммы в строках
	int numMaxRow = 0; // номер строки с максимальной суммой

	srand(time(NULL));
	for (int rowNum = 0; rowNum < MatrixSize; rowNum++)
	{
		cout << " | ";
		for (int columnNum = 0; columnNum < MatrixSize; columnNum++)
		{
			ourMatrix[rowNum][columnNum] = 10 + rand() % 91;
			cout << setw(4) << ourMatrix[rowNum][columnNum] << "  ";
		}
		cout << " | " << endl;
	}
	
	// подсчет суммы отдельно в каждой строке
	for (int rowNum = 0; rowNum < MatrixSize; rowNum++)
	{
		for (int columnNum = 0; columnNum < MatrixSize; columnNum++)
		{
			rowSum[rowNum] += ourMatrix[rowNum][columnNum];
		}
	}
	
	cout << "\nСумма по строкам!\n";
	for (int i = 0; i < MatrixSize; i++)
	{
		if (rowSum[i] > rowSum[numMaxRow])
		{
			numMaxRow = i;
		}
	}
	cout << "Строка, сумма элементов которой максимальна: " << numMaxRow + 1;
	cout << endl << endl;

	return 0;
}