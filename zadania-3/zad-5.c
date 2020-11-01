#include <stdio.h>
#include <math.h>

int main()
 {
    //  int i;
    //  printf("Podaj dodatnia liczbe calkowiata\n");
    //  scanf("%d",&i);
    //  while (i<=0)
    //  {
    //      printf("Podaj ponownie dodatnia liczbe calkowita\n");
    //      scanf("%d",&i);
    //  }


    // rozwiazanie za pomoca petli for

    // int i;
    // printf("Podaj dodatnia liczbe calkowiata\n");
    // scanf("%d",&i);

    // for (int j=0; i<=j;)
    // {
    //     printf("Podaj ponownie dodatnia liczbe calkowita\n");
    //     scanf("%d",&i);
    // }

    // rozwiazanie za pomoca petli do for

    int i;

    do
    {
        printf("Podaj dodatnia liczbe calkowita\n");
        scanf("%d",&i);
    }
    while(i<=0);

    return 0;

 }