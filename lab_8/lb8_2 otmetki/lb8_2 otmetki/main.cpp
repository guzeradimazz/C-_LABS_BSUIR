#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctype.h>
#include <string>
#include <sstream>
#include <string>
#include <fstream>
 
using namespace std;


class student{
private:
    double rus;
    double mat;
    double lit;
    double obj;
    double averagemark;
public:
    string name;

    student(){
        name = "none";
        rus = 0;
        mat = 0;
        lit = 0;
        obj = 0;
        averagemark = 0;
    }
    
void set_value(){
    cout << "Введите имя студента: ";
    cin >> name;
    cout << "Введите оценку по русскому: ";
    cin >> rus;
    cout << "Введите оценку по матекатике: ";
    cin >> mat;
    cout << "Введите оценку по литературе: ";
    cin >> lit;
    cout << "Введите оценку по ОБЖ: ";
    cin >> obj;
    averagemark = (rus + mat + lit + obj)/4;
}


void get_value (){
    cout << "Средний бал студента: " << name << " составляет: " << averagemark;

}
    double average_mark(){
        return averagemark;
    }


};
 
 
int main(){
    cout << "Сколько будет студентов?" << endl;
    int n;
    cin >> n;
    cout << "Введите данные о " << n <<"-х студентах ВУЗа..." << endl;
    
    student** group = new student*[n];
 
    for (int i(0); i!=n; i++){
        group[i] = new  student();
    }
 
 
    for (int i(0); i!=n; i++){
        group[i]->set_value();
    }
    double array_averages[n];
    for (int i = 0; i < n; i++) {
        cout << "Средний балл ученика " << group[i]->student::name <<" " <<  group[i]->average_mark() << endl;
        array_averages[i] = group[i]->average_mark();
    }
    cout << "Отсортируем данные средние баллы: \n\n" << endl;
    
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n-i; j++) {
            if (array_averages[j] < array_averages[j+1]) {
                swap(array_averages[j], array_averages[j+1]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << array_averages[i] << endl;
    }
    ofstream fout;
    fout.open("marks.
              txt");
    if (fout.is_open()) {
        cout << "file is opened!!!\n";
         for (int i = 0; i < n; i++) {
            fout << array_averages[i] << endl;
        }
    }
    return 0;
 }
