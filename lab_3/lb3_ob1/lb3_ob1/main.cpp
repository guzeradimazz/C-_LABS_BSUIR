//
//  main.cpp
//  lb3_ob1
//
//  Created by Дима Гузерчук on 9/11/20.
//  Copyright © 2020 Дима Гузерчук. All rights reserved.
//

#include <iostream>
#include <math.h>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    
    double n=0, a, b;
    int i = 1;
    while (i <= 30)
    {
        
        if (i % 2 == 0)
        {

            a = (i / 2);
            b = (pow(i, 3));
        }
        else
        {
            a = i;
            b = pow(i, 2);
        }
        n += (a - b)*(a - b);
        i++;
    }
    cout<<"Значение равно:"<<n<<endl;
    return 0;
}
