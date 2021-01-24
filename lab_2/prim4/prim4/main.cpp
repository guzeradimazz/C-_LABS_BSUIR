//
//  main.cpp
//  prim4
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
    
    char sign;
    int x,y,z;
    
    cout<<"Введите знак операции(+/-/*///), а затем два числа";
    cin>>sign>>y>>z;
    
    if(sign=='-')
        x = y - z;
        else if(sign=='+')
            x = y + z;
            else if(sign=='*')
            x = y * z;
                else if(sign=='/')
                    x = y / z;
    else cout<<"Вы ввели неверный знак операции";
    cout<<x<<endl;
    
    return 0;
}
