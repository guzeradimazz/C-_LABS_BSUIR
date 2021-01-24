//
//  main.cpp
//  prim2
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
    
        float a,b,d;
            cout<<"Введите два числа:";
            cin>>a>>b;
        if (b==0)
            cout<<"Отношение не определено \n";
        else
        {
            d = a / b;
            cout<<"Отношение равно:"<<d<<endl;
        }
    return 0;
}
