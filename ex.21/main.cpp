// Да се напише програма во која се вчитува матрица од цели броеви A со N редици и N * 2 колони (N не е поголемо од 50).
// Програмата треба да ја трансформира вчитаната матрица во нова матрица B, така што сите елементи десно од N-тата
// колона ќе ги префрли под N-тата редица, односно од матрица со димензија N редици и 2 * N колони ќе се добие матрица со 2 * N редици x N колони.
//
// Пример за N = 3 Влез:
//
// 3
//
// 171328143915410165111761218
//
// Излез:
//
// 171341016281451117391561218


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int matrix[n][2*n];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<2*n; j++)
        {
            cin>>matrix[i][j];
        }
    }

    int matrix1[n][n], matrix2[n][n];

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<2*n; j++)
        {
            if (j<=n-1)
            {
                matrix1[i][j]=matrix[i][j];
            }
            if (j>=n)
            {
                matrix2[i][j-n]=matrix[i][j];
            }
        }
    }

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
