#include<stdio.h>

int k, i;
void f();

int main()
{
    int n=32;

    k=n+1; 
    i=2;
    f();
    printf("%d\n", k);        
    return 0;
}

void f() 
{
    if (i<k)
    {
        if (k%i==0)
        {
            k++;
            i = 2;
        } else
            i++;            
        f();
    }
}

