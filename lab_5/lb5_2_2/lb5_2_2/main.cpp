//
//  main.cpp
//  lb5_2_2
//
//  Created by Дима Гузерчук on 10/12/20.
//

#include <iostream>
#include <cmath>
using namespace std;
 
typedef bool checker_t(int);
typedef checker_t* pchecker_t;
 
bool checker(int e) {
    return e > -10 && e < 20;
}
bool recursive_check(int * a, size_t n, pchecker_t f) {
    if (n == 0) return true;
    return checker(a[0]) && recursive_check(a + 1, n - 1, f);
}
int main() {
    int n;
    cout<<"Введите количество элементов массива = "<<endl;
    cin>>n;
    int a[n];
    for(int i = 0 ;i < n; i++){
             cout << "A[" << i << "]"<< " = ";
             cin >> a[i];
        }
    bool condition = recursive_check(a, sizeof(a) / sizeof(a[0]), checker);
    if (condition){
        cout<<"Условие выполняется"<<endl;
    }else{
        cout<<"Условие не выполняется"<<endl;
         };
    return 0;
}
