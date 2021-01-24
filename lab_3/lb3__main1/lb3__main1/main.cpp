//
//  main.cpp
//  lb3__main1
//
//  Created by Дима Гузерчук on 9/15/20.
//  Copyright © 2020 Дима Гузерчук. All rights reserved.
//

#include <iostream>
#include <math.h>

int main(void)
{
    using namespace std;
    
    double x, d = 1, sum = 1, y;
    unsigned long fact = 1, zn = 1;
    int n, ch = 1 , k, old_n;
    cout << "Введите количество членов ряда:\t";
    cin >> n;
    cout << "Введите количество чисел, от которых Вы хотите посчитать функцию:\t";
    cin >> k;
    
    old_n = n;
    
    for (int i = 0; i < k; ++i)
    {   cout << "Введите значение х(от 0.1 до 1):\t";
        cin >> x;
        n = old_n;
        d = 1;
        sum = 1;
        fact = 1;
        zn = 1;
        ch = 1;
    while (n - 1 > 0)
    {
        ch += 2;
        d *= pow(x, 2);
        zn *= fact;
        sum += ch * d / zn;
        fact++;
        n --;
    }
        y = (1 + 2 * pow(x, 2)) * exp(pow(x, 2));
        cout << sum << ' ' << y << endl;
    
    }
    
    return 0;
}
//int main()
//{
//    using namespace std;
//    int count, kx;
//    double x, s;
//    cout << "Введите количество членов ряда:\t";
//    cin >> count;
//    cout << "Введите количество чисел, от которых Вы хотите посчитать функцию:\t";
//    cin >> kx;
//    for (int i = 1; i <= kx; i++) {
//        cout << "Введите значение х (от 0.1 до 1) :\t";
//        cin >> x;
//        double y = 1;
//        for (int i = 1; i < count; i++) {
//            long factorial = 1;
//            for (int j = 1; j < i+1 ; j++) {
//                factorial = factorial*j;
//            }
//            s += ((2*i)+1)/(factorial*i) * pow(x, (2*i)) ;
//        }
//        cout << y <<"\n";
//        cout << s<<"\n";
//                 if (s < y) {
//                     cout<<"Функция у больше s\t";
//                 }
//                 else {
//                     cout<<"Функция s больше y\t";
//                 }
//    }
//    return 0;
//}
