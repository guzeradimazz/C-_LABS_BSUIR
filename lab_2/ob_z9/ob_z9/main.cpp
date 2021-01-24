//
//  main.cpp
//  ob_z9
//
//  Created by Дима Гузерчук on 9/8/20.
//  Copyright © 2020 Дима Гузерчук. All rights reserved.
//

#include <iostream>
#
int main() {
    
    using std::cout;
    using std::cin;
    using std::endl;
    
    
    int N,k,c,b;
    
    cout<<"Введите количество рублей <20:\n";
    cin>>N;
    cout<<"Добавьте немного рублей <80:\n";
    cin>>k;
    b = N + k;
    c = b%10;
    switch (c) {
        case (1):
            cout<<b<<" рубль\n";
        break;
        case (2):
            cout<<b<<" рубля\n";
        break;
        case (3):
            cout<<b<<" рубля\n";
            break;
        case (4):
            cout<<b<<" рубля\n";
        break;
        case (11):
            cout<<b<<" рублей\n";
        break;
        case (12):
            cout<<b<<" рублей\n";
        break;
        case (13):
            cout<<b<<" рублей\n";
        break;
        case (14):
            cout<<b<<" рублей\n";
        break;
        default:
            cout<<b<<" рублей\n";
        break;
    
}
    return 0;}
