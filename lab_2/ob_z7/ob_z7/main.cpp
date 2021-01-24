//
//  main.cpp
//  ob_z7
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
    
    double a,b,c,Y;
    int N;
    cout<<"Введите значение пременной a =";
    cin>>a;
    cout<<"Введите значение пременной b =";
    cin>>b;
    cout<<"Введите значение пременной c =";
    cin>>c;
    cout<<"Введите целое значение пременной N =";
    cin>>N;
    
    
    switch (N) {
        case 2:
            Y = (b*c) - pow(a, 2);
            break;
        case 7:
            Y =pow(a, 2) +c;
            break;
        case 56:
            Y = b * c;
            break;
        case 3:
            Y = a - (b*c);
            break;


        default:
            Y = pow((a+b), 3);
            break;
    }
    cout<<"Резлутатом вычисление является число :"<<Y<<endl;
    return 0;
}
