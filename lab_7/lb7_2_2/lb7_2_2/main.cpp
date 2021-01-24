#include <iostream>
using namespace std;

int main ()
{
    
    int value, arr[8], c, i, boolcheck;
    
    cout << "Введите число по модулю: ";
    cin >> value;
    cout << "\nЕсли число положительное, то введите 1, если отрицательное, 0";
    cin >> boolcheck;
    cout << "\nДвоичная СС: ";

    for (i = 7; i >= 0; i--)
        {
        if ((1 << i) & value)
                {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 0;
        }
    }
    for (int i = 0; i<(8/2); i++) {
        c = arr[i];
        arr[i]=arr[8-1-i];
        arr[8-1-i] = c;
    }
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }
    //^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
    //2ичная
    //переводим в прямой обратный и доп код
    if (boolcheck == 1) {
        cout << "Число в дополнительном и обратном коде";
        for (int i = 0; i < 8; i++) {
            cout << arr[i] << " ";
        }
    }else if(boolcheck == 0){
        arr[0] = 1;
        cout <<"\nЧисло в прямом коде : " << endl;
        for (int i = 0; i < 8; i++) {
            cout << arr[i] << " ";
        }
        cout <<"\nЧисло в обратном коде : " << endl;
        for (int i = 0; i < 8; i++) {
            if(arr[i] == 0){
                arr[i] = 1;
            }else if(arr[i] == 1){
                arr[i] = 0;
            }
        }
        arr[0] = 1;
        for (int i = 0; i < 8; i++) {
            cout << arr[i] << " ";
        }
        cout <<"\nЧисло в дополнительном коде : " << endl;
        for (int i = 7; i>=0; i--) {
            if (arr[i]) {
                arr[i]=false;
            }else{
                arr[i]=true;
                break;
                 }
        }
        for (int i = 0; i < 8; i++) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
