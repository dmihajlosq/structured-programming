// Да се напише програма која вчитува матрица со димензии MxN (макс. 100x100).
// На почетокот се внесуваат димензиите на матрицата, а потоа и елементите на матрицата кои се само вредностите 1 и 0.
// Програмата треба да изброи и отпечати на СИ во колку од редиците и колоните има барем 3 последователни елементи со вредност 1.
//
// Пример:
//
//    1 1 1 0
//    1 0 1 1
//    1 0 0 1
//
// 1 ред + 1 колона = 2


#include <iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    int matrica[n][m];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>matrica[i][j];
        }
    }
    int globalBrojac=0;
    for (int i=0;i<n;i++){
        int brojac=0;
        for (int j=0;j<m;j++){
            if (matrica[i][j]==1)brojac++;
            else brojac=0;
            if (brojac==3){
                globalBrojac++;
                break;
            }
        }
    }
    for (int i=0;i<m;i++){
        int brojac=0;
        for (int j=0;j<n;j++){
            if (matrica[j][i]==1)brojac++;
            else brojac=0;
            if (brojac==3){
                globalBrojac++;
                break;
            }
        }
    }


    cout<<globalBrojac;
}