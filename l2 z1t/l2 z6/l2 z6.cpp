#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	char answer; // будет хранить выбор пользователя
	bool var = true; // управляющая перемення цикла do while

	cout << "Введите букву из перечня, для расчёта времени в пути (A,B,C,D,E): ";
		do 
		{
			var = false; // для выхода из цикла, если не срабатывает default
			// т.е если найдётся подходящий case
			cin >> answer; // вывод значения

			switch (answer) // switch принимает символ answer и ищет подходящий case
			{
				case 'a':
				case 'A': // если answer содержит а или А
				cout << "Станция метро Trinitat Nova:";
				cout << "Время в пути - 15 мин. " << endl;
				break;
				case 'b':
				case 'B':
				cout << "Станция метро Casa be l'Aigua:";
				cout << "Время в пути - 19 мин. " << endl;
				break;
				case 'c':
				case 'C':
				cout << "Станция метро Torre Baro Valldona:";
				cout << "Время в пути - 25 мин. " << endl;
				break;
				case 'd':
				case 'D':
				cout << "Станция метро Ciutat Meidiana:";
				cout << "Время в пути - 30 мин. " << endl;
				break;
				case 'e':
				case 'E':
				cout << "Станция метро Can Cuias:";
				cout << "Время в пути - 38 мин. " << endl;
				break;
				default:
				cout << answer << " - некорректный ввод!";
				cout << "Сделайте правильный выбор (A,B,C,D,E):";
				var = true; // сновы присвоим true, чтобы цикл повторил работу
			}
		} 
		while (var); // цикл повторяется пока var будет true
		return 0;
}