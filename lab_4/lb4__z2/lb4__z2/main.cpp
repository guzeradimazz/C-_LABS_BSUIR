//
//  main.cpp
//  lb4__z2
//
//  Created by Дима Гузерчук on 9/17/20.
//  Copyright © 2020 Дима Гузерчук. All rights reserved.
//



#include <iostream>
#include <math.h>
#include <time.h>
 
using namespace std;

int main()
{
    srand(time(NULL));
     
    int a, n, k, m, sum=0, pr=1;
    int i, j, A[10][10]={0};
     
    cout << "Будете самостоятельно заполнять массив? 1(да)/0(нет)"<<endl;
    cin >> a;
     
    cout << "Введите размер массива: ";
    cin >> n;
     
    //заполняем с клавы
    if (a==1)
    {
         for(i=0;i<n;i++)
             for(j=0;j<n;j++)
             {
                  cout << "A[" << i << "][" << j << "] = ";
                  cin >> A[i][j];
             }
    }
    //рандомно заполненяем массив
    if (a==0)
    {
     for(i=0;i<n;i++)
         for(j=0;j<n;j++)
             {
              m = 0+rand()%10;
              A[i][j] = m;
         }
     }
    //выводим массив
    for(i=0;i<n;i++)
        {
         for(j=0;j<n;j++)
             {
               cout <<" "<<A[i][j]<<" ";
             }
         cout<<endl;
        }
     
    //подсчет суммы главной
    j=0;
    while(j<n)
     {
         sum+=A[j][j];
         j++;
     }
     
        cout << endl << "Сумма элементов главной диагонали = " << sum << endl;
    //подсчет произведения побочки
    k = n-1;
    while (k>=0) {
        pr = pr * A[k][n-1-k];
        --k;
    }
    cout<<"Произведение элементов побочной диагонали = "<<pr<<endl;
    return 0;
}

