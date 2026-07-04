// An integer N is given as input (N <= 100), followed by N lines, each containing one string of length less than 80 characters. Your program should output the shortest string that is not a palindrome (a string that does not read the same forwards and backwards).
//
// If there are multiple such strings, you should print the lexicographically largest one (according to the order given by the strcmp() function).
//
// If there is no such string, print NEMA on the screen.

#include <cstring>
#include <iostream>
using namespace std;

int main(){


    int n;
    cin>>n;
    char zbor[80];
    cin.ignore();

    char obraten[80],najkratok[80];
    obraten[0]=najkratok[0]='\0';

    int flag=0;

    for (int i=0;i<n;i++){
        cin.getline(zbor,80);
        int brCifri=strlen(zbor);
        int j=0;
        int dolzina=brCifri;

        while (brCifri>0){
            obraten[j]=zbor[dolzina-j-1];
            brCifri--;
            j++;
        }
        obraten[strlen(zbor)]='\0';

        if (strcmp(zbor,obraten)!=0){
            if (flag==0){
                strcpy(najkratok,zbor);
                flag=1;
            }

            else{
                if ((strlen(zbor) == strlen(najkratok) && strcmp(zbor, najkratok) > 0) || strlen(zbor) < strlen(najkratok)){
                    strcpy(najkratok,zbor);
                }
            }
        }
    }
    if (najkratok[0]=='\0')cout<<"NEMA";

    else
        cout<<najkratok;

}