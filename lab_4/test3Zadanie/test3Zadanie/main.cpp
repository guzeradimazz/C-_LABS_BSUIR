//
//  main.cpp
//  test3Zadanie
//
//  Created by Дима Гузерчук on 9/22/20.
//

#include <iostream>
#include <math.h>

int main(){
    
    using std::cin;
    using std::cout;
    using std::endl;
    
    int size;
    cout<<"Введите размер массива:"<<endl;
    cin>>size;
    int **a=new int *[size];
    for(int i=0; i<size;i++) {
        a[i]=new int[size];
    }
    int **b=new int *[size];
    for(int i=0; i<size;i++) {
        b[i]=new int[size];
    }
    for (int i=0;i<size;i++){
        cout<<endl;
        for (int j=0;j<size;j++){
            a[i][j] = rand()%2;
            cout<<a[i][j]<<" ";
        }
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            b[i][size-1-j] = a[j][i];
        }
    }
    cout << endl <<" При повороте матрицы на 90 градусов получаем:" << endl;
    for(int i=0;i<size;i++){
        cout<<endl;
        for(int j=0;j<size;j++)
                cout<<b[i][j]<<" ";
    }
    //очистка памяти
    for(int i=0; i<size;i++) {
        delete [] a[i];
    }
    delete [] a;
    for(int i=0; i<size;i++) {
        delete [] b[i];
    }
    delete [] b;
   //очистка памяти
    return 0;
}
