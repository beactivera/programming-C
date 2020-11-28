#include<stdio.h>
 
int main()
{
    int l;
    printf("Podaj cyfre:\n");
    scanf("%d", &l);
    if (l==0)
        printf("zero\n");
    else if (l==1)
        printf("jeden\n");
    else if (l==2)
        printf("dwa\n");
    else if (l==3)
        printf("trzy\n");
    else if (l==4)
        printf("cztery\n");
    else if (l==5)
        printf("piec\n");
    else if (l==6)
        printf("szesc\n");
    else if (l==7)
        printf("siedem\n");
    else if (l==8)
        printf("osiem\n");
    else if (l==9)
        printf("dziewiec\n");
    else
        printf("nie podales cyfry\n");
    return 0;
}