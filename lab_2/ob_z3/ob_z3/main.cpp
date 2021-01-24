//
//  main.cpp
//  ob_z3
//
//  Created by Дима Гузерчук on 9/7/20.
//  Copyright © 2020 Дима Гузерчук. All rights reserved.
//

#include <iostream>
#include <math.h>

int main() {

    using std::cout;
    using std::cin;
    using std::endl;

    char symbol, choosing='1';


    while(choosing!='Y'||choosing!='y'){
        double d;
    cout<<"Введите число\n";
    cin>>d;
    cout<<"+ or -";
    cin>>symbol;

    switch (symbol){
        case '+': d+=5;
            break;
        case '-': d-=5;
            break;
    default:
    cout<<"Неправильный ввод\n";
    }
    cout<<d;
    cin>>choosing;
    }
    return 0;
    }
