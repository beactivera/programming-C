#include <stdio.h>

int main()
{
    float stopien_celcjusz, stopien_fahrenheit;

    printf("Podaj temperature w stopniach Fahrenheita: ");
    scanf("%f", &stopien_fahrenheit);

    stopien_celcjusz = (stopien_fahrenheit - 32) * 5 / 9;

    printf("%.2f stopni Fahrenheita = %.2f stopni Celcjusza", stopien_fahrenheit, stopien_celcjusz);

    return 0;
}