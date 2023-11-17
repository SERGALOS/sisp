#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	
	int height = 0; // высота треугольника

	cout << "Введите высоту равнобедренного треугольника: ";
	cin >> height;

	for (int i = 0; i < height; i++)
	{
		for (int j = height - i; j > 0; j--)
		{
			cout << ' ';
		}

		for (int j = height - 2 * i; j <= height; j++)
		{
			cout << '^';
		}
		cout << endl;
	}
	return 0;
}