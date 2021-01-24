//
//  main.cpp
//  23
//
//  Created by Дима Гузерчук on 10/29/20.
//

#include <iostream>
#include <cmath>
#include <time.h>

using namespace::std;
int main() {
    srand(time(NULL));
    int n,S = 0;
    
    cout<<"enter size";
    cin>>n;
    
    int A[n][n];
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            A[i][j]= rand()%4;
        }
    }
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            cout<<A[i][j]<<"  ";
        }cout<<endl;
    }
    
    for (int i = 0; i<n; i++) {
        for (int j = n-1; j<n; j++) {
                S += A[i][n-i-1];
        }
    }
    cout<<S<<endl;
    return 0;
}
