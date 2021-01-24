//
//  main.cpp
//  lb5_2
//
//  Created by Дима Гузерчук on 10/11/20.
//

#include <iostream>

int main() {
    using namespace std;
    
    int size,sumA = 0,sumB = 0 ;
    
    cout<<"Введите размер массива:"<<endl;
    cin>>size;
    
    int **a=new int *[size];
    int **b=new int *[size];
    
    for(int i=0; i<size;i++) {
        a[i] = new int[size];
    }
    for(int i=0; i<size;i++) {
        b[i]= new int[size];
    }
    for(int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            a[i][j] = 3*i*j - 3;
        }
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0 ; j < size; j++) {
            b[i][j] = 2*i*j-2;
        }
    }
    for (int i = 0 ; i < size ; i++) {
        for (int j = 0 ; j < size; j++) {
            cout<<a[i][j]<<"\t";
        }cout<<endl;
    }
    cout<<"========================="<<endl;
    for (int i = 0 ; i < size ; i++) {
        for (int j = 0 ; j < size; j++) {
            cout<<b[i][j]<<"\t";
        }cout<<endl;
    }
    for (int i = 0; i < size; i++) {
        sumA += a[i][i];
    }
    for (int i = 0; i < size; i++) {
        sumB += b[i][i];
    }
    printf("%d\n", sumA);
    printf("%d\n", sumB);

    delete [] a;
    delete [] b;
    return 0;
}
