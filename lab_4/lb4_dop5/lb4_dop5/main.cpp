//
//  main.cpp
//  lb4_dop5
//
//  Created by Дима Гузерчук on 9/24/20.
//

#include <iostream>
#include <math.h>


int main(){
    using std::cin;
    using std::cout;
    using std::endl;
    
    const int n=6;
    int A[n][n],B[n][n],C[n][n],Pr[n];
    for (int j=0;j<n;j++)
        for (int i=0;i<n;i++)
        {
            A[j][i]=rand()%5;
        }
         cout << " Первый массив: " << endl;
 for (int j=0;j<n; j++)
   {
     cout << "\n";
     for (int i=0;i<n; i++)
      {
        cout<<"\t";
        cout << A[j][i];
      }
   }
 for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
        {
            B[i][j]=rand()%6;
        }
         cout << "\n\n Второй массив: " << endl;
 for (int i=0;i<n; i++)
   {
     cout << "\n";
     for (int j=0;j<n; j++)
      {
          cout<<"\t";
          cout << B[i][j];
      }
   }
 for (int i=0;i<n; i++)
 {
     Pr[i]=1;
     for(int j=0;j<n; j++)
     {
         Pr[i]=B[i][j]*Pr[i];
     }
 }
      cout << "\n\n Третий массив: " << endl;
      for (int j=0;j<n;j++)
        for (int i=0;i<n;i++)
        {
            C[j][i]=A[j][i]+Pr[i];
        }
     for (int j=0;j<n; j++)
   {
     cout << "\n";
     for (int i=0;i<n; i++)
      {
          cout<<"\t";
        cout << C[j][i];
      }
   }
    cout<<endl;
    return 0;
}
