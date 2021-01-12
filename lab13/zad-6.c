#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void decToU2(int, int);
int power(int, int);

int main(){
    int c, n;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &c);
    printf("Podaj ilosc bitow: ");
    scanf("%d", &n);
    printf("Podana liczba w systemie U2: ");
    decToU2(c,n);
    printf("\n");
}

void decToU2(int c, int n){

    int numU2[20], iterator_ujemne=0, iterator_dodatnie=0, kodowana_liczba;

    // wypelnienie zerami, dlugosc = ilosc bitow
    for(int i=0; i<n-1;i++){
        numU2[i]=0;
    }

    // przypadek liczby ujemnej
    if(c<0){
        numU2[n-1]=1;
        kodowana_liczba = power(2,n-1);
        kodowana_liczba = kodowana_liczba + c;
        // konwersja na liczbe binarna
        while(kodowana_liczba!=0){
            numU2[iterator_ujemne] = kodowana_liczba%2;
            kodowana_liczba = kodowana_liczba/2;
            iterator_ujemne ++;
        }
    }
    // przypadek liczby dodatniej
    else{
        numU2[n-1]=0;
        while(c!=0){
            numU2[iterator_dodatnie] = c%2;
            c = c/2;
            iterator_dodatnie ++;
        }
    }

    // wyswietlenie liczby biorac pozycje od konca
    for(int i=n-1; i>=0; i--){
        printf("%d", numU2[i]);
    }
}

int power(int base, int exponent){
    int result=1;
    for(exponent;exponent>0; exponent--){
        result *= base;
    }
    return result;
}