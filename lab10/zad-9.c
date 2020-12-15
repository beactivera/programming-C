#include <stdio.h>

long long silnia(int n);

int main()
{
 int n;
 
 printf("Podaj liczbe: ");
 scanf("%d", &n);
 
 printf("silnia jest rowna %lld\n",silnia(n));

 return 0;
}

long long silnia(int n){
    if(n<2)
            return 1; 

    return n*silnia(n-1); 
}