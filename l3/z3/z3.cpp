#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int boxWithApples = 15; // количество ящиков на складе
	int amountBoxesForSale = 0; // количество отгружаемых ящиков

	cout << "Сейчас на складе; " << boxWithApples << " ящиков с яблоками \n\n";
	for (int i = 1; ; i++) // сщётчиков i будет считать количество машин к погрузке
	{
		cout << "Сколько ящиков загрузить в " << i << "-ю машину?";
		cin >> amountBoxesForSale;
		
		if (amountBoxesForSale > boxWithApples)
		{
			cout << "\nНа сладе недостаточно товара!";
			cout << "Осталось только " << boxWithApples << " ящиков \n\n";
			i--; //уменьшить счётчик на еденицу
		}
		else
		{
			boxWithApples -= amountBoxesForSale; // перезаписываем значение
			cout << "Осталось " << boxWithApples << " ящиков. \n";
		}
		if (boxWithApples == 0) // если ящиков больше нет - выйти из цыкла
		{
			cout << "Яблоки закончились! Давай до свидания!\n";
			break;
		}
	}
	return 0;
}