//
//  main.cpp
//  laba1_7
//
//  Created by Дима Гузерчук on 9/6/20.
//  Copyright © 2020 Дима Гузерчук. All rights reserved.
//

#include <iostream>
#include <cmath>
int main()
{

    using std::cin;
    using std::cout;
    using std::endl;

    double Y, B, C, K, D, A, h, p, x;

    cout << "Введите значение x = ";
    cin >> x;
    cout << "Введите значение p = ";
    cin >> p;
    A = x - p;

    cout << "Введите значение h = ";
    cin >> h;

    B = log(h);

    cout << "Введите значение K = ";
    cin >> K;

    cout << "Введите значение C = ";
    cin >> C;

    cout << "Введите значение D = ";
    cin >> D;

    Y = (0.78 * B) + pow(A, 3)/(K * C * D);

    cout << "Резулуьтат вычислений Y = "<<Y<<endl;

    return 0;
}
