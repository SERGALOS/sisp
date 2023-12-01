#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int ourArr[10] = {};
	const int lowerLimit = 7;
	const int upperLimit = 14;

	srand(time(NULL));
	for (int i = 0; i < 10; i++) // заполняем и показываем
	{
		ourArr[i] = lowerLimit + rand() % (upperLimit - lowerLimit + 1);
		cout << ourArr[i] << " | ";
	}
	
	cout << endl << endl;

	for (int i = 0; i < 10; i++)
	{
		if (ourArr[i] >= 10)
		{
			ourArr[i] -= 10;
		}
		cout << ourArr[i] << " | ";
	}
	cout << endl << endl;
	return 0;
}