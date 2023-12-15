#include <iostream>


using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");

    cout << "Введите двузначное натуральное число: ";
    int number;
    cin >> number;

    if (number < 10 || number > 99) {
        cout << "Введенное число не является двузначным!" << endl;
        return 1; // Прекращаем выполнение программы, так как число не подходит под условия
    }

    int digit1 = number / 10;        // Первая цифра числа
    int digit2 = number % 10;        // Вторая цифра числа
    int maxDigit = max(digit1, digit2); // Наибольшая цифра
    int minDigit = min(digit1, digit2); // Наименьшая цифра

    cout << "Наименьшая цифра в числе: " << minDigit << endl;
    cout << "Наибольшая цифра в числе: " << maxDigit << endl;

    return 0;
}
