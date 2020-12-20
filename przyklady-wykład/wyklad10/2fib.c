#include<stdio.h>

int F(int n);

int main()
{
    int j=10;
    printf("fib(%d)=%d\n", j, F(j));    
    return 0;
}

int F(int n)
{
    if (n==0) return 0;
    if (n==1) return 1;
    return 
        F(n-1) +
        F(n-2);
}
