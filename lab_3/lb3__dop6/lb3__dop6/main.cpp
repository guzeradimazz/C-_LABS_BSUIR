//
//  main.cpp
//  lb3__dop6
//
//  Created by Дима Гузерчук on 9/15/20.
//  Copyright © 2020 Дима Гузерчук. All rights reserved.
//

#include <iostream>
#include <math.h>

int fact(short n){
    if (n==0)
        return 1;
    n*=fact(n-1);
    return n;
}
int main(){
    using std::cout;
    using std::cin;
    using std::endl;
    int F[7];
    for (int i=0; i<7; i++)
        F[i]=fact(i);
    cout<<endl;
    for (int a=1; a<7; a++)//больше семи факториал нельзя! 7!=5040>1000
        for (int b=0; b<7; b++)
            for (int c=0; c<7; c++){
                int sum=F[a]+F[b]+F[c];
                if (sum==a*100+b*10+c&&sum>=100&&sum<=999)
                    cout<<sum<<endl;
                }
    return 0;
}
