#include<stdio.h>
#include<limits.h>

int main()
{
    float i = 0.1;
    while (i != 1)
    {
        i = i + 0.1;
    }
    printf("%f\n", i);                
    return 0;
}

