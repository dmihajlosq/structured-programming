// An integer N is given as input (N <= 100), followed by N lines, each containing one string of length less than 80 characters.
//
// Your program should output the longest string that is a palindrome (a string that reads the same forwards and backwards).
//
// If there are multiple such strings, you should print the lexicographically smallest one (according to the order given by the strcmp() function).
// If there is no palindrome at all, print NEMA on the screen.


#include <cstring>
#include <iostream>
using namespace std;

int  main(){
    int n;
    cin>>n;
    char zbor[80];
    char obraten[80];
    char najdolg[80];
    najdolg[0]='\0';

    for (int i=0;i<n;i++){

        cin>>zbor;

        int len=strlen(zbor);
        zbor[strlen(zbor)]='\0';
        int m=1;
        obraten[0]=zbor[len-1];
        for (int j=len-2;j>=0;j--)
        {
            obraten[m]=zbor[j];
            m++;
        }
        obraten[len]='\0';
        if (strcmp(zbor,obraten)==0){
            if (strlen(najdolg)<strlen(zbor)){
                strcpy(najdolg,zbor);
            }
        }
    }

    if (najdolg[0]=='\0')cout<<"NEMA";
    else
        cout<<najdolg;
}