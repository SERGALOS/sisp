#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const int RowCount = 3;
	const int ColumnCount = 4;
	
	int ourMatrix[RowCount][ColumnCount] = {};

	for (int rowNum = 0; rowNum < RowCount; rowNum++)
	{
		for (int columNum = 0; columNum < ColumnCount; columNum++)
		{
			ourMatrix[rowNum][columNum] = rowNum + columNum;
			cout << ourMatrix[rowNum][columNum] << "  ";
		}
		cout << endl;
	}
	return 0;
}