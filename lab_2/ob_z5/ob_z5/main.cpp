//
//  main.cpp
//  ob_z5
//
//  Created by Дима Гузерчук on 9/8/20.
//  Copyright © 2020 Дима Гузерчук. All rights reserved.
//

#include <iostream>
#include <cmath>
int main() {
    
    using std::cout;
    using std::cin;
    using std::endl;
    
    
    double x1, x2, m, e = 2.718, k, L,b1,b2;
    cout<<"Введите значение переменной х1 = ";
    cin>>x1;
    cout<<"Введите значение переменной х2 = ";
    cin>>x2;
    cout<<"Введите значение переменной m = ";
    cin>>m;
    b1=pow(x1, 2);
    b2=pow(x2,3);
        
    k = pow((cos(b1)), 3) + pow((sin(b2)), 2);
    
    if (k<1)
        L = pow(k, 3) + pow(m, 0.2);
        else
            L = pow(k, 2) - pow(e, m);
                                     
    cout<<"Значение переменной = "<<L<<endl;
    return 0;
}
