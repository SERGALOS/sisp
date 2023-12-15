#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>


using namespace std;

// Объявление константы ускорения свободного падения на Земле (в м/с^2)
const double g = 9.80665;

int main() {
    setlocale(LC_ALL, "rus"); 

    cout << "Введите начальную скорость тела V (м/с): ";
    double V;
    cin >> V;

    cout << "Введите время полета тела T (с): ";
    double T;
    cin >> T;

    // Расчет альфа по формуле
    double alphaRadians = asin(g * T / (2 * V));

    // Перевод угла из радиан в градусы
    double alphaDegrees = alphaRadians * (180.0 / M_PI);

    // Вывод результата
    cout << "Угол альфа, под которым брошено тело по отношению к горизонту: "
        << alphaDegrees << " градусов" << endl;

    return 0;
}
