#include <stdio.h>

int main(){

    int h, linia;
    printf("Podaj wysokosc: ");
    scanf("%d", &h);

    int liczby[] = {2,4,5,8,9,10,16,17,18,19,32,33,34,35,36};
    int len = 15;

    for(int i=0; i<h; i++){
        for(int j=0; j<len; j++){
            
            linia = liczby[j-i];
            printf("%d", linia);
        }
    }
    return 0;
}