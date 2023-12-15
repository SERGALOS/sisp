#include <iostream> // Используем возможности C++ для ввода/вывода

int main() {
    setlocale(LC_ALL, "rus"); // Устанавливаем локализацию
    int N, M;
    double sum = 0.0;

    // Задать значения для N и M
    std::cout << "Введите N: ";
    std::cin >> N;
    std::cout << "Введите M: ";
    std::cin >> M;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            sum += static_cast<double>(i + j * j) / (i * i); // Вычисляем сумму согласно формуле
        }
    }

    // Вывод результата
    std::cout << "Сумма: " << sum << std::endl;

    return 0;
}
