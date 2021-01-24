//
//  main.cpp
//  ob_z1
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
    
    int x,y;
    cout<<"Введите значения для переменных x и y:\n";
    cin>>x>>y;
    
    if(x>y)
        y = 0;
    else if (x<y)
        x = 0;
    else if (x=y)
        x = 0;
        y = 0;
    cout<<x<<y<<endl;
    
    return 0;
}
