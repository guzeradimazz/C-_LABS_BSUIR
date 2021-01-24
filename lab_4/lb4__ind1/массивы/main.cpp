//
//  main.cpp
//  массивы
//
//  Created by Дима Гузерчук on 9/17/20.
//  Copyright © 2020 Дима Гузерчук. All rights reserved.
//

#include <iostream>
#include <math.h>

    using std::string;
    using std::cout;
    using std::cin;
    using std::endl;
    
    
int main()
{
    int n;
    cout<<"Введите n элементов массива: \n";
    cin >> n;
    int a[n], i, j;
    bool flag = false;
    
        for (i=0; i<n; i++)
        {
            cout<<i<< " :\t";
            cin>>a[i];
        }
 
    cout<<"\nВывод на экран не повторяющихся элементов массива.\n";
    for (i=0; i<n; i++)
    {
        flag=false;
        for (j=0; j<n; j++)
        {
            if (a[j]==a[i] && i!=j)
            {
                flag = true;
            }
        }
        if (flag == false)
        {
            cout<<i<<":\t"<<a[i]<<'\n';
        }
    }
}
