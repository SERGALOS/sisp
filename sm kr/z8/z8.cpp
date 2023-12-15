#include <iostream>
#include <vector>
#include <cmath> // Для функции fabs fabs () позволяет вычислить абсолютное значение по модулю x и возвращает значение типа double (число с плавающей точкой).

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int length;
    double element, sum = 0.0;

    cout << "Введите длину массива: ";
    cin >> length;

    vector<double> array(length);

    cout << "Введите " << length << " чисел:" << endl;
    for (int i = 0; i < length; ++i) {
        cin >> element;
        array[i] = element; // Записываем элемент в массив
        if (fabs(element) > 2.5) {
            sum += element * element; // Добавляем квадрат элемента к сумме
        }
    }

    cout << "Сумма квадратов чисел, модуль которых превышает 2.5: " << sum << endl;

    return 0;
}
