#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");

    int age = 0; // будет вводить пользователь
    int maxAge = 0; // для записи максимального количества лет
    int minAge = 100; // для записи минимального количества лет
    int sum = 0; // общая сумма для расчёта среднего
    int average = 0; // для записи среднего возраста поситиелей
    int amount = 0; // количество посетителей спортзала

    cout << "Введите количество посетителей спортзала: ";
    cin >> amount;

    for (int i = 0; i < amount; i++)
    {
        cout << "Введите возраст: " << i + 1 << "- го посетитиеля: "; // запрос на ввеление числа
        cin >> age;
        if (age > maxAge)
            maxAge = age;
        if (age < minAge)
            minAge = age;

        sum += age; // накопление общей суммы
    }

    average = sum / amount; // подсчёт среднего возраста
    cout << "\nСредний возраст всех посетителей:" << average << endl;
    cout << "\nСамый взрослый: " << maxAge << endl;
    cout << "\nСамый молодой: " << minAge << endl;

    return 0;
}