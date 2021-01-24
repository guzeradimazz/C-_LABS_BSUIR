//
//  main.cpp
//  ob_z8
//
//  Created by Дима Гузерчук on 9/8/20.
//  Copyright © 2020 Дима Гузерчук. All rights reserved.
//

#include <iostream>
#include <math.h>

int main() {
    
    using std::cout;
    using std::cin;
    using std::endl;
    
    double a, b, c, x1, x2, x3, x4, t1, t2, d, D; bool log=false;
        cout<<"Введите значение переменной а = ";
        cin>>a;
        cout<<"Введите значение переменной b = ";
        cin>>b;
        cout<<"Введите значение переменной c = ";
        cin>>c;
        if (a==0) {
            if (b!=0) {
                if (c==0)
                    cout<<"x=0\n";
                else {
                    if (c/b<0){
                    x1=sqrt(-(c/b));
                    x2=-sqrt(-(c/b));
                    cout<<"x1=\n"<<x1<<"; x2=\n"<<x2;
                    }
                    else
                        cout<<"Нет решений\n";
                }
            }
            else {
                if (c!=0)
                cout<<"Нет решений\n";
                else
                    cout<<"x любое\n";

            }
        }
        else{
            D = ((b * b) - (4 * a * c));
            if (D<0)
                cout<<"Нет решений\n";
            else {
                d=sqrt(D);
                t1=(( - b + d )/2) / a;
                t2=(( - b - d )/2) / a;
                if (t1>0){
                    x1=sqrt(t1);
                    x2=-sqrt(t1);
                    cout<<"x1="<<x1<<"; x2="<<x2<<endl;"; ";
                    log=true;
                }
                if (t2>0){
                    x3=sqrt(t2);
                    x4=-sqrt(t2);
                    if (log==true){
                        cout<<"x3="<<x3<<"; x4="<<x4<<endl;";";}
                    if (log==false){
                        cout<<"x1="<<x3<<"; x2="<<x4<<endl;";";}
                }
            }
        }//а= -5 b= 22 с= -6
         //а= 2 b= 2 с= -6
return 0;
}
