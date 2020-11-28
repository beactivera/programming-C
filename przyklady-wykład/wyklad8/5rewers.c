#include<stdio.h>
#include<string.h>
 
int main()
{
    int i;
    char n1[][80] = {"napis1", "Ala ma kota", "inny napis"};
    for (i=0; i<3; i++)
    {
        int len = strlen(n1[i]);
        char *z = n1[i] + len - 1;
        while (z >= n1[i])
        {            
            printf("%c", *z);                        
            z--;
        }
        printf("\n");
    }
    
    return 0;
}