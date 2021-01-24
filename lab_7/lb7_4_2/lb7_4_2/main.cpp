#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>
using namespace::std;


//8648668
void summator(vector<int> v, vector<int> w){
    vector<int> summa(max(w.size(), v.size())+1);
    v.push_back(0);
    w.push_back(0);
    for (int i = 0; i<summa.size(); i++) {
        summa[i] += v[i] + w[i];
        if (summa[i] > 15) {
            summa[i+1]+=1;
            summa[i]-=16;
        }
    }
    int c;
    for (int i = 0; i<summa.size()/2; i++) {
        c = summa[i];
        summa[i] = summa[summa.size() - 1 - i];
        summa[summa.size() - 1 - i] = c;
    }

    int d = 0;
    char c1;
    string s = "";
    for (int i = 0; i < summa.size(); i++) {
        d = summa[i];
        summa[i]=summa[i]/10;
        c1 = (char)(d+48);
        if (c1 == (char)(65-7)) {
            c1 = 'A';
        }else if(c1 == 66-7){
            c1 = 'B';
        }else if(c1 == 67-7){
            c1 = 'C';
        }else if(c1 == 68-7){
            c1 = 'D';
        }else if(c1 == 69-7){
            c1 = 'E';
        }else if(c1 == 70-7){
            c1 = 'F';
        }
        s +=c1;
    }
    cout << endl << "Ответ : " << s << endl;
}
int main(){
    int simpleNumber, simpleNumber2 ;
    cout << "Введите число" << endl;
    cin >> simpleNumber;
    cout << "Введите второе число" << endl;
    cin >> simpleNumber2;
    //храним в 10чичной форме
    int schetchik = 0, SS = simpleNumber;
    while (SS > 0) {//подсчет кол-ва чисел
        SS = SS/10;
        schetchik++;

        //если для 10чичной то SS = SS(exmpl)=> 222/10 = 22; 22/10 = 2;
    }
    //разложение по степеням
    SS = simpleNumber;
    int sum = 0;
    for (int i = 0; i <schetchik; i++) {
        sum+= (SS % 10)* pow(10, i);
        SS = SS/10;//срезаем последнюю цифру
    }
    //cout << sum << endl;
    int sumM = sum ;
        vector<int> v;
    while (sumM > 0) {
        v.push_back(sumM%16) ;//добавляем в конец
        sumM = sumM/16;
    }
    cout << endl;
    int schetchik2 = 0, SS2 = simpleNumber2;
    while (SS2 > 0) {//подсчет кол-ва чисел
        SS2 = SS2/10;
        //если для 10чичной то SS = SS(exmpl)=> 222/10 = 22; 22/10 = 2;
        schetchik2++;
    }
    //разложение по степеням
    SS2 = simpleNumber2;
    int sum2 = 0;
    for (int i = 0; i <schetchik2; i++) {
        sum2+= (SS2 % 10)* pow(10, i);
        SS2 = SS2/10;//срезаем последнюю цифру
    }
    //cout << sum << endl;
        vector<int> w;
    while (sum2 > 0) {
        w.push_back(sum2%16) ;//добавляем в конец
        sum2 = sum2/16;
    }
    cout <<"Преобразуем числа в 15-ричную систему счисления";
    for (int i=0; i<5; i++)
       {
           time_t begin=time(0);
           while (time(0)-begin<1);
           cout<<".";
       }
//    for (int i = 0; i<v.size(); i++) {
//        cout<<v[i]<<" ";
//    }
//    cout<< endl;
//    for (int i = 0; i<w.size(); i++) {
//        cout<<w[i]<<" ";
//    }
    cout << endl;
    summator(v,w);
    return 0;
}
//5371823
//7 1 1 9 11 8
