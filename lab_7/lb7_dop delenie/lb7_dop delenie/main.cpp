//
//  main.cpp
//  lb7_dop delenie
//
//  Created by Дима Гузерчук on 10.12.20.
//

#include <iostream>
using namespace ::std;
void delenie5(int a){
    int i = 0, k = 0;
    while (i<=a) {
        if (a==i) {
            k = 1;
        }
        i+=5;
    }if (k==1) {
        cout  << "Деление на 5 выполняется"<< endl;
    }else{
        cout  << "Деление на 5 не выполняется"<< endl;
    }
}
void delenie47(int a){
    int i = 0, k = 0;
    while (i<=a) {
        if (a==i) {
            k = 1;
        }
        i+=47;
    }if (k==1) {
        cout  << "Деление на 47 выполняется"<< endl;
    }else{
        cout  << "Деление на 47 не выполняется"<< endl;
    }
}
void delenie89(int a){
    int i = 0, k = 0;
    while (i<=a) {
        if (a==i) {
            k = 1;
        }
        i+=89;
    }if (k==1) {
        cout  << "Деление на 89 выполняется"<< endl;
    }else{
        cout  << "Деление на 89 не выполняется"<< endl;
    }
}
int main(){
    int a;
    cout << " enter a\n>";
    cin >> a;
    delenie5(a);
    delenie47(a);
    delenie89(a);
    return 0;
}
