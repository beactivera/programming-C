#include <stdio.h>

void insertSort(int tab[], int n);
void printArray(int tab[], int n);

int main(){

    int tab[] = {0, 1, 2, 4, 5, 6, 7, 3, 3, 4, 20};
    int n = sizeof(tab) / sizeof(tab[0]);

    insertSort(tab, n);
    printArray(tab,n);
    printf("\n");

    return 0;
}

void insertSort(int tab[], int n){
    int i, key, j;
    for(i=2;i<n;i++){
        key = tab[i];
        j = i-1;
        while(j>0 && tab[j]>key){
            tab[j+1] = tab[j];
            j--;
        }
        tab[j+1] = key;
    }
}


void printArray(int tab[], int n)  
{    
    for (int i = 0; i < n; i++)  
        printf("%d ", tab[i]);
    printf("\n"); 
}  
