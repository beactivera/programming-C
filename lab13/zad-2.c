#include <stdio.h>

void decToHex(int n);

int main(){
    int n;
    printf("Podaj liczbe w systemie dziesietnym: ");
    scanf("%d", &n);
    printf("Podana liczba w systemie szesnastkowym: ");
    decToHex(n);
    printf("\n");
}

void decToHex(int n){

    char hexNum[100];

    int i = 0;
    while(n != 0){

        int temp = 0;
        temp = n%16;

        if(temp<10){
            hexNum[i] = temp + 48;
            i++;
        }
        else{
            hexNum[i] = temp + 55;
            i++;
        }
            
        n = n/16;
    }

    for(int j= i-1; j>=0; j--){
        printf("%c", hexNum[j]);
    }
}