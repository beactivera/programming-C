#include<stdio.h>
 
int main()
{
    int n;
    printf("Program wypisuje wszystkie dwuelementowe podzbiory zbioru n elementowego\nPodaj n: ");
    scanf("%d", &n);
    for (int x=1; x<n; x++)
    {
        for (int y=x+1; y<=n; y++)
            printf("{%d,%d}\n", x, y);
    }
    return 0;
}