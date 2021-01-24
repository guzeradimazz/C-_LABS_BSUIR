//
//  main.cpp
//  lb6_2_2
//
//  Created by Дима Гузерчук on 10/26/20.
//
// в тексте каждую букву заменить ее номером в алфавите
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main() {
    cout<<"Enter english alfabet: ";
    string str;
    getline(cin, str);
     
    for (int i = str.size() - 1; i >= 0; --i)
        if (isalpha(str[i]))
            str.replace(i, 1, to_string(tolower(str[i]) - 'a' + 1) + " ");
     
    cout << str << endl;

    return 0;
}
