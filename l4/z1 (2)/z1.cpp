#include <iostream>
using namespace std;

void primeFactors(int n) {
    while (n % 2 == 0) {
        cout << "2 ";
        n = n / 2;
    }

    for (int i = 3; i * i <= n; i = i + 2) {
        while (n % i == 0) {
            cout << i << " ";
            n = n / i;
        }
    }

    if (n > 2)
        cout << n << " ";
}

int main() 
{
    setlocale(LC_ALL, "rus");
    int n;

    cout << "Введите число: ";
    cin >> n;

    cout << "Простые множители числа " << n << ": ";
    primeFactors(n);

    return 0;
}
