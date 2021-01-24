//
//  main.cpp
//  lb4_dop**3
//
//  Created by Дима Гузерчук on 10/27/20.
//

#include <iostream>

using namespace std;
int main(){
    //Ввод параметров матрицы
    cout << "Введите ширину матрицы:  ";
    int nX;
    cin >> nX;
    cout << "Введите длину матрицы:   ";
    int nY;
    cin >> nY;
    //Создание динамического массива
    int **massiv = new int*[nX];
    for (int tmp = 0; tmp < nX; tmp++)  massiv[tmp] = new int[nY];
    
    int i = 0, j = 0, c = 0, d = 1;
    int a = nX;
    int b = nY;
    int nLastNumber = 1; //Счетчик ячеек матрицы
    int maxNumber = nY*nX; //Максивальное число матрицы
    
    //пока не заполним все ячейки -
    while (true){
        a--;
        b--;
        
        while (j < b){
            massiv[i][j] = nLastNumber;
            nLastNumber++;
            j++;
        }
        if (nLastNumber == maxNumber) break;
 
        while (i < a){
            massiv[i][j] = nLastNumber;
            nLastNumber++;
            i++;
        }
        if (nLastNumber == maxNumber) break;
 
        j = b;
        i = a;
                
        while (j > c){
            massiv[i][j] = nLastNumber;
            nLastNumber++;
            j--;
        }
        if (nLastNumber == maxNumber) break;
        
        while (i > d){
 
            massiv[i][j] = nLastNumber;
            nLastNumber++;
            i--;
        }
        if (nLastNumber == maxNumber)  break;
 
        j = c;
        i = d;
        c++;
        d++;
 
 
    }
    massiv[i][j] = maxNumber;
    //Вывод матрицы
    for (j = 0; j < nY; j++){
        cout << "\n";
        for (i = 0; i < nX; i++){
            cout << massiv[i][j] << "\t";
        }
    }
    //Удаление динамического массива
    for (i = 0; i < nX; i++) {
        delete[] massiv[i];
    }
    delete[] massiv;
    cout << "\n";
    return 0;
}
