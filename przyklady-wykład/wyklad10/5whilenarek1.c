#include<stdio.h>

int main()
{
    int n=32;

    int k = n+1;
    int i = 2;
    while (i<k)
        if (k%i == 0)
        {
            k++;
            i = 2;
        } else
            i++;            
    printf("%d\n", k);
    return 0;
}

