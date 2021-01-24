//
//  main.cpp
//  lb3_main1
//
//  Created by Дима Гузерчук on 9/14/20.
//  Copyright © 2020 Дима Гузерчук. All rights reserved.
//


#include <iostream>
#include<math.h>

int main()
{
    using namespace std;
    double y;
    
    cout<<"y"<<"\t \t"<<"x"<<endl;
    for (double i = 3; i <= 4; i = i + 0.2) {
        y = sqrt(i)*cosh(i);
        cout<<y<<"\t \t"<<i<<endl;
    }
    return 0;
}

