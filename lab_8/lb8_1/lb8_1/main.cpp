#include <iostream>

using namespace std;

struct entity {
    string name;
    int howMuch;
    int price;
    string date;
};
void form_dynamic_array(entity*& array, int X) {
    array = new entity[X];
    for (int i = 0; i < X; i++) {
        entity a;
        cout << "Введите имя " << i + 1 << endl;
        cin >> a.name;
        cout << "Введите сколько товара " << i + 1 << endl;
        cin >> a.howMuch;
        cout << "Введите цену " << i + 1 << endl;
        cin >> a.price;
        cout << "Введите дату привоза " << i + 1 << endl;
        cin >> a.date;
        array[i] = a;
    }
}
void show_structures(entity*& array, int X) {
    for (int i = 0; i < X; i++) {
        cout << "Карточка товара " << i + 1 << endl;
        cout << "*Название :" << array[i].name << endl;
        cout << "*Количество :" << array[i].howMuch << endl;
        cout << "*Цена :" << array[i].price << endl;
        cout << "*Дата привоза :" << array[i].date << endl;
    }
}
void add_structures(entity*& array, int &X) {
    entity* array1 = new entity[X + 1];
    for (int i = 0; i < X; i++){
        array1[i] = array[i];
    }
    X++;
    entity a;
    cout << "Введите имя " << X << endl;
    cin >> a.name;
    cout << "Введите сколько товара " << X << endl;
    cin >> a.howMuch;
    cout << "Введите цену " << X << endl;
    cin >>a.price;
    cout << "Введите дату привоза " << X << endl;
    cin >> a.date;
    array1[X - 1] = a;
    delete[] array;
    array = array1;
}
void search_structure(entity*& array, int &X, int c) {
    c--;
    cout << "Карточка товара " << c+1 << endl;
    cout << "*Название :" << array[c].name << endl;
    cout << "*Количество :" << array[c].howMuch << endl;
    cout << "*Цена :" << array[c].price << endl;
    cout << "*Дата привоза :" << array[c].date << endl;
}
void del_change_structure(entity*& array, int &X, int v) {
    v--;
    for (int i = v; i < X-1; ++i) {
        array[i] = array[i + 1];
    }
    X--;
    show_structures(array, X);
}
void sort_structures(entity*& array, int &X) {
    entity* array2 = new entity[X];
    int t = 0;
    for (int i = 0; i < X; i++) {
        if (array[i].price >= 100000) {
            array2[t] = array[i];
            t++;
        }
    }
    for (int i = t-2; i >= 0; i--){
        for (int j = i + 1; j >= 0;j-- ){
            if (array2[j].price > array2[i].price) {
                swap(array2[j], array2[i]);
            }
        }
    }
    for (int i = 0; i < t; i++) {
        cout << "Карточка товара " << i + 1 << endl;
        cout << "*Название :" << array2[i].name << endl;
        cout << "*Количество :" << array2[i].howMuch << endl;
        cout << "*Цена :" << array2[i].price << endl;
        cout << "*Дата привоза :" << array2[i].date << endl;
    }
}
int main() {
    setlocale(LC_ALL, "rus");
    int X;
    cout << "Введите колличество товаров";
    cin >> X;
    entity* array = new entity[X];
    form_dynamic_array(array, X);
    cout << "========================================================================" << endl;
    cout << "Показываю Вам массив структур...\n" << endl;
    show_structures(array, X);
    int a;
    cout << "Хотите дополнить кол-во товаров?(1-yes/0-no)" << endl;
    cin >> a;
    if (a == 1) {
        add_structures(array, X);
        show_structures(array, X);
    }
    int b;
    cout << "========================================================================" << endl;
    cout <<"Хотите, чтобы я вывел вам товар по номеру?(1-yes/0-no)"<< endl;
    cin >> b;
    if (b == 1) {
         int c;
         cout <<"Какой товар выводить? Введите номер карточки\n>" << endl;
         cin >> c;
        cout << "========================================================================" << endl;
        cout << "Товар под номером " << c <<" ниже" << endl;
         search_structure(array,X,c);
    }
    cout << "========================================================================" << endl;
    int m,v;
    cout <<"Хотите, чтобы я удалил товар?(1-yes/0-no)\n"<< endl;
    cin >> m;
    if (m == 1) {
        cout << "Введите номер товара, какой нужно удалить?\n>" << endl;
        cin >> v;
        del_change_structure(array,X,v);
    }
    cout << "========================================================================" << endl;
    cout << "Давайте отсортируем вставкой по убыванию" << endl;
    sort_structures(array, X);
    return 0;
}
