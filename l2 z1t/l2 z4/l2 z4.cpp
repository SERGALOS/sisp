#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int NumberOfFinger = 0;

	cout << "Введите номер: ";
	cin >> NumberOfFinger;

	if (NumberOfFinger == 1)
		cout << "\nРезультат: большой палец \n ";
	else if (NumberOfFinger == 2)
		cout << "\nРезультат: указательный палец \n ";
	else if (NumberOfFinger == 3)
		cout << "\nРезультат: средний палец \n ";
	else if (NumberOfFinger == 4)
		cout << "\nРезультат: безымянный палец \n ";
	else if (NumberOfFinger == 5)
		cout << "\nРезультат: мизинец \n ";
	else
		cout << "\nНет соответствий!\n \n ";
	return 0;
}