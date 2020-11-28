#include<stdio.h>
 
int main()
{
    int suma=0;
    
    for (int x=1; x<=10; x++)
    {
        suma+=x;
    }
    
    printf("%d\n", suma);
    return 0;
}