#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int enterNumber = 0;

	cout << "Ввкдите целое число (от 1 до 9999): ";
	cin >> enterNumber; 
		
	// проверяем входит ли введённое число в заданный диапазон
	if (enterNumber <= 0 || enterNumber > 9999)
		cout << "Число не входит в диапозонн от 1 до 9999!\n";
	else //если да - приступаем к выводу на экран
	{
		cout << "\n Вы ввели: ";

		// чтобы добраться до первой цифры в ведённом числе
		// (если оно четырёхзначное), надо это число поделить
		// на 1000 и взять от него остаток от деления на 10
		// например 8 888 / 1000 = 8 (888 тысячные отбрасыаются
		// т.к введённое число типа int), далее 8 % 10 = 8
		// так же не ошибитесь с оператором == (равно)
		if ((enterNumber / 1000) % 10 == 1) cout << "Одна тысяча ";
		else if ((enterNumber / 1000) % 10 == 2) cout << "Две тысячи ";
		else if ((enterNumber / 1000) % 10 == 3) cout << "Три тысячи ";
		else if ((enterNumber / 1000) % 10 == 4) cout << "Четыре тысячи ";
		else if ((enterNumber / 1000) % 10 == 5) cout << "Пять тысяч ";
		else if ((enterNumber / 1000) % 10 == 6) cout << "Шесть тысяч ";
		else if ((enterNumber / 1000) % 10 == 7) cout << "Семь тысяч";
		else if ((enterNumber / 1000) % 10 == 8) cout << "Восемь тысяч ";
		else if ((enterNumber / 1000) % 10 == 9) cout << "Девять тысяч ";
		

		if ((enterNumber / 100) % 10 == 1) cout << "Cто ";
		else if ((enterNumber / 100) % 10 == 2) cout << "Двести";
		else if ((enterNumber / 100) % 10 == 3) cout << "Триста";
		else if ((enterNumber / 100) % 10 == 4) cout << "Четыреста";
		else if ((enterNumber / 100) % 10 == 5) cout << "Пятьсот";
		else if ((enterNumber / 100) % 10 == 6) cout << "Шестьсот";
		else if ((enterNumber / 100) % 10 == 7) cout << "Семьсот";
		else if ((enterNumber / 100) % 10 == 8) cout << "Восемьсот";
		else if ((enterNumber / 100) % 10 == 9) cout << "Девятьсот";
		
		if ((enterNumber / 10) % 10 == 1)
		{
			if ((enterNumber / 10) % 10 == 0) cout << "Десять долларов";
			else if ((enterNumber / 10) % 10 == 1) cout << "Одинадцат долларов";
			else if ((enterNumber / 10) % 10 == 2) cout << "Двенадцать долларов";
			else if ((enterNumber / 10) % 10 == 3) cout << "Тринадцать долларов";
			else if ((enterNumber / 10) % 10 == 4) cout << "Четырнадцать долларов";
			else if ((enterNumber / 10) % 10 == 5) cout << "Пятнадцать долларов";
			else if ((enterNumber / 10) % 10 == 6) cout << "Шестнадцать долларов";
			else if ((enterNumber / 10) % 10 == 7) cout << "Семнадцать долларов";
			else if ((enterNumber / 10) % 10 == 8) cout << "Восемнадцать долларов";
			else if ((enterNumber / 10) % 10 == 9) cout << "Девятнадцат долларов";
		}

		if ((enterNumber / 10) % 10 == 2) cout << "двадцать ";
		else if ((enterNumber / 10) % 10 == 3) cout << "тридцать ";
		else if ((enterNumber / 10) % 10 == 4) cout << "сорок";
		else if ((enterNumber / 10) % 10 == 5) cout << "пятьдесят";
		else if ((enterNumber / 10) % 10 == 6) cout << "шестдесят";
		else if ((enterNumber / 10) % 10 == 7) cout << "семьдесят";
		else if ((enterNumber / 10) % 10 == 8) cout << "восемьдесят";
		else if ((enterNumber / 10) % 10 == 9) cout << "девяносто";

		if ((enterNumber / 10) % 10 != 1)
		{
			if (enterNumber % 10 == 0) cout << "долларов";
			else if (enterNumber % 10 == 1) cout << "Один доллар";
			else if (enterNumber % 10 == 2) cout << "Два доллора";
			else if (enterNumber % 10 == 3) cout << "Три доллора";
			else if (enterNumber % 10 == 4) cout << "Четыре доллора";
			else if (enterNumber % 10 == 5) cout << "Пять долларов";
			else if (enterNumber % 10 == 6) cout << "Шесть долларо";
			else if (enterNumber % 10 == 7) cout << "Семь долларов";
			else if (enterNumber % 10 == 8) cout << "Восемь долларов";
			else if (enterNumber % 10 == 9) cout << "Девять долларов";
		}
		
	}
	cout << endl << endl;
	return 0;
}