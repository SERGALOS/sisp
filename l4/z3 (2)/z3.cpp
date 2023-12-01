#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

bool containsWord(const string& str, const string& word) {
    if (str.find(word) != string::npos) {
        return true;
    }
    return false;
}

string processString(string str, const string& searchWord) {
    istringstream iss(str);
    string word;
    string result;
    bool firstWord = true;

    // Удалить слова, начинающиеся с цифры
    while (iss >> word) {
        if (!isdigit(word[0])) {
            if (!firstWord) result += " ";
            result += word;
            firstWord = false;
        }
    }

    // Удалить первые два символа, если длина строки позволяет
    if (result.length() > 2) {
        result = result.substr(2);
    }
    else {
        result = "";
    }

    // Добавить *' после каждого символа
    std::string modifiedResult;
    for (char ch : result) {
        modifiedResult += ch;
        modifiedResult += "*'";
    }

    // Проверка на содержание заданного слова
    if (containsWord(modifiedResult, searchWord)) {
        cout << "Строка содержит слово "" << searchWord << "".n";
    }
    else {
        cout << "Строка не содержит слово "" << searchWord << "".n";
    }

    return modifiedResult;
}

int main() 
{
    setlocale(LC_ALL, "rus");
    string inputString = "Пример строки 123начало слов example";
    string searchWord = "слово";

    string result = processString(inputString, searchWord);
    cout << "Обработанная строка: " << result << std::endl;

    return 0;
}
