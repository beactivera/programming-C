#include <stdio.h>

int main(){

    int grubosc, wysokosc, szerokosc;

    printf("Podaj grubosc: ");
    scanf("%d", &grubosc);

    printf("Podaj wysokosc: ");
    scanf("%d", &wysokosc);

    printf("Podaj szerokosc: ");
    scanf("%d", &szerokosc);

    for( int i=0; i<wysokosc-grubosc; i++){
        for(int j=0; j<grubosc; j++){

            printf("L");
        }
        printf("\n");
    }

    for( int i=0; i<grubosc; i++){
        for(int j=0; j<szerokosc; j++){

            printf("L");
        }
        printf("\n");
    }


    return 0;
}