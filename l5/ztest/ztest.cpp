#include <iostream>
using namespace std;

void fillAndShowArry(int arrayForFilling[], int size);

int main()
{
	const int SiZE1 = 8;
	const int SIZE2 = 14;

	int arrayForFilling1[SiZE1] = {};
	int arrayForFilling2[SIZE2] = {};
	fillAndShowArry(arrayForFilling1, SiZE1);
	fillAndShowArry(arrayForFilling2, SIZE2);
	return 0;
}

void fillAndShowArry(int arrayForFilling[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arrayForFilling[i] = i + 1;
		cout << arrayForFilling[i] << "  ";
	}
	cout << endl;
    
}