#include <stdio.h>

void insert1(int tab[], int pozycja);
void insert2(int* tab, int pozycja);

int main(){

    int tab[] = {0, 1, 2, 4, 5, 6, 7, 3, 3, 4, 20};

    int pozycja = 7;

    insert1(tab, pozycja);
    printf("\n");
    insert2(tab, pozycja);
    // ma być:
 
    // {​​​​0, 1, 2, 3, 4, 5, 6, 7, 3, 4, 20}​​​​

    return 0;
}



void insert1(int tab[], int pozycja){
    int sum = 0;
    int i;

    for(i=0; i<n; i++){
        sum += tab[i];
    }

    return sum;
}

void insert2( int* tab, int pozycja){
    int sum = 0;
    int* pt;

    for(pt = pocz; pt != kon; pt++){
        sum += *pt;
    }

    return sum;
}