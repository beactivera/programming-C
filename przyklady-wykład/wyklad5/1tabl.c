#include<stdio.h>
 
int main()
{
    int tab1[3];
    tab1[0] = 15;
    tab1[1] = 20;
    tab1[2] = 15;
 
    int tab2[3] = {10, 20, 15};
    tab2[0] = tab1[1] + tab2[0];
 
    printf("Pierwszy element tab2: %d\n", tab2[0]);
    printf("Czy drugie elementy sa sobie rowne: %d\n", tab1[1]==tab2[1]);
    printf("sizeof(tab1[1]) = %lu\n", sizeof(tab1[1]));
    printf("sizeof(tab1) = %lu\n", sizeof(tab1));
 
    return 0;
}