﻿#include <iostream>
using namespace std;

class Matrix
{
    int ** matrixInClass;
public:
    void setMatrix(int rowAmount, int colAmount);
    void changeRowAndColumn(int rowAmount, int colAmount);
};

void Matrix::setMatrix(int rowAmount, int colAmount) // заполнение массива данными
{
    matrixInClass = new int* [rowAmount]; // выделение памяти для матрицы
    for (int i = 0; i < rowAmount; i++)
    {
        matrixInClass[i] = new int[colAmount];
    }
    // заполнение массива
    for (int i = 0; i < rowAmount; i++)
    {
        for (int j = 0; j < colAmount; j++)
        {
            matrixInClass[i][j] = i + j;
            cout << matrixInClass[i][j] << " ";
        }
        cout << " | " << endl;
    }
    cout << endl;
}

void Matrix::changeRowAndColumn(int rowAmount, int colAmount)
{
    int** tempMatrix = new int* [colAmount]; // выделение памяти для временной матрицы
    for (int i = 0; i < colAmount; i++)
    {
        tempMatrix[i] = new int[rowAmount];
    }

    for (int i = 0; i < colAmount; i++) // копируем столбцы в строки, а строки в столбцы
    {
        for (int j = 0; j < rowAmount; j++)
        {
            tempMatrix[i][j] = matrixInClass[j][i];
        }
        cout << endl;
    }


    for (int i = 0; i < rowAmount; i++) // Освобождаем память перед выделением новой
    {
        delete[] matrixInClass[i];
    }
    delete[] matrixInClass;

    matrixInClass = new int* [colAmount]; // выделение новой памяти
    for (int i = 0; i < colAmount; i++)
    {
        matrixInClass[i] = new int[rowAmount];
    }
    for (int i = 0; i < colAmount; i++)
    {
        cout << "|";
        for (int j = 0; j < rowAmount; j++)
        {
            matrixInClass[i][j] = tempMatrix[i][j];
            cout << matrixInClass[i][j] << " ";
        }
        cout << "|" << endl;
    }

    for (int i = 0; i < colAmount; i++) // Освобождаем память временной матрицы
    {
        delete[] tempMatrix[i];
    }
    delete[] tempMatrix;
}

int main()
{
    setlocale(LC_ALL, "rus");

    int rowAmount;
    int colAmount;
    cout << "Введите кол-во строк двухмерного массива: ";
    cin >> rowAmount;
    cout << "Введите кол-во столбцов двухмерного массива: ";
    cin >> colAmount;

    Matrix Object;

    Object.setMatrix(rowAmount, colAmount);

    cout << "\nЗамена значений строк на значения столбцов: ";
    Object.changeRowAndColumn(rowAmount, colAmount);

    return 0;
}