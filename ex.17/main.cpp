// Од стандарден влез се чита ливче во спортска обложувалница.
//
// Во првиот ред е запишана сумата на уплата (цел број).
//
// Потоа во секој нареден ред кој се чита од стандарден влез (се додека не се прочита знакот #) е запишан по еден тип во следниот формат:
//
// ab12 1 1.25
// Првиот број е шифрата на типот (низа од знаци која не е подолга од 9 знаци), вториот број е типот (може да биде 1, 0 или 2) додека третиот број е коефициентот (реален број).
//
// Ваша задача е да го испечатите типот со најголем коефициент како и можната добивка на ливчето. Доколку има повеќе типови со ист максимален коефициент, да се испечати првиот.
//
// Можната добивка се пресметува како производ на сите коефициенти со сумата на уплата.


#include <cstring>
#include <iostream>
using namespace std;

int main(){
    int suma;
    cin>>suma;


    string znak;
    int tip;
    float koef;

    float najKoef;
    int najTip;
    string najZnak;
    int flag=1;

    float sumaKoef=1.0;
    while (znak!="#"){
        cin>>znak;
        if (znak=="#")break;
        cin>>tip>>koef;
        sumaKoef*=koef;
        if (flag==1){
            najKoef=koef;
            najTip=tip;
            najZnak=znak;
            flag=0;
        }
        else if(koef>najKoef){
            najKoef=koef;
            najTip=tip;
            najZnak=znak;
        }
    }
    cout<<najZnak<<" "<<najTip<<" "<<najKoef<<endl;
    cout<<suma*sumaKoef;
}