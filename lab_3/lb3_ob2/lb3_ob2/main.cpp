//
//  main.cpp
//  lb3_ob2
//
//  Created by Дима Гузерчук on 9/12/20.
//  Copyright © 2020 Дима Гузерчук. All rights reserved.
//

#include <iostream>
#include <math.h>

int main() {
    
    using std::cout;
    using std::cin;
    using std::endl;
    
    double s = 0,d = 0;
    int n = 1;
    
    do{
        d = pow(1.0/2.0, n) + pow(1.0/3.0, n);
        s += d;
        n++;
    }
    while (d >= 0.001);
    cout<<"Сумма ряда:"<<s<<endl;
    return 0;
}
