#include <stdio.h>
#include <math.h>

int main()
 {
    int n, i;

    i=0;
    
    printf("Podaj liczbe naturalna: ");
    scanf("%d",&n);

    while (i+1<n)
    {
        i = i+1;
        if(i%3==0)
        {
            printf("% d",i);
        }

    }

  printf("\n");  
  return 0;
}