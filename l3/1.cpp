#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int Number;
    char Bec;
    bool var = true;
    do
    {
        var = false;
        cout << "������� �����; ";
        cin >> Number;
        cout << (Number * Number) << endl;
        cout << "���������? Y - �� N - ���: ";
        cin >> Bec;
        if (Bec == 'Y' || Bec == 'y')
            var = true;
        else if (Bec == 'N' || Bec == 'n')
            var = false;
        else
            var = true;
    } while (var);
    cout << endl;
    return 0;
}