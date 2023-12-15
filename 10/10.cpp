#include <iostream>
#include <vector>
using namespace std;

std::vector<double> linear_congruential_generator(unsigned seed, unsigned a, unsigned c, unsigned m, size_t n) {
    std::vector<double> random_numbers(n);
    unsigned y = seed;

    for (size_t i = 0; i < n; ++i) {
        y = (a * y + c) % m;
        random_numbers[i] = static_cast<double>(y) / m;
    }

    return random_numbers;
}

int main() {
    unsigned seed = 1;        // начальное значение (y0)
    unsigned a = 1664525;     // множитель
    unsigned c = 1013904223;  // инкремент
    unsigned m = 1 << 31;     // модуль (используем 2^31 в качестве модуля для примера)
    size_t n = 15;            // количество генерируемых чисел

    std::vector<double> pseudo_random_numbers = linear_congruential_generator(seed, a, c, m, n);

    // Вывод сгенерированных псевдослучайных чисел
    for (size_t i = 0; i < pseudo_random_numbers.size(); ++i) {
        std::cout << i + 1 << ": " << pseudo_random_numbers[i] << std::endl;
    }

    return 0;
}