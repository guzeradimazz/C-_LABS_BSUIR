//
//  main.cpp
//  lb6_1_2
//
//  Created by Дима Гузерчук on 10/19/20.
//

#include <iostream>
#include <cmath>
#include <ctime>
#include "string.h"

using namespace std;

int main() {
    int j,k,d,s1,s2,mas1[80],mas2[80],n1,n2,j1,k1,n;
    cout<<"размер";
    cin>>n;
    char st[n];
    puts("Введите строку: ");
    cin>>st;
    d = strlen(st);
    j = n1=s1=0;
    for(int i=0;i<=d;i++){
        if(st[i]=='1'){
            s1++;
        }
        else{
            if(s1!=0){
                mas1[j]=s1;
                j++;
                n1++;
            }
            s1=0;
        }
    }
    k=n2=s2=0;
    for(int i=0;i<=d;i++){
        if(st[i]=='0')
            s2++;
        else{
            if(s2!=0){
                mas2[k]=s2;
                k++;
                n2++;
            }
            s2=0;
        }
    }
    j1=mas1[0];
    for(j=0;j<n1;j++){
        if(mas1[j]<j1)
            j1=mas1[j];
        }
        k1=mas2[0];
    for(k=0;k<n2;k++){
        if(mas2[k]<=k1)
            k1=mas2[k];
        }
    puts("Группа едениц: ");
    for(int s=1;s<=j1;s++)
    printf("1");
    
    puts("Группа нулей: ");
    for(int s=1;s<=k1;s++)
    printf("0");
    cout<<endl;
    
    return 0;
}
