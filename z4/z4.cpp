#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int amountDigits = 0; // Количество введённых чисел
	double totalSum = 0; // общая сумма
	double digit = 0;

	cout << "Введите числе, для расчета (выйти - 0)\n\n";

	do 
	{
		cout << "Число " << amountDigits + 1 << " = ";
		cin >> digit;

		if (digit) // если digit любое значение кроме 0(false)
		{
			amountDigits++;
			totalSum += digit;
		}
	} 
	while (digit);
	cout << "\n===================================\n";
	cout << "Количество введённых чисел: " << amountDigits << endl;
	cout << "Общая сумма: " << totalSum << endl;
	cout << "Среднее арифметическое: " << totalSum / amountDigits << endl;

	return 0;
}