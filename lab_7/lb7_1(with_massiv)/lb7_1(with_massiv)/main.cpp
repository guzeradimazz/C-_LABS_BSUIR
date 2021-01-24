#include <iostream>
#include <cmath>

using namespace std;

int u = 0;
int arr[10];

void funk(int m)
{
    if (m / 11 >= 11)
    {
        arr[u] = m % 11;
        m = m / 11;
        u++;
        funk(m);
    }
    else if (m / 11 > 0)
    {
        arr[u] = m % 11;
        m /= 11;
        u++;
        funk(m);
    }
    else
    {
        arr[u] = m;
        for (int j = u; j >= 0; j--)
        {
            if (arr[j] == 10)
            {
                cout << 'a';
            }
            else
            {
                cout << arr[j];
            }
        }
    }
}

int main()
{
    setlocale(LC_ALL, "ru");
    
    int numb, j = 0, m = 0;
    cout << "Введите число в девятеричной системе : \n";
    cin >> numb;

    while (numb != 0) {
        arr[j] = numb % 10;
        if (arr[j] == 9)
        {
            cout << "цифры 9 нет в системе";
            return 0;
        }
        else
        {
            numb /= 10;
            j++;
        }
    }

    for (int i = 0; i < j; i++)
    {
        int a = pow(9, i);
        m += arr[i] * a;
    }
    cout<<"Число в одинадцатиричной системе:\n";
    funk(m);
    cout << endl;
    return 0;
}
