#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int mainNumber = 5678;

	cout << "Дано целое число:" << mainNumber << endl;
	cout << "Число наизнанку:";
	// остаток от деления четырёхзначного числа 5678 на 10
	cout << mainNumber % 10; // 5678 % 10 = 8
	// далее делим mainNumber на 10 и записываем в переменую 
	// так как тип переменной int, дробная часть отбросится
	// и mainNumber будет равен 567 (а не 567,8)
	mainNumber /= 10;
		// показываем остаток от деления 567 на 10 на экран
		cout << mainNumber % 10;
	mainNumber /= 10;
		cout << mainNumber % 10;
		mainNumber /= 10;
		cout << mainNumber % 10;
		mainNumber /= 10;

		cout << endl << endl;
	return 0;
}