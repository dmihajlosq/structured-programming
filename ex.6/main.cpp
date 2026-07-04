// A natural number N is given as input. The following output format should be printed:
//
// 1
// 121
// 11311
// 1114111
// ……
// 11..1N11...11
//
// When printing, use a recursive function that will print a line of the form: 11..1K11..1.
//
// If the task is solved without using a function, up to 40% of the points can be earned.
// If the function is not (fully) recursive, up to 60% of the points can be earned.

#include <iostream>
using namespace std;

void rekurzija (int i){
    if (i==0)return ;
    cout<<"1";
    rekurzija(i-1);

}

int main(){

    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        rekurzija(i-1);
        cout<<i;
        rekurzija(i-1);
        cout<<endl;
    }

}