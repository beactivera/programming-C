#include <stdio.h>
#include <stdlib.h>

int U2toDec(int, int);
int power(int, int);

int main(){
    int u_2, n;
    printf("Podaj liczbe w systemie U2: ");
    scanf("%d", &u_2);
    printf("Podaj ilosc bitow: ");
    scanf("%d", &n);
    printf("Podana liczba to: %d", U2toDec(u_2,n));
    
    printf("\n");
}

int U2toDec(int u_2, int n){

    int tablica_U2[n], decNum=0, kodowana_liczba, base=1;

    for(int i=0; i<n;i++){
        tablica_U2[i]=u_2%10;
        u_2 = u_2/10;
        // printf("%d", tablica_U1[i]);
    }

    // przypadek liczby ujemnej
    if(tablica_U2[n-1]==1){
        tablica_U2[n-1]=0;
        kodowana_liczba = power(2,n-1);

        for(int i=0; i<=n-1; i++)
        {
            int lastDigit = tablica_U2[i];
            decNum += lastDigit*base;
            base *=2;
        }
        
        decNum = decNum - kodowana_liczba;
        
    }
    // przypadek liczby dodatniej
    else{
        for(int i=0; i<=n-1; i++)
        {
            int lastDigit = tablica_U2[i];
            decNum += lastDigit*base;
            base *=2;
        }
    }

    return decNum;
}

int power(int base, int exponent){
    int result=1;
    for(exponent;exponent>0; exponent--){
        result *= base;
    }
    return result;
}