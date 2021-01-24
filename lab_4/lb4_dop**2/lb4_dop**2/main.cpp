//
//  main.cpp
//  lb4_dop**2
//
//  Created by Дима Гузерчук on 10/27/20.
//

#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int n;

    cout << "Введите размер: ";
    cin >> n;

    int** mas = new int*[n];

    for (int i = 0; i < n; i++){
        mas[i] = new int[n];
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            mas[i][j] = (i+j) % n + 1;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout<<mas[i][j]<< " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++){
        delete[] mas[i];
    }
    delete[] mas;

    return 0;
}
