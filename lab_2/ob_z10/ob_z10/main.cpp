//
//  main.cpp
//  ob_z10
//
//  Created by Дима Гузерчук on 9/8/20.
//  Copyright © 2020 Дима Гузерчук. All rights reserved.
//

#include <iostream>
#include <math.h>

int main() {
    
    using std::cout;
    using std::cin;
    using std::endl;
    
    int G,a,b,c;
    cout<<"Добро пожаловать! Программа для вычисления вашего возраста"<<endl;
    cout<<"Введите ваш год рождения :";
    cin>>G;
    
    cout<<"Введите текущий год :";
    cin>>a;
    
    if (a>=G)
        b = a - G;
        else
            cout<<"Перепроверьте введённые данные";
    
    c = b%10;
    switch (c) {
        case (1):
            cout<<b<<" год\n";
        break;

        case (2):
            cout<<b<<" года\n";
        break;

        case (3):
            cout<<b<<" года\n";
        break;
        case (4):
            cout<<b<<" года\n";
        break;
            
        default:
            cout<<b<<" лет\n";
        break;
    }
    return 0;
}
