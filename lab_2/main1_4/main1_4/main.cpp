//
//  main.cpp
//  main1_4
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
    
    double a,x,X2,X3,b,y,z;
    int m;
    
    cout<<"Введите значение х:";
    cin>>x;
    cout<<"Введите значение а:";
    cin>>a;
    cout<<"Введите значение z:";
    cin>>z;
    cout<<"Введите значение b:";
    cin>>b;
    
    X2 = pow(x,2);
    X3 = pow(x, 3);
    
    y = (2 * a * pow(cos(X2), 3)) + pow(sin(X3), 2) - (b * m);
    
    cout << endl
         << "1) y = (2 * a * pow(cos(X2), 3)) + pow(sin(X3), 2) - (b * m) при m = x^2" << endl
         << "2) y = (2 * a * pow(cos(X2), 3)) + pow(sin(X3), 2) - (b * m) при m = x/3" << endl
         << "3) y = (2 * a * pow(cos(X2), 3)) + pow(sin(X3), 2) - (b * m) при m = 2x" << endl
         << "Введите номер вычисляемой функции: ";
    cin >> m;
    
    if (z<1) {
        x = pow(z, 3)+0.2;
         
    }
    else {
        x = z + log(z);
    }
    
    switch (m)
    {
    case 1 :
        m = pow(x, 2);
            cout<<"Значение функции = "<<y<<endl;
        break;
    case 2 :
        m = x / 3;
            cout<<"Значение функции = "<<y<<endl;
        break;
    case 3 :
        m = 2 * x;
            cout<<"Значение функции = "<<y<<endl;
        break;
    default :
        cout << "Ошибка!" << endl;
    }
    
    
    return 0;
}
