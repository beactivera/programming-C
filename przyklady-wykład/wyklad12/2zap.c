#include<stdio.h>

int main()
{
    FILE *f = fopen("wynik.txt","wt");
    if (f == NULL)
    {
        printf("Blad otwarcia pliku\n");
        return 1;
    }
    
    char c='a';
    if (fputc(c, f) == c)
        printf("Zapisalem znak %c\n", c);

    if (fputs("Ala ma kota\n", f) != EOF)
        printf("Zapisalem lancuch\n");

    int d = fprintf(f, "%10d\n%-10d\n%s", 10, 10, "koniec");
    printf("Zapisalem %d znakow\n",d);
    
    fclose(f);
    return 0;
}
