//
//  main.cpp
//  lb5 dop1*
//
//  Created by Дима Гузерчук on 8.12.20.
//

#include <iostream>

using namespace std;

void arrayInput(const int dimN, const int dimM, int**& arr) {
    int n = 0, m = 0;
    while (n < dimN) {
        cout << "Введите неотрицательный элемент массива [" << n + 1 << ", " << m + 1 << "] ";
        cin >> arr[n][m];
        while (arr[n][m] < 0) {
            cout << "Повторите ввод";
            cin >> arr[n][m];
        }

        if (m + 1 == dimM) {
            n += 1;
            m = 0;
        }
        else {
            m += 1;
        }
    }
}

void arrayOutputInitial(const int dimN, const int dimM, int** arr) {
    int n = 0, m = 0;
    cout << "Входные данные: " << "\n";
    while (n < dimN + 1) {
        if (m + 1 == dimM) {
            cout << arr[n][m] << "\n";
            n += 1;
            m = 0;
        }
        else {
            cout << arr[n][m] << "\t";
            m += 1;
        }
    }
}

int FuncF(int n) {
    if (n % 10 > 0) {
        return n % 10;
    }
    else if (n == 0) {
        return 0;
    }
    else{
        return FuncF(n / 10);
    }
}

int FuncS(const int p, const int q) {
    int sum = 0;
    for (int i = p; i <= q; i++) {
        sum += FuncF(i);
    }
    return sum;
}

void arrayOutputFinal(const int dimN, const int dimM, int** arr) {
    int n = 0, m = 0;
    cout << "Конечный двумерный массив: " << "\n";
    while (n < dimN) {
        if (m + 1 == dimM) {
            cout << arr[n][m] << "\n";
            n += 1;
            m = 0;
        }
        else {
            cout << arr[n][m] << "\t";
            m += 1;
        }
        if (n == dimN) {
            n = 0;
            m = 0;
            break;
        }
    }
}

int main()
{
    int dimN = 0, dimM = 2;
    setlocale(LC_ALL, "ru");
    cout << "Введите количество строк p и q ";
    cin >> dimN;
    int* result = new int[dimN];
    int** arr = new int* [dimN + 1];
    for (int i = 0; i < dimN + 1; i++) {
        arr[i] = new int[dimM];
    }
    arr[dimN][0] = -1;
    arr[dimN][1] = -1;
    arrayInput(dimN, dimM, arr);

    arrayOutputInitial(dimN, dimM, arr);
    int n = 0, m = 0;
    cout << "Выходные данные:" << "\n";
    while (arr[n][0] >= 0 && arr[n][1] >= 0) {
        int comp = FuncS(arr[n][0], arr[n][1]);
        cout << comp << "\n";
        n++;
    }
}
