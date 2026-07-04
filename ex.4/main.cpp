// Given a natural number N, fill an N x N matrix with the digits 1, 2, 3, …, 9, 0 in order, row by row, in a zig-zag (snake-like) pattern, as follows:
//
// Rows with an even index (0, 2, 4, …) are filled from left to right.
//
// Rows with an odd index (1, 3, 5, …) are filled from right to left.
//
// The digits are used cyclically and in order (i.e., after 9 comes 0, then 1 again, etc.).
//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int brojac=1;
    int matrica[n][n];
    for (int i=0;i<n;i++){
        if (i%2==0){
            for (int j=0;j<n;j++){
                if (brojac==10)brojac=0;
                matrica[i][j]=brojac;
                brojac++;
            }
        }
        else{
            for (int j=n-1;j>=0;j--){
                if (brojac==10)brojac=0;
                matrica[i][j]=brojac;
                brojac++;
            }
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<matrica[i][j]<<" ";
        }
        cout<<endl;
    }
}