#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

bool calcFirstMove();
void drowCude(int res);
int computerOrPlayerThrow();
void showIntermediateResult(int pointsOfComputer, int pointsOfUser, int numberThrow);

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int playerScore = 0; // для накопления очков 
	int computerScore = 0;
	int whoMove = 0;
	char userName[16] = {};

	cout << "Ваше имя (латиницей): ";
	cin >> userName;

	whoMove = calcFirstMove(); //если будет 0 - ходит игрок, 1 - ходит компьютер
	
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (whoMove)
			{
				cout << "\n Ходишь ты. ";
				playerScore += computerOrPlayerThrow();
			}
			else
			{
				cout << "\nХодит компьютер. ";
				computerOrPlayerThrow();
			}
			whoMove = !whoMove; // инверсия
		}

		showIntermediateResult(computerScore, playerScore, i);
	}

	if (computerScore > playerScore)
	{
		cout << "\n\nПобедитель этой игры - КОПЬЮТЕР\n!";
		cout << "Жалаем успехов в следующий раз. \a\a\a\a\a\n\n";
	}
	else if (computerScore < playerScore)
	{
		cout << "\n\nПобедитель этой игры - \n!";
		cout << "Поздравляем!!!!\a\a\a\a\a\n\n";
	}
	else
	{
		cout << "\n\nВ этой игре НИЧЬЯ \a\a\a\a\n\n";
	}
	
	return 0;
}

bool calcFirstMove() // генерирует и возвращает случайное число 0 или 1
{
	return rand() % 2;
}

void showIntermediateResult(int computerScore, int playerScore, int numberThrow)
{
	cout << "\n____________________________________\n";
	cout << "Комп: " << computerScore << " ||| Ты:" << playerScore << endl;
	cout << "После " << numberThrow + 1 << "-го броска ";
	if (computerScore > playerScore)
		cout
}