#include <stdio.h>

int main()
{
  printf("Podaj liczbe naturalna: ");
  float a;
  scanf("%i", &a);
  printf("Podaj druga liczbe naturalna: ");
  float b;
  scanf("%i", &b);


    if(b==0){
        printf("Nie mozna dzielic przez 0");
    }
    else{
        float iloraz;
        iloraz =a/b;
        printf("iloraz tych liczb wynosi:  %.2f ", iloraz);
    }

  return 0;
}