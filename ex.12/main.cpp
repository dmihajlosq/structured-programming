// Четиринасочник претставува матрица во која се испишани зборови хоризонотално и вертикално, одлево-надесно и оддесно-налево. Притоа секој елемент од матрицата претставува буква од англиската азбука.
//
// пример скриени зборови: HAIR, OLE (прецртани), FISH, TOE (подвлечени)
//
// T H A I R E
// E S N K N E
// M I M J O L
// M F S P S T
// I F G E L O
// X U T Y O E
// Од стандарден влез се чита квадратна матрица од ред n (3 <= n <= 50), составена од знаци. Прво се чита бројот n - бројот на редици (колони) на матрицата, а потоа и самите елементи на матрицата (види пример).
// По читањето на матрицата, од стандарден влез се внесува збор составен од максимум 10 букви.
//
// Ваша задача е да определите дали тој збор се наоѓа во четиринасочникот (хоризонтално или вертикално, одлево-надесно или оддесно-налево). Потребно е да се испечати локацијата (ред, колона) на првата и последната буква од зборот. Доколку зборот повеќепати се наоѓа во четеринасочникот, треба да се испечати првото појавување, гледано елемент по елемент како што се чита матрицата.
//
// Доколку не се пронајде зборот, тогаш се печати Not Found.

#include <cstring>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char matrica[n][n];

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>matrica[i][j];
        }
    }
    char zbor[11];
    cin>>zbor;

    int dolzina=strlen(zbor);
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++)
        {
            if (j+dolzina<=n){
                int k=0;
                for (k=0;k<dolzina;k++){
                    if (zbor[k]!=matrica[i][j+k]){
                        break;
                    }
                }
                if (k==dolzina){
                    cout<<i<<", "<<j<<" -> "<<i<<", "<<j+k-1;
                    return 0;
                }
            }
            if (j-dolzina+1>=0){
                int k=0;
                for (k=0;k<dolzina;k++){
                    if (zbor[k]!=matrica[i][j-k]){
                        break;
                    }
                }
                if (k==dolzina){
                    cout<<i<<", "<<j<<" -> "<<i<<", "<<j-k+1;
                    return 0;
                }

            }
            if (i+dolzina-1<n){
                int k=0;
                for (k=0;k<dolzina;k++){
                    if (zbor[k]!=matrica[i+k][j])break;
                }
                if (k==dolzina){
                    cout<<i<<", "<< j <<" -> "<<i+k-1<<", "<<j;
                    return 0;
                }
            }
            if (i-dolzina+1>=0){
                int k=0;
                for (k=0;k<dolzina;k++){
                    if (zbor[k]!=matrica[i-k][j])break;
                }
                if (k==dolzina){
                    cout<<i<<", "<<j<<" -> "<<i-dolzina+1<<", "<<j;
                    return 0;
                }
            }


        }
    }

    cout<<"Not Found";
    return 0;
}