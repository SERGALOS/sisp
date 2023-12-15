#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath> // Для функции sin и M_PI

using namespace std;

double power(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

int main() {
    setlocale(LC_ALL, "rus");
    double x;
    int m;
    const double start_x = -1.1;
    const double end_x = 0.3;
    const double step_x = 0.2;
    const int start_m = 1;
    const int end_m = 4;

    for (x = start_x; x <= end_x; x += step_x) {
        cout << "Вычислено при х = " << x << endl;
        for (m = start_m; m <= end_m; m++) {
            double x_power_m = power(x, m); // Возводим x в степень m
            double z = x_power_m * sin(m * x_power_m * M_PI / 180.0); // Вычисляем значение функции z(x, m), преобразование аргумента синуса из градусов в радианы
            cout << "Значение функции = " << z << " При m = " << m << endl;
        }
    }

    return 0;
}