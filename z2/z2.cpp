#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus"); 

    int N, k;
    cout << "Введите количество членов (N): ";
    cin >> N;
    cout << "Введите степень (k): ";
    cin >> k;

    long long sum = 0;
    for (int i = 1; i <= N; ++i) {
        sum += static_cast<long long>(pow(i, k));
    }

    cout << "Алгебраическая сумма выражения: " << sum << endl;
    return 0;
}
