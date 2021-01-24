//
//  main.cpp
//  lb5_3
//
//  Created by Дима Гузерчук on 10/12/20.
//

#include <iostream>
#include <math.h>

int perimetr1(int sumIn, int sumOut){
    int perA;
    perA = sumIn-sumOut;
    return perA;
}
int perimetr2(int sumInB, int sumOutB){
    int perB;
    perB = sumInB-sumOutB;
    return perB;
}

int main() {
    using namespace std;
    
    int n, sumA = 0, sumB = 0, sumIn = 0, sumOut = 0, perA = 0, sumInB = 0, sumOutB= 0, perB = 0;
    cout<<"Введите размер массива: \n";
    cin>>n;
    int **arrA = new int*[n];
    int **arrB = new int*[n];
    
    for(int i=0; i<n;i++) {
        arrA[i]= new int[n];
    }
    for(int i=0; i<n;i++) {
        arrB[i]= new int[n];
    }
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i<=5) {
                arrA[i][j] = 3*i*j-3;
            }
            else{
                arrA[i][j] = 2*i*j-2;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i<=7) {
                arrB[i][j] = 5*i*j-4;
            }
            else{
                arrB[i][j] = 4*i*j-5;
            }
        }
    }
    cout<<"Массив A:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout<<arrA[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Массив B:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout<<arrB[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            sumIn += arrA[i][j];
        }
    }
    for (int i = 1; i<n-1; i++) {
        for (int j = 1; j<n-1; j++) {
            sumOut += arrA[i][j];
        }
    }
    
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            sumInB += arrB[i][j];
        }
    }
    for (int i = 1; i<n-1; i++) {
        for (int j = 1; j<n-1; j++) {
            sumOutB += arrB[i][j];
        }
    }
    perimetr1(sumIn,sumOut);
    perimetr2(sumInB, sumOutB);
    cout<<"Периметр матрицы А равен: "<<perimetr1(sumIn,sumOut)<<endl;
    cout<<"Периметр матрицы B равен: "<<perimetr2(sumInB, sumOutB)<<endl;
    delete [] arrA;
    delete [] arrB;
    return 0;
    }
