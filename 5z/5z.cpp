#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int start = 0; // начало д-на
	int finish = 0; // конец д-на
	int sumUneven = 0;

	cout << "Введите начало диапазона: ";
	cin >> start;
	cout << "Введите конец диапазона: ";
	cin >> finish;

	int i = start; // управляющая перменная

	while (i <= finish)
	{
		if (i % 2 != 0)
		{
			cout << i << " "; // показать нечётные через пробел
			sumUneven += i; // накапливать их сумму
		}
		i++;
	}
	cout << "\n Сумма нечётныъ чисел в диапазоне от " << start << " no " << finish;
	cout << " = " << sumUneven << endl << endl;

	return 0;
}

