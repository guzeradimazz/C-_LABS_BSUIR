//
//  main.cpp
//  lb6_3
//
//  Created by Дима Гузерчук on 11/2/20.
//

#include <iostream>
#include <cstring>
using namespace std;

int lenght(string str){
    int n;
        for(n=0; str[n]; n++);
        return n;
}
void reverse(string str){
    cout << "Reversed massive : \t";
    for (int i = lenght(str); i>=0;i--) {
        cout << str[i] ;
    }
    cout << endl;

}
int main() {
    string str;
    cout << "Enter string" << endl;
    cin >> str;
 
    int sum = 0;
    for (int i = 0; i < lenght(str); i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            sum += str[i];
        }
        cout << "string: " << str << '\n';
        cout << "sum: " << sum << '\n';
    }
    
    if (sum%2==0) {
        reverse(str);
    }
 //программа подсчитывает по одному значению и выводит
}

