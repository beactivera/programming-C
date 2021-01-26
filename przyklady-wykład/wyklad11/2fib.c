#include<stdio.h>
#include<stdbool.h>

int F_old(int n);
int F(int n);

/******************** SPAMIETYWANIE ******************************/
#define MAX 1000
int mem[MAX]; // tabica do przechowywania zapamiętanych wyników
void init();
bool czyZapamietane(int arg, int *val);
void zapamietaj(int arg, int val);
/*****************************************************************/

int main()
{
    init();
    int j=42;
    printf("F(%d)=%d\n", j, F(j));    
    printf("F(%d)=%d\n", j, F_old(j));    
    return 0;
}

int F_old(int n)
{
    int ret;
    if (n==0) ret = 0;
    if (n==1) ret = 1;
    if (n>=2) ret = F_old(n-1) + F_old(n-2);
    return ret;
}

int F(int n)
{
    int ret;
    if (czyZapamietane(n, &ret))
        return ret;
    
    if (n==0) ret = 0;
    if (n==1) ret = 1;
    if (n>=2) ret = F(n-1) + F(n-2);

    zapamietaj(n, ret);
    return ret;
}

/******************** SPAMIETYWANIE *****************************/
void init()
{
    for (int i=0; i<MAX; i++)
        mem[i] = -1;
}

bool czyZapamietane(int arg, int *val)
{
    if (mem[arg] == -1)
        return false;
    *val = mem[arg];
    return true;
}

void zapamietaj(int arg, int val)
{
    mem[arg] = val;  
}
/*****************************************************************/
