//
//  main.cpp
//  main2_5
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
    
    double x,y,s;
    
    cout<<"Введите переменную х\n";
    cin>>x;
    cout<<"Введите переменную y\n";
    cin>>y;
    
    
    if (x>y)
    {
        s = sqrt(fabs(x)) + (3*sin(x));
        cout<<"Ответ: "<<s<<endl;
    }
    else if (x<y)
    {
        s = x * sqrt(fabs(x));
        cout<<"Ответ: "<<s<<endl;
    }
    else if (y!=0 && x==y)
        cout<<"Ошибка операции!\n";
    else if (y==0);
    {
        s = pow(fabs(x), 1/3) + (pow(x, 3)/y);
        cout<<"Ответ4: "<<s<<endl;
    }
        
    
    return 0;
}
