//
//  main.cpp
//  ob_z2
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
    
    double A = 0.0,B = 0.0,C = 0.0;
    cout<<"Введите три числа";
    cin>>A>>B>>C;
    
    if (A>B && B>C)
        A = A - 0.3;
        else if(B>A && A>C)
            B = B - 0.3;
            else if(C>A && A>B)
                C = C - 0.3;
    cout<<A<<endl;
    cout<<B<<endl;
    cout<<C<<endl;
    return 0;
}
