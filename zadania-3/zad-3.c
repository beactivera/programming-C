#include <stdio.h>
#include <math.h>

int main()
 {
    int n;
    int i = 2;

    printf("Podaj liczbe naturalna: ");
    scanf("%d",&n);

    while(n>2)
    {
        i +=1; 

        if(n%n == 0 && n%1 == 0 && n%i!=0)
        {
            printf("Podana liczba jest licza pierwsza.\n");
            break;
        }
        else
        {
            printf("Podana liczba nie jest licza pierwsza.\n");
            break;
        }
        
        
    }

    if(n==0 || n==1 || n==2)
    {
        printf("Podana liczba nie jest licza pierwsza.\n");
    }


  printf("\n");  
  return 0;
}