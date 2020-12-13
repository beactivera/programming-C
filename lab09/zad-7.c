#include <stdio.h> 
  
void sort01(int tab[], int n);
void swap(int* a, int* b); 
void printArray(int tab[], int n);


int main() 
{ 
    int tab[] = { 0, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 1 }; 
    int size = sizeof(tab) / sizeof(tab[0]); 
    int i; 
  
    sort01(tab, size); 
  
    printf("posortowana: "); 
    printArray(tab, size); 
  
    return 0; 
} 

void sort01(int tab[], int n)
{ 
    int min = 0; 
    int max = n - 1; 
    int mid = 0; 
  
    while (mid <= max) { 
        switch (tab[mid]) { 
        case 0: 
            swap(&tab[min++], &tab[mid++]); 
            break; 
        case 1: 
            mid++; 
            break; 
        case 2: 
            swap(&tab[mid], &tab[max--]); 
            break; 
        } 
    } 
} 

void swap(int* a, int* b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 

void printArray(int tab[], int n)  
{    
    for (int i = 0; i < n; i++)  
        printf("%d ", tab[i]);
    printf("\n"); 
}  