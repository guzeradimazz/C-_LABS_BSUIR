//
//  main.cpp
//  ob_z6
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
    
    double a,b,c,d,Z;
    
    cout<<"Введите значение переменной a = ";
    cin>>a;
    cout<<"Введите значение переменной b = ";
    cin>>b;
    cout<<"Введите значение переменной c = ";
    cin>>c;
    cout<<"Введите значение переменной d = ";
    cin>>d;
    
    if (c>=d && a<d)
        Z = a + (b/c);
        else if(c<d && a>=d)
            Z = a -(b/c);
    else
        Z = 0;

    cout<<"Значение Z ="<<Z<<endl;
    
    return 0;
}
