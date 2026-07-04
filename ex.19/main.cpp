// Од тастатура се внесуваат димензиите на една матрица (m, n <= 100), а потоа и елементите од матрицата. Да се генерира низа (со најмногу m) така што секој елемент од низата се добива со наоѓање на елементот во секоја редица од матрицата што е најоддалечен од аритметичката средина во рамки на таа редица. Ако постојат повеќе елементи што се најоддалечени од аритметичката средина, тогаш се зема предвид првиот. Редоследот на запишување на елементите во низата одговара на редоследот на редиците.
//
// Пример:
//
// Влез:
//
// 3 6
//
// 1 2 2 3 4 5
//
// 1 1 2 2 3 3
//
// 1 2 3 4 5 6
//
// Излез:
//
// 5 1 1


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
    for (int i=0;i<n;i++){
        int suma=0;
        for (int j=0;j<m;j++){
            suma+=matrica[i][j];
        }
        float ar_sredina=suma*1.0/m;
        int najodalecen= matrica[i][0];
        for (int j=0;j<m;j++){
            if (abs(najodalecen-ar_sredina)<abs(matrica[i][j]-ar_sredina)){
                najodalecen=matrica[i][j];
            }
        }
        cout<<najodalecen<<" ";
    }
}