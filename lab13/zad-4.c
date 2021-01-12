#include <stdio.h>

void decToU1(int, int);

int main(){
    int c, n;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &c);
    printf("Podaj ilosc bitow: ");
    scanf("%d", &n);
    printf("Podana liczba w systemie U1: ");
    decToU1(c,n);
    printf("\n");
}

void decToU1(int c, int n){

    int numU1[20], iterator_ujemne=0, iterator_dodatnie=0;

    // wypelnienie zerami, dlugosc = ilosc bitow
    for(int i=0; i<n-1;i++){
        numU1[i]=0;
    }

    // przypadek liczby ujemnej
    if(c<0){
        numU1[n-1]=1;
        c = c*(-1);
        // konwersja na liczbe binarna
        while(c!=0){
            numU1[iterator_ujemne] = c%2;
            c = c/2;
            iterator_ujemne ++;
        }
        // negacja bitow
        for(int i=n-2; i>=0; i--){
            if(numU1[i]==0){
                numU1[i]=1;
            }
            else{
                numU1[i]=0;
            }
        }
    }
    // przypadek liczby dodatniej
    else{
        numU1[n-1]=0;
        while(c!=0){
            numU1[iterator_dodatnie] = c%2;
            c = c/2;
            iterator_dodatnie ++;
        }
    }

    // wyswietlenie liczby biorac pozycje od konca
    for(int i=n-1; i>=0; i--){
        printf("%d", numU1[i]);
    }
}