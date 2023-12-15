#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std; 

int main() {
    setlocale(LC_ALL, "rus");

    int n;
    cout << "Введите количество иксов: ";
    cin >> n;

    double Y = 0.0, Z, B, A, Beta, X;

    for (int i = 1; i <= n; ++i) {
        cout << "Введите значения Z, B, A, Beta для X" << i << ":n";
        cout << "Z = ";
        cin >> Z;
        cout << "B = ";
        cin >> B;
        cout << "A = ";
        cin >> A;
        cout << "Beta = ";
        cin >> Beta;

        Beta = Beta * M_PI / 180.0;

        X = pow(Z, 3) - B + pow(A, 2) / pow(tan(Beta), 2); 

        Y += X; 
    }

    cout << "Y = " << Y << endl;

    return 0;
}
