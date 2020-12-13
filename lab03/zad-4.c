#include <stdio.h>
#include <math.h>

int main()
 {
    //  FOR

    // int sum = 0;
    // for (int i=1; i<=100; i+=2)
    // {
    //     sum += i;
    //     printf("% d", sum);
    // }

    int sum = 0;
    int i = 1;

    // WHILE

    // while(i<=100)
    // {
    //     sum += i;
    //     printf("% d", sum);
    //     i += 2;
    // }    


    // DO WHILE

    do
    {
        sum +=i;
        printf ("% d", sum);
        i+=2;
    }
    while (i<=100);




  printf("\n");  
  return 0;
}