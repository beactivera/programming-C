#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#include<string.h>

int t[128][128][128][128];

/* wczytywanie pliku */
bool dobryznak(char);
char wczytajznak(FILE *, char);
bool wczytajplik();

int main()
{
    memset(t, 0, sizeof(t));
            
    if (!wczytajplik())
    {
        printf("Blad wczytywania danych\n");
        return 1;
    }

    for (int x=0; x<127; x++)
    for (int y=0; y<127; y++)
    for (int z=0; z<127; z++)
    for (int w=0; w<127; w++)
        if (t[x][y][z][w] > 0)
            printf("%c%c%c%c - %i\n", x, y, z, w, t[x][y][z][w]);

    return 0;
}

bool dobryznak(char c)
{
    if ((c>='a' && c<='z') || c==' ')
        return true;
    return false;
}

char wczytajznak(FILE *f, char pop)
{
    char c;
    do
    {
        c = fgetc(f);
        c = tolower(c);
        if (c!=EOF && !dobryznak(c)) 
            c = ' ';       
    }
    while (c!=EOF && (c==pop && pop==' '));
    return c;
}

bool wczytajplik()
{
    FILE *f;
    char c1, c2, c3, c4;
    f = fopen("dane.txt","rt");
    if (f == NULL) return false;
    
    c4=wczytajznak(f, '!');
    if (c4 == EOF) return false;
    c3=wczytajznak(f, c4);
    if (c3 == EOF) return false;
    c2=wczytajznak(f, c3);
    if (c2 == EOF) return false;
    c1=wczytajznak(f, c2);
    if (c1 == EOF) return false;

    do 
    {
        t[c4][c3][c2][c1]++;
        c4=c3;
        c3=c2;
        c2=c1;
    }    
    while((c1=wczytajznak(f,c1)) != EOF);
    
    fclose(f);
    return true;
}
