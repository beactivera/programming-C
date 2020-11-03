int cyfry() {

int x, y = 0;

printf("Podaj liczbę naturalną: ");
scanf("%d", &x);

while(x != 0) {
        
  y += x % 10;

  x = x / 10;
}

printf("Suma cyfr wynosi = %d", y);

  return 0;
}

int main()
{

int a;

do {

    printf("\n\nCo chcesz zrobic?");
    printf("\n1 - sprawdzic  czy  liczba  jest  pierwsza");
    printf("\n2 - sprawdzic  czy  liczba  jest  suma  dwoch  kwadraratow");
    printf("\n3 - policzyc  sume  cyfr  liczby");
    printf("\n4 - zakonczyc  dzialanie  programu\n");
    scanf("%d", &a);

if(a == 1) {
    (pierwsza());
}
if(a == 2) {
    (sumaKwadratów());
}
if(a == 3) {
    (cyfry());
}

} while(a != 4);

    return 0;
} 