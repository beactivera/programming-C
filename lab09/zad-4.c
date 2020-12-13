#include <stdio.h>

void insert1(int tab[], int pozycja);
void insert2(int* tab, int* pozycja);
void printArray(int tab[], int n);

int main(){

    int tab[] = {0, 1, 2, 4, 5, 6, 7, 3, 3, 4, 20};

    int pozycja = 7;

    insert1(tab, pozycja);
    printArray(tab,11);
    printf("\n");
    
    // ma być:
    // {​​​​0, 1, 2, 3, 4, 5, 6, 7, 3, 4, 20}​​​​

    return 0;
}


void insert1(int tab[], int pozycja){
    while (tab[pozycja-1]>tab[pozycja]) {
        int tmp = tab[pozycja];
        tab[pozycja] = tab[pozycja-1];
        tab[pozycja-1] = tmp;
        pozycja--;
    } 
}


void printArray(int tab[], int n)  
{    
    for (int i = 0; i < n; i++)  
        printf("%d ", tab[i]);
    printf("\n"); 
}  
