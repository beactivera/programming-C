#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#include<stdlib.h> /* rand */
#include<time.h>   /* time */
#include<string.h> /* memset */

int t[128][128][128][128];

/* wczytywanie pliku */
bool dobryznak(char c);
char wczytajznak(FILE *, char);
bool wczytajplik();

/* generowanie tekstu */
void generujtekst(int);
char nastepnalitera(char, char, char);

int main()
{
    memset(t, 0, sizeof(t));
    
    if (!wczytajplik())
    {
        printf("Blad wczytywania danych\n");
        return 1;
    }

    generujtekst(1000);
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
       if (c!=EOF && !dobryznak(c)) c = ' ';       
    }
    while (c!=EOF && (c==pop && pop==' '));
    return c;
}

bool wczytajplik()
{
    FILE *f;
    char c1,c2,c3,c4;
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

void generujtekst(int dl)
{
    srand(time(NULL));
    dl-=3;
    printf("the"); 
    char c3 = 't';
    char c2 = 'h';
    char c1 = 'e';
    while (dl>0)
    {
        char nowa = nastepnalitera(c3,c2,c1);
        printf("%c", nowa);
        c3=c2;
        c2=c1;
        c1=nowa;        
        dl--;
    }
    printf("\n");

}

char nastepnalitera(char c3, char c2, char c1)
{
    int suma = 0;
    for (int i=0; i<128; i++)
        suma += t[c3][c2][c1][i];

    if (suma==0) return '?';
    
    int los = rand()%suma;
    for (int i=0; i<128; i++)
    {
        los -= t[c3][c2][c1][i];
        if (los<0) 
            return i;
    }    
}
