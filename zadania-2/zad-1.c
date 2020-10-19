#include <stdio.h>

int main()
{
  printf("Podaj liczbe naturalna: ");
  int a;
  scanf("%i", &a);
  printf("Podaj druga liczbe naturalna: ");
  int b;
  scanf("%i", &b);


    if(b==0){
        printf("Nie mozna dzielic przez 0");
    }
    else{
        float iloraz;
        iloraz =a/b;
        printf("iloraz tych liczb wynosi:  %f ", iloraz);
    }

  return 0;
}