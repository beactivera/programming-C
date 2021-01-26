#include<stdio.h>
#include<string.h>

/*funkcje head i tail nie działają dla pustych łańcuchów*/
char head(char*);
char* tail(char*);
int shuffle(char*, char*, char*);

int MEM[1001][1001];

int main()
{
    memset(MEM, 0xff, sizeof(MEM));
    char* s1 = "KAJAK";
    char* s2 = "JAKA";
    char* sw = "KJAAJKAKA";

    if (shuffle(s1,s2,sw)==1)
        printf("TAK\n");
    else
        printf("NIE\n");
}

char head(char* tab)
{
    return *tab;
}

char* tail(char* tab)
{
    return tab+1;
}


int shuffle(char* s1, char* s2, char* sw)
{
    if (MEM[strlen(s1)][strlen(s2)]!=-1)
        return MEM[strlen(s1)][strlen(s2)];
    
    int ret=-1;
    if (ret==-1 && strlen(s1)==0 && strcmp(s2, sw)==0) ret=1;
    if (ret==-1 && strlen(s1)==0 && strcmp(s2, sw)!=0) ret=0;
    if (ret==-1 && strlen(s2)==0 && strcmp(s1, sw)==0) ret=1;
    if (ret==-1 && strlen(s2)==0 && strcmp(s1, sw)!=0) ret=0;

    if (ret==-1 && head(s1) == head(sw))
        if (shuffle(tail(s1), s2, tail(sw)))
            ret=1;

    if (ret==-1 && head(s2) == head(sw))
        if (shuffle(s1, tail(s2), tail(sw)))
            ret=1;
    if (ret==-1) ret=0;

    MEM[strlen(s1)][strlen(s2)] = ret;
    
    return ret;
}
