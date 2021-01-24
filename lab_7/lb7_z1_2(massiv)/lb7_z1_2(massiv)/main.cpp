//
//  main.cpp
//  lb7_z1_2(massiv)
//
//  Created by Дима Гузерчук on 11/27/20.
//

#include <iostream>
#include <cmath>
#include <vector>
using namespace::std;

int main(){

    int simpleNumber, izAny ,toSystem ;
    cout << "Введите число" << endl;
    cin >> simpleNumber;//храним в 10чичной форме
    cout << "Введите основание системы этого числа" << endl;
    cin >> izAny;
    cout << "Введите основание системы в которую нужно перевести" << endl;
    cin >> toSystem;
    int schetchik = 0, SS = simpleNumber;
    while (SS > 0) {//подсчет кол-ва чисел
        if (SS % 10 > izAny) {//проверка izAny
            cout << "\nОшибка ввода\n";
            return 0;
        }
        SS = SS/10;
        //если для 10чичной то SS = SS(exmpl)=> 222/10 = 22; 22/10 = 2;
        schetchik++;
    }
    //разложение по степеням
    SS = simpleNumber;
    int sum = 0;
    for (int i = 0; i <schetchik; i++) {
        sum+= (SS % 10)* pow(izAny, i);
        SS = SS/10;//срезаем последнюю цифру
    }
    //cout << sum << endl;
    int sumM = sum ;
        vector<int> v;
    while (sumM > 0) {
        v.insert(v.begin(), sumM%toSystem) ;//добавляем в конец
        sumM = sumM/toSystem;
    }
    cout <<"Ответ : ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i]<< " ";
    }
    cout << endl <<"Преобразуем"<< endl;
    for (int i=0; i<5; i++)
       {
           time_t begin=time(0);
           while (time(0)-begin<1);
           cout<<".";
       }
    cout << endl;
    int d = 0;
    char c;
    string s = "";
    for (int i = 0; i < v.size(); i++) {
        d = v[i];
        v[i]=v[i]/10;
        c = (char)(d+48);
        if (c == (char)(65-7)) {
            c = 'A';
        }else if(c == 66-7){
            c = 'B';
        }else if(c == 67-7){
            c = 'C';
        }else if(c == 68-7){
            c = 'D';
        }else if(c == 69-7){
            c = 'E';
        }else if(c == 70-7){
            c = 'F';
        }
        s +=c;
    }
    cout << "Ответ : " << s;
    cout << endl;
    return 0;
}
//823429 10 13
