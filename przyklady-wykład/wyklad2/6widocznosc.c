#include<stdio.h>
 
int a = 10;
 
int main()
{
    printf("%d\n", a);
    int a = 20;
    if (a > 0)
    {
        printf("%d\n", a);
        int a = 30;
        printf("%d\n", a);
    }
    printf("%d\n", a);
    return 0;
}