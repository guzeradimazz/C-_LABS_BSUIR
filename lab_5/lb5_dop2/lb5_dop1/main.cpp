//
//  main.cpp
//  lb5_dop1
//
//  Created by Дима Гузерчук on 10/15/20.
//

#include <iostream>
#include <ctime>
#include <cmath>
 
using namespace std;

   
double** fillArray(int n, int k){
    double **A = new double* [n];
    //fill array
    srand(time(NULL));
    A = new double*[n];
    for (int i = 0; i < n; ++i)
    {
        A[i] = new double [k];
    
        for (int j = 0; j < k; ++j)
        {
            A[i][j] = rand()%3;
            cout << A[i][j] << "\t";
        }
        cout<<endl ;
    }
return A;
}
int fooSum(int n, int k, int sum, double **A){
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<k; j++) {
            if (A[i][j]== 0) {
                sum++;
                cout<<"A["<<i<<"]["<<j<<"] ";
            }
        }
    }
    cout<<endl<<"Количество элементов, которые содержат '0' = "<<sum<<endl;
return sum;
}
double** reverseArray(int n, int k, double **A){
    double **N = new double* [n];
    for (int i = 0; i < n; ++i)
    {
        N[i] = new double [k];
        for (int j = 0; j<k; j++) {
            N[i][j]=A[n-i-1][k-j-1];
        }
    }
    
    for (int i = 0;i < n; i++){
        for (int j = 0; j < k; j++){
            cout<<N[i][j]<<"\t";
        }
        cout << "\n";
    }
    return N;
}
int main (){
    int n, k, sum = 0;
    cout << "Введите количество строк n = ";
    cin >> n;
    cout << "Введите количество столбцов k = ";
    cin >> k;
    cout << "\nДвумерный динамический массив " << n << "x" << k <<"\n\n";
    double **A = fillArray(n,k);
    //нули
    cout<<"Элементы которые содержат нули: \n";
    fooSum(n, k, sum, A);

    cout<<"Массив в обратном порядке выглядит так:\n\n";
    //обратный массив
    double **N = reverseArray(n,k,A);
    
    //удаление памяти
    for (int i = 0; i <n ; ++i)
    {
        delete[] A [i];
    }
    delete[] A;
    for (int i = 0; i <n ; ++i)
    {
        delete[] N [i];
    }
    delete[] N;
    
    return 0;
}
