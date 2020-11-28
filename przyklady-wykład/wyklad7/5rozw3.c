#include<stdio.h>
 
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];    
    for (int i=0; i<n; i++)
        scanf("%d",&a[i]);        
        
    int suma = 0;    
    int max = 0;
    for (int kon=0; kon<n; kon++)
    {
        suma += a[kon];
        if (suma<0) 
            suma=0;
        if (suma>max) 
            max=suma;
    }
    printf("%d\n",max);
    return 0;
}