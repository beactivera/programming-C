#include <stdio.h>

#define N 20
  
int tab[N] = {3,2,1,4,3,6,3,2,3,4,4,3,1,3,1,5,1,6,5,2};
int tmp[N];
 
void merge(int*, int, int, int);
void mergesort(int*, int, int);
void show(int*, int);

int main() 
{
    printf("Przed sortowaniem:\n");
    show(tab, N);
    
    mergesort(tab, 0, N);
 
    printf("Po sortowaniu:\n");
    show(tab, N);
    return 0;
}

void merge(int tab[], int pocz, int sr, int kon)
{    
    for (int i=pocz; i<kon; i++) 
        tmp[i]=tab[i];      
    int i=pocz, j=sr, q=pocz;                 

    while (i<sr || j<kon) 
    {         
        if (i==sr) 
            tab[q++]=tmp[j++];
        else if (j==kon)
            tab[q++]=tmp[i++];
        else if (tmp[i]<tmp[j])
            tab[q++]=tmp[i++];
        else
            tab[q++]=tmp[j++];
    }
}
 
void mergesort(int tab[], int pocz, int kon)
{
    if (kon-pocz == 1) return;
    
    int sr=(pocz+kon)/2;
    mergesort(tab, pocz, sr);    
    mergesort(tab, sr, kon);   
    merge(tab, pocz, sr, kon);   
}

void show(int* tab, int ile)
{
    for (int i=0; i<ile; i++)
        printf("%d ", tab[i]);
    printf("\n");
}
