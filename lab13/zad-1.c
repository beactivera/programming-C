#include <stdio.h>

void decToBinary(int n);

int main(){
    int n;
    printf("Podaj liczbe w systemie dziesietnym: ");
    scanf("%d", &n);
    printf("Podana liczba w systemie dwojkowym: ");
    decToBinary(n);
    printf("\n");
}

void decToBinary(int n){

    int binaryNum[32];

    int i = 0;
    while(n > 0){
        
        binaryNum[i] = n%2;
        n = n/2;
        i++;
    }

    for(int j= i-1; j>=0; j--){
        printf("%d", binaryNum[j]);
    }
}