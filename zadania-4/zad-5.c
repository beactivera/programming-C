#include <stdio.h>

int main() {
   int n, i, space,k;
   printf("Trojkat rownoramienny o wysokosci n.\n");
   printf("Podaj n: ");
   scanf("%d",&n);
   for (i = 1; i <= n; i++) {
       k = 0;
      for (space = 1; space <= n - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         k++;
      }
      printf("\n");
   }
   return 0;
}
