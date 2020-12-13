#include <stdio.h>

int main(){

    int n;
    printf("Podaj n: ");
    scanf("%d", &n);

    int suma=0;

    // a
    // for(int i=0; i<=n; i++){
    //     if(i%2 ==0){
    //         suma += i;
    //     }
    // }

    // b
    // int i=0;
    // while(i<=n){
    //     if(i%2 ==0){
    //         suma += i;
    //     }
    //     i++;
    // }

    // c
    int i=0;
    do{
        if(i%2 ==0){
            suma += i;
        }
        i++;
    }while(i<=n);

    printf("suma liczb do podanej liczby n wynosi: %d\n", suma);
    return 0;
}