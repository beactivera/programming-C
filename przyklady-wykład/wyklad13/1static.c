#include<stdio.h>

int licznik();

int main()
{
    for (int i=0; i<10; i++)
        printf("%d\n", licznik());
    return 0;
}

int licznik()
{
    static int ile=0;
    ile++;
    return ile;
}
