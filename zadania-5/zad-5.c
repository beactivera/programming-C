#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n,x;
    
    printf("Podaj ilosc elementow w tablicy: ");
    scanf("%d", &n);

    int tab[n],tab_odwr[n];

    for( int i=0 ; i<n; i++)
    {
        printf("Podaje element %d tablicy: ", i+1);
        scanf("%d",&x);

        tab[i] = x;
    }

    printf("Twoja tablica: [");
	for (int i=0; i<n-1; i++)
		 printf("%d, ", tab[i]);
	printf("%d]\n", tab[n-1]);

    for (int i=0; i<n; i++)
    {
        tab_odwr[i] = tab[n-1-i];
    }

    printf("Twoja ODWROCONA tablica: [");
	for (int i=0; i<n-1; i++)
		 printf("%d, ", tab_odwr[i]);
	printf("%d]\n", tab_odwr[n-1]);

    return 0;
}
