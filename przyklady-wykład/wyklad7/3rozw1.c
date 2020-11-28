#include<stdio.h>
 
int suma(int*, int*);
 
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];    
    for (int i=0; i<n; i++)
        scanf("%d",&a[i]);        
        
    int max = 0;    
    for (int pocz=0; pocz<n; pocz++)
        for (int kon=pocz; kon<n; kon++)
            if (suma(&a[pocz],&a[kon+1])>max)
               max = suma(&a[pocz],&a[kon+1]);
    printf("%d\n",max);
    return 0;
}
 
int suma(int* pocz, int* kon)
{
    int sum=0;
    for (int *pt = pocz; pt != kon; pt++)
        sum+=*pt;
    return sum;
}