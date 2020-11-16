#include <stdio.h>

int main()
{
  int n, c, d, a[100], b[100];

  printf("Podaj ilosc elementow w tablicy: ");
  scanf("%d", &n);

  printf("Podaj elementy tablicy:\n");
  for (c = 0; c < n ; c++)
    scanf("%d", &a[c]);

// REVERS - Kopowanie elementow do tablicy b zaczynajac od ostatniego elementu w tablicy a
  for (c = n - 1, d = 0; c >= 0; c--, d++)
    b[d] = a[c];

// Modyfikacja oryginalnej tablicy a poprzez przypisanie do niej wartosci tablicy b
  for (c = 0; c < n; c++)
    a[c] = b[c];

  printf("Twoja tablica po odwróceniu wartośći: \n");
  for (c = 0; c < n; c++)
    printf("%d\n", a[c]);

  return 0;
}