// Given a natural number N, fill an N x N matrix with the letters A, B, C, D, E, F, G, H, I in order, row by row, in a zig-zag (snake-like) pattern, as follows:
//
// Rows with an even index (0, 2, 4, …) are filled from left to right.
//
// Rows with an odd index (1, 3, 5, …) are filled from right to left.
//
// The letters are used cyclically and in order - that is, after I, the sequence continues again from A.


#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char bukva='A';
    char matrica [n][n];

    for (int i=0;i<n;i++){
        if (i%2==0){
            for (int j=0;j<n;j++){
                matrica[i][j]=bukva;
                bukva++;
                if (bukva=='J'){
                    bukva='A';
                }
            }
        }
        else{
            for (int j = n-1; j >=0; j--){
                matrica[i][j]=bukva;
                bukva++;
                if (bukva=='J'){
                    bukva='A';
                }
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