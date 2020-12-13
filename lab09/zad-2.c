#include <stdio.h>

int max_1(int tab[], int n);
int max_2(int* pocz, int* kon);

int main(){

    int tab[] = {1,23,9,15,4,6};

    int wynik1 = max_1(tab, 6);
    printf("\n");
    int wynik2 = max_2(tab, tab+6);
    printf("MAX wyliczony I sposobem: %d, II sposobem: %d.", wynik1, wynik2);

    return 0;
}

int max_1(int tab[], int n){
    int max = 0;
    int i;

    for(i=0; i<n; i++){
        if(tab[i]>max){
            max = tab[i];
        }
    }

    return max;
}

int max_2( int* pocz, int* kon){
    int max = 0;
    int* pt;

    for(pt = pocz; pt != kon; pt++){
        if(*pt>max){
            max = *pt;
        }
    }

    return max;
}