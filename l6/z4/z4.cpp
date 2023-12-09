#include <iostream>
using namespace std;

class Children
{
	char name[32]; // поля закрытые по умолчанию
	char surname[32];
	int age;
public: // открытые поля
	void fillData();
	void showData();
};

int main()
{
	setlocale(LC_ALL, "rus");

	Children FirstChild, SecondChild;

	cout << "Введите данные: ";
	FirstChild.fillData();
	SecondChild.fillData();

	FirstChild.showData();
	SecondChild.showData();

	return 0;
}
// определение методов класса
void Children::fillData()
{
	cout << "Имя: ";
	cin.getline(name, 32);
	cout << "Фамилия: ";
	cin.getline(surname, 32);
	cout << "Возраст: ";
	cin >> age;
	cin.get(); // для очистки буфера
}

//====================================
void Children::showData()
{
	cout << name << " " << surname << " " << age << " лет;\n";
}