#include <stdio.h>

int suma_elementow1(int tab[], int n);
int suma_elementow2(int* pocz, int* kon);

int main(){

    int tab[] = {1,2,3,4,5,6};

    int wynik1 = suma_elementow1(tab, 6);
    printf("\n");
    int wynik2 = suma_elementow2(tab, tab+6);
    printf("suma wyliczona I sposobem: %d, II sposobem: %d.", wynik1, wynik2);

    return 0;
}

int suma_elementow1(int tab[], int n){
    int sum = 0;
    int i;

    for(i=0; i<n; i++){
        sum += tab[i];
    }

    return sum;
}

int suma_elementow2( int* pocz, int* kon){
    int sum = 0;
    int* pt;

    for(pt = pocz; pt != kon; pt++){
        sum += *pt;
    }

    return sum;
}