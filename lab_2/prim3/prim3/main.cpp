//
//  main.cpp
//  prim3
//
//  Created by Дима Гузерчук on 9/6/20.
//  Copyright © 2020 Дима Гузерчук. All rights reserved.
//

#include <iostream>
#include <math.h>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;
    
    float a,z;
    
    cout<<"Введите значение для переменной a:";
    cin>>a;
        if(a==8)  z = 5;
            else if(a<=0) z = a + 3;
                else if(a>0&&a<2) z = a - 2;
        else z = pow(a,3);
    cout<<"Значение переменной z = "<<z<<endl;
    
    return 0;
}
