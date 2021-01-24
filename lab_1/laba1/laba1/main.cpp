//
//  main.cpp
//  laba1
//
//  Created by Дима Гузерчук on 9/5/20.
//  Copyright © 2020 Дима Гузерчук. All rights reserved.
//

#include <iostream>
#include <cmath>
int main()
{

    using std::cin;
    using std::cout;
    using std::endl;

    double Q, B, C, K, D, p, n, x;

        cout << "Введите значение p = ";
        cin >> p;
        cout << "Введите значение n = ";
        cin >> n;
        C = p - n;

        cout << "Введите значение x = ";
        cin >> x;

        B = cos(x);

        cout << "Введите значение B = ";
        cin >> B;

        cout << "Введите значение K = ";
        cin >> K;

        cout << "Введите значение D = ";
        cin >> D;

        Q = pow(B, 2) / (K * D) + B * pow(C, 3);

        cout << "Резулуьтат вычислений Q = "<<Q<<endl;

    return 0;
}

