#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    double base;
    int exponent;
    double result = 1.0;

    cout << "Введите число: ";
    cin >> base;

    cout << "Введите степень: ";
    cin >> exponent;

    if (exponent < 0) {
        base = 1 / base;
        exponent = -exponent;
    }

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    cout << "Результат: " << result << endl;

    return 0;
}
