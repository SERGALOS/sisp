#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

    double x, y;
    cout << "Введите значение x в градусах: ";
    cin >> x;
    cout << "Введите значение y в градусах: ";
    cin >> y;

    // Переводим углы из градусов в радианы
    double x_rad = x * M_PI / 180.0;
    double y_rad = y * M_PI / 180.0;

    // Вычисляем тангенс и котангенс
    double tan_x = tan(x_rad);
    double cot_x = 1.0 / tan_x;

    // Вычисляем значение выражения
    double result = pow((1 - tan_x), cot_x) + cos(x_rad - y_rad);

    // Выводим результат с округление до двух знаков после запятой
    cout << fixed << setprecision(2);
    cout << "ответ = " << result << endl;

    return 0;
}
