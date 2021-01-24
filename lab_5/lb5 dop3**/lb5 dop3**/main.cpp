//
//  main.cpp
//  lb5 dop3**
//
//  Created by Дима Гузерчук on 8.12.20.
//

#include <iostream>
#include <cmath>

using namespace std;

void arrayInput(const int dim, int*& arr) {
    for (int i = 0; i < dim; i++) {
        cout << "Введите n " << "(" << i + 1 << ") ";
        cin >> arr[i];
    }
}

void arrayOutputInitial(const int dim, int* arr) {
    cout << "Входные данные " << "\n";
    for (int i = 0; i < dim; i++) {
        cout << arr[i] << "\n";
    }
}

int funcF(const int n) {
    if (n == 0) {
        return 0;
    }
    if (n % 2 == 1) {
        return n + funcF(n - 1);
    }
    else {
        int k = n;
        while (k % 2 == 0) {
            k /= 2;
        }
        return k + funcF(n - 1);
    }

}

void arrayOutputFinal(const int dim, int* arr) {
    cout << "Выходные данные " << "\n";
    for (int i = 0; i < dim; i++) {
        cout << arr[i] << "\n";
    }
}

int main()
{
    setlocale(LC_ALL, "ru");
    int amount, sum = 0;
    cout << "Сколько n вы хотите ввести ";
    cin >> amount;
    int* arr = new int[amount];
    arrayInput(amount, arr);
    arrayOutputInitial(amount, arr);
    for (int i = 0; i < amount; i++) {
        arr[i] = funcF(arr[i]);
    }
    arrayOutputFinal(amount, arr);
    delete[] arr;
}
