//
//  main.cpp
//  ob_z4
//
//  Created by Дима Гузерчук on 9/7/20.
//  Copyright © 2020 Дима Гузерчук. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <string.h>
int main() {
    using std::string;
    using std::cin;
    using std::cout;
    
    string c;
    int a = 0, b = 0;
    
    cin>>a>>b;
    //if (a >= b) c = 1; else c = 0;
    c = (a >= b)? "Первое число больше или равно второму\n" : "Второе число меньше первого\n";
    cout<< c;
    return 0;
}
