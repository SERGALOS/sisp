#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	
	int dayNumber; //будет хранить выбор пользователя

	cout << "Введите день недели (1, 2, 3...): ";
	cin >> dayNumber; // ввод значения
	switch (dayNumber)
	{
	case 1:
		cout << "Понедельник: \n8:00 Работа \n19:00 Тренировка \n";
	break;
	case 2:
		cout << "Вторник: \n8:00 Работа \n";
			break;
	case 3:
		cout << "Среда: \n8:00 Работа \n19:00 Басейн \n";
			break;
	case 4:
		cout << "Четверг: \n8:00 Работа \n20:00 Др бабушки \n";
			break;
	case 5:
		cout << "Пятница: \n8:00 Работа \n17:00 Тренировка \n";
			break;
	case 6:
		cout << "Субота: \nПикник \n";
			break;
	case 7:
		cout << "Воскресенье: \nЧто угодно \n";
			break;
	default:
		cout << "Нет такого дня недели ))" << endl;
	}
	return 0;
}