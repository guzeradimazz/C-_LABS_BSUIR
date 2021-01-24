//
//  main.cpp
//  lb3_main2
//
//  Created by Дима Гузерчук on 9/14/20.
//  Copyright © 2020 Дима Гузерчук. All rights reserved.
//


#include <iostream>
#include<math.h>

int main()
{
    using namespace std;
    double  result = -1;
    double m, min, y, step;
    cout << "Введите количество частей :";
    cin >> m;
    step = 2 / m;
    min = abs(cosh(pow(-1.0, 2)) - acos(-1.0));
    for (double i = -1 + step; i <= 1 + 0.00001; i = i + step) {
        y = cosh(pow(i, 2)) - acos(i);
        if (abs(y) < abs(min)) {
            result = i;
        }
    }
    cout<<"x="<<result<<endl;
    return 0;
}

