#include<stdio.h>
 
int main()
{
    char* napis = "ABC";
    napis[2] = napis[1];
    napis[1] = napis[0];
    napis[0] = napis[2];
    printf("%s\n",napis);
    return 0;
}