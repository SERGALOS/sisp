#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    double x, y, z;

    cout << "Введите координату x вектора: ";
    cin >> x;

    cout << "Введите координату y вектора: ";
    cin >> y;

    cout << "Введите координату z вектора: ";
    cin >> z;

    // Вычисление длины вектора по формуле корень квадратный из суммы квадратов координат
    double length = sqrt(x * x + y * y + z * z);

    // Вывод результата
    cout << "Длина вектора: " << length << endl;

    return 0;
}
