// A natural number N is given as input. The following output format should be printed:
// 1234...N...4321
// 123454321
// 1234321
// 12321
// 121
// 1
// When printing, use a recursive function that will print a line of the form: 123...K...321.
// If the task is solved without using a function, up to 40% of the points can be earned.
// If the function is not (fully) recursive, up to 60% of the points can be earned.


#include <iostream>
using namespace std;

void rekurzija(int n){
    if (n==0)return;
    rekurzija(n-1);
    cout<<n;}
void rekurzija1(int n){
    if (n==0)return;
    cout<<n;
    rekurzija1(n-1);}

int main(){
    int n;
    cin>>n;
    while (n>0){
        rekurzija(n);
        rekurzija1(n-1);
        n--;
        cout<<endl;
    }
}