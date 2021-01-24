//
//  main.cpp
//  prim1
//
//  Created by Дима Гузерчук on 9/5/20.
//  Copyright © 2020 Дима Гузерчук. All rights reserved.
//

#include <iostream>
#include <math.h>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;
    
        int a,b,y;
    
            cout<<"Введите значения a и b";
            cin>>a>>b;
            
        if (a<=b) y = a + b;
        else y = a - b;
    
            cout<<"Результат вычислений \ny = "<<y<<endl;
    
    return 0;
}
