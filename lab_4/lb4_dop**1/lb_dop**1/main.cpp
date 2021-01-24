//
//  main.cpp
//  lb_dop**1
//
//  Created by Дима Гузерчук on 10/27/20.
//

#include <iostream>
#include <cmath>

using namespace std;
int main() {
    
    int n,m;
    cout<<"Введите N(<=100): ";
    cin>>n;
    if (n>100) {
        cout<<"Вы ввели неправильный размер!";
        return 0;
    }
    
    cout<<"Введите M(<=100): ";
    cin>>m;
    if (m>100) {
        cout<<"Вы ввели неправильный размер!";
        return 0;
    }

    int **A = new int*[n];
    for (int i = 0; i<n; i++) {
        A[i] = new int[m];
    }
    cout<<endl;
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            A[i][j]= rand()%7;
        }
    }
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            cout<<A[i][j]<<"  ";
        }
        cout<<endl;
    }
    
    
    
    
    
    delete[] A;
    return 0;
}
