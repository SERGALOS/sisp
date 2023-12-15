#include <iostream>
using namespace std;

void factorize(unsigned int number) 
{
    setlocale(LC_ALL, "rus");
    cout << "Простые множители числа " << number << ": ";
    for (unsigned int factor = 2; number > 1; ++factor) {
        while (number % factor == 0) {
            std::cout << factor << " ";
            number /= factor;
        }
    }
    std::cout << std::endl;
}

int main() {
    setlocale(LC_ALL, "rus");
    unsigned int number;
    std::cout << "Введите число для разложения: ";
    std::cin >> number;
    factorize(number);
    return 0;
}
