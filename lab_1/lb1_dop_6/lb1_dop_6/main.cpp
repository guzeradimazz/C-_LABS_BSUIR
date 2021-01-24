//
//  main.cpp
//  lb1_dop_6
//
//  Created by Дима Гузерчук on 9/10/20.
//  Copyright © 2020 Дима Гузерчук. All rights reserved.
//

#include <iostream>
#include <math.h>


int main() {
    
    using std::cout;
    using std::cin;
    using std::endl;
    
    double a,b,c,x,y,x1,x2,y1,y2,p,s;
    
    cout<<"Введите координаты первой вершины:";
    cin>>x>>y;
    cout<<"Введите координаты второй вершины:";
    cin>>x1>>y1;
    cout<<"Введите координаты третьей вершины:";
    cin>>x2>>y2;
    
    a = sqrt(pow((x-x1),2) +pow((y-y1),2));
    b = sqrt(pow((x-x2),2) +pow((y-y2),2));
    c = sqrt(pow((x1-x2),2) +pow((y1-y2),2));
    p = a + b + c;
    s = sqrt(p * (p-a)*(p-b)*(p-c));
    
    cout<<"Периметр треугольника равен:"<<p<<endl;
    cout<<"Площадь треугольника равна:"<<s<<endl;
    return 0;
}
