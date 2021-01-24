//
//  main.cpp
//  lb3_ob3
//
//  Created by Дима Гузерчук on 9/11/20.
//  Copyright © 2020 Дима Гузерчук. All rights reserved.
//

#include <math.h>
#include <iostream>

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    
    int A = 0, M = 20;
    const double pi = 3.1415;
    double y, x, H, B = pi / 2;
        H = (B - A) / M;
        {
            for (double i = 0; i <= B; i = i + H)
            {
                x = A + (i*H);
                cout << "x=" << x<<"\t";
                y = sin(x) - cos(x);
                cout << "y=" << y<<"\t"<<"\n";
            }
        }
        
    return 0;
}

