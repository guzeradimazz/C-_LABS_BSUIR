//
//  main.cpp
//  lb7_3_3
//
//  Created by Дима Гузерчук on 2.12.20.
//



//Найдите сумму двоичных чисел, заданных в естественной форме. Сложение выполните в обратном коде. Ответ выразите в дополнительном коде.


#include <iostream>
 
using namespace std;



int sumOfArray(int* arr,int* arr2,int* sum){
    
    short temp = 0;
    for (int i = 7; i>=0; i--) {
        short k = arr[i] + arr2[i] + temp;
        if (k == 2) {
            temp = 1;
            sum[i] = 0;
            sum[i-1]+=1;
        }else if(k == 1){
            sum[i] = 1;
            temp = 0;
        }else if(k == 0){
            sum[i] = 0;
            temp = 0;
        }
    }
    if (temp == 1) {
        for (int i = 7; i>=0; i--) {
            short k = arr[i] + arr2[i] + temp;
            if (k == 2) {
                temp = 1;
                sum[i] = 0;
                sum[i-1]+=1;
            }else if(k == 1){
                sum[i] = 1;
                temp = 0;
            }else if(k == 0){
                sum[i] = 0;
                temp = 0;
            }
        }
    }

    
    
    return *sum;
}
int main(){
    int simpleNumber,simpleNumber2,znak1,znak2, sum[8];
    
    int* arr = new int[8];
    int* arr2 = new int[8];
    
    cout << "Введите первое число(по модулю)\n>";
    cin >> simpleNumber;
    cout <<"Если это число положительно, то введите 1, если нет 0";
    cin >>znak1;
    cout << "Введите второе число(по модулю)\n>";
    cin >> simpleNumber2;
    cout <<"Если это число положительно, то введите 1, если нет 0";
    cin >> znak2;
    while (simpleNumber >0){
        for (int i = 7; i>=0; i--) {
            arr[i]= simpleNumber%2;
            simpleNumber=simpleNumber/2;
        }
    }
    while (simpleNumber2 >0){
        for (int i = 7; i>=0; i--) {
            arr2[i]= simpleNumber2%2;
            simpleNumber2=simpleNumber2/2;
        }
    }
    cout<< "Первое число в обратном коде:\n";
    if (znak1 == 1) {
        for (int i = 0; i<8; i++) {
            cout<<arr[i]<<" ";
        }
    }else if(znak1 == 0){
        for (int i = 0; i<8; i++) {
            if (arr[i] == 0) {
                arr[i] = 1;
            }else if(arr[i]==1){
                arr[i] = 0;
            }
            arr[0] = 1;
        }
        for (int i = 0; i<8; i++) {
            cout<<arr[i]<<" ";
        }
    }
    
    cout << endl << "Второе число в обратном коде:\n";
    if (znak2 == 1) {
        for (int i = 0; i<8; i++) {
            cout<<arr2[i]<<" ";
        }
    }else if(znak2 == 0){
        for (int i = 0; i<8; i++) {
            if (arr2[i] == 0) {
                arr2[i] = 1;
            }else if(arr2[i]==1){
                arr2[i] = 0;
            }
            arr2[0] = 1;
        }
        for (int i = 0; i<8; i++) {
            cout<<arr2[i]<<" ";
        }
    }

    cout << "\nСумма в обратном коде:" <<endl;
    sumOfArray(arr,arr2,sum);
    for (int i = 0; i<8; i++) {
        cout << sum[i] <<" ";
    }
    cout<<"\nСумма в дополнительном коде:\n";

        for (int i = 7; i>=0; i--) {
            if (sum[i]) {
                sum[i]=false;
            }else{
                sum[i]=true;
                break;
                 }
        }


    for (int i = 0; i<8; i++) {
        cout << sum[i] <<" ";
    }
    cout<<endl;
    delete[] arr;
    delete[] arr2;
    return 0;
}
