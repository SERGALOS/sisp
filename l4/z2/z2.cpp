#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const int SIZE = 50;
	
	int ourArr[SIZE] = {};

	srand(time(NULL));

	for (int i = 0; i < SIZE; )
	{
		ourArr[i] = 1 + rand() % 100;
		if (ourArr[i] % 2 != 0)
		{
			cout << ourArr[i] << " | ";
			i++;
		}
	}
	cout << endl << endl;

	return 0;
}