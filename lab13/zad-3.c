#include <stdio.h>

int binaryToDec(int n);

int main(){
    int n;
    printf("Podaj liczbe w systemie dwojkowym: ");
    scanf("%d", &n);
    printf("Podana liczba w systemie dziesietnym: %d", binaryToDec(n));
    printf("\n");
}

int binaryToDec(int n){

    int number = n;
    int decNum = 0;
    int base = 1;

    int temp = number;
    while(temp){

        int lastDigit = temp%10;
        temp = temp/10;
        
        decNum += lastDigit*base;
        
        base *= 2;
    }

    return decNum;
}