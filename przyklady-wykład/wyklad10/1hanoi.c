#include<stdio.h>

void hanoi(int n, char stosZr, char stosDoc, char stosPom);

int main()
{
    hanoi(3, 'A', 'B', 'C');
    return 0;
}

void hanoi(int n, char stosZr, char stosDoc, char stosPom)
{
    if (n>1) 
        hanoi(n-1, stosZr, stosPom, stosDoc);
    printf("%c -> %c\n", stosZr, stosDoc);
    if (n>1) 
        hanoi(n-1, stosPom, stosDoc, stosZr);
}
