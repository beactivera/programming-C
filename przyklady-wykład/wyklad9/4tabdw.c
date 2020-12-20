#include<stdio.h>
#include<stdlib.h>

void pokaz(int t[][10], int N);
char getch(); 

int main()
{
    int tab[10][10] = {
        {1,1,1,1,1,1,1,1,1,1},
        {1,2,1,0,0,0,0,0,0,1},
        {1,0,1,0,0,0,0,0,0,1},
        {1,0,1,0,0,0,0,0,0,1},
        {1,0,1,1,1,1,1,0,0,1},
        {1,0,0,0,1,0,0,0,0,1},
        {1,0,0,0,1,0,0,0,0,1},
        {1,0,0,0,1,1,1,0,0,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,1,1,1,1,1,1,1,1,1} };
    int pozx = 1;
    int pozy = 1;

    char c;    
    do
    {
        system("clear");
        printf("a,s,w,d - ruchy\nk - wyjscie\n");
        pokaz(tab, 10);
        
        c = getch(); // w windowsie w conio.h

        tab[pozy][pozx]=0;
        switch (c)
        {
            case 'a': if (tab[pozy][pozx-1]==0) 
                          pozx--;
                      break;
            case 'd': if (tab[pozy][pozx+1]==0) 
                          pozx++;
                      break;
            case 'w': if (tab[pozy-1][pozx]==0) 
                          pozy--;
                      break;
            case 's': if (tab[pozy+1][pozx]==0) 
                          pozy++;
                      break;                                              
        }
        tab[pozy][pozx]=2;
    } while (c!='k');
    return 0;
}

void pokaz(int t[][10], int N)
{
    int i, j;
    for (i=0; i<N; i++)
    {
        for (j=0; j<10; j++)
            switch (t[i][j])
            {
                case 0: printf(" "); break;
                case 1: printf("X"); break;              
                case 2: printf("o"); break;                            
            }
        printf("\n");
    }
}

char getch()
{
    system ("/bin/stty raw");  
    char ret = getchar();
    system ("/bin/stty cooked");
    return ret;
}
