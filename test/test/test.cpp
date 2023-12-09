#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int score = 0;
    char choice;

    cout << "Тест по языку программирования C++:" << endl;

    // Вопрос 1
    cout << "1. Что такое компилятор?" << endl;
    cout << "   a. Программа для создания графических интерфейсов" << endl;
    cout << "   b. Программа для перевода исходного кода на C++ в машинный код" << endl;
    cout << "   c. Программа для отладки программ" << endl;
    cout << "   d. Программа для создания и управления базами данных" << endl;
    cout << "Выберите вариант ответа (a, b, c или d): ";
    cin >> choice;
    if (choice == 'b') {
        score++;
    }


    // Вопрос 2
    cout << "2. Как объявить переменную типа целое число?" << endl;
    cout << "   a. int x;" << endl;
    cout << "   b. var x;" << endl;
    cout << "   c. float x;" << endl;
    cout << "   d. string x;" << endl;
    cout << "Выберите вариант ответа (a, b, c или d): ";
    cin >> choice;
    if (choice == 'a') {
        score++;
    }


    // Вопрос 3
    cout << "3. Какой оператор используется для условного ветвления в C++?" << endl;
    cout << "   a. for" << endl;
    cout << "   b. if" << endl;
    cout << "   c. while" << endl;
    cout << "   d. switch" << endl;
    cout << "Выберите вариант ответа (a, b, c или d): ";
    cin >> choice;
    if (choice == 'b') {
        score++;
    }

    // Вопрос 4
    cout << "4. Какой оператор используется для циклического повторения кода в C++?" << endl;
    cout << "   a. for" << endl;
    cout << "   b. if" << endl;
    cout << "   c. while" << endl;
    cout << "   d. switch" << endl;
    cout << "Выберите вариант ответа (a, b, c или d): ";
    cin >> choice;
    if (choice == 'c') {
        score++;
    }


    // Вопрос 5
    cout << "5. Как объединить две строки в C++?" << endl;
    cout << "   a. str1 + str2" << endl;
    cout << "   b. str1 . str2" << endl;
    cout << "   c. str1 && str2" << endl;
    cout << "   d. str1 || str2" << endl;
    cout << "Выберите вариант ответа (a, b, c или d): ";
    cin >> choice;
    if (choice == 'b') {
        score++;
    }

    // Вывод результатов
    cout << "Вы ответили правильно на " << score << " вопрос(а/ов) из 5." << endl;

    return 0;
}