#include<stdio.h>
 
int main()
{
    int d;
    do {
        printf("Podaj cyfre: ");
        scanf("%d", &d);
        if (d<0 || d>9)
            printf("To nie jest cyfra\n");
    } while (d<0 || d>9);
    printf("Podana cyfra to %d\n", d);
    return 0;
}