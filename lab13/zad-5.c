#include <stdio.h>

int U1toDec(int, int);

int main(){
    int u_1, n;
    printf("Podaj liczbe w systemie U1: ");
    scanf("%d", &u_1);
    printf("Podaj ilosc bitow: ");
    scanf("%d", &n);
    printf("Podana liczba to: %d", U1toDec(u_1,n));
    
    printf("\n");
}

int U1toDec(int u_1, int n){

    int tablica_U1[n], decNum=0,base=1;
    
    for(int i=0; i<n;i++){
        tablica_U1[i]=u_1%10;
        u_1 = u_1/10;
        // printf("%d", tablica_U1[i]);
    }

    // przypadek liczby ujemnej
    if(tablica_U1[n-1]==1){
        for(int i=n-2; i>=0; i--){
            if(tablica_U1[i]==0){
                tablica_U1[i]=1;
            }
            else{
                tablica_U1[i]=0;
            }
        }
        tablica_U1[n-1]=0;
       
        for(int i=0; i<=n-1; i++)
        {
            int lastDigit = tablica_U1[i];
            decNum += lastDigit*base;
            base *=2;
        }

        decNum *= (-1);
    }
    else{
        // przypadek liczby dodatniej
        for(int i=n-1; i>=0; i--)
        {
            int lastDigit = tablica_U1[i];
            decNum += lastDigit*base;
            base *=2;
        }
    }

    return decNum;
 }
    