//
//  main.cpp
//  lb7_zadanie3(SASHA)
//
//  Created by Дима Гузерчук on 3.12.20.
//

#include <iostream>

using namespace std;
string func(int n)
{
    string s = "";
    while(n >= 3){
        s.push_back((n % 3) + 48);
        n/=3;
    }
    s.push_back(n + 48);
    reverse(s.begin(),s.end());
    return s;
}
int main()
{
    int n;
    cin >> n;
    string s = func(n);
    int pos = s.find("10");
    while(pos + 1){
        s.replace(pos, 2,"03");
        pos = s.find("10");
    }
    int pos1 = s.find("20");
    while(pos1 + 1){
        s.replace(pos1,2,"13");
        pos1 = s.find("20");
    }
    int pos2 = s.find("30");
    while(pos2 + 1){
        s.replace(pos2 ,2,"23");
        pos2 = s.find("30");
    }
    while(s[0] == '0')
        s.erase(0,1);
    cout << s << endl;
    return 0;
}
