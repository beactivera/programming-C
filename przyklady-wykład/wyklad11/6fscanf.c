#include<stdio.h>

int main()
{
    FILE *f = fopen("dan.txt","rt");
    if (f == NULL)
    {
        printf("Blad otwarcia pliku\n");
        return 1;
    }
    
    char s1[10];
    char s2[10];
    char s3[10];
    int i;
        
    if (fscanf(f,"%9s%9s%9s%d", s1, s2, s3, &i)==4)
        printf("Odczytalem: \n<<%s>>\n<<%s>>\n<<%s>>\n%i\n", s1, s2, s3, i);
    fclose(f);        
    return 0;
}