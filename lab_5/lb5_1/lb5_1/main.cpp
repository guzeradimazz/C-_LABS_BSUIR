//
//  main.cpp
//  lb5_1
//
//  Created by Дима Гузерчук on 10/11/20.
//

#include <iostream>
#include <math.h>


void arrayfunc(int *arrA, int *arrB){
    
}
int main() {
    using namespace std;
    
    int X,i,j;
    int *arrA = new int[8];
    int *arrB = new int[8];
    
    for (int i = 0; i<8; i++) {
        cout<<"Элемент массива A "<<i<<":";
        cin>>arrA[i];
    }
    for (int j = 0; j<8; j++) {
        cout<<"Элемент массива B "<<j<<":";
        cin>>arrB[j];
    }
    cout<<"Введите номер элемента(0,1,...7) массива А"<<endl;
    cin>>i;
    cout<<"Введите номер элемента(0,1,...7) массива А"<<endl;
    cin>>j;
    X = -(arrB[j]/arrA[i]);
    if (arrA[i] == 0) {
        X = 0;
    }
    cout<<"Решением уравнения является число:  "<<X<<endl;
    delete [] arrA;
    delete [] arrB;
    return 0;
}
