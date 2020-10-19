#include <stdio.h>

int main()
{
    float stopien_celcjusz, stopien_fahrenheit;

    printf("Podaj temperature w stopniach Celcjusza: ");
    scanf("%f", &stopien_celcjusz);

    stopien_fahrenheit = (stopien_celcjusz* 9 / 5) + 32;

    printf("%.2f stopni Celcjusza = %.2f stopni Fahrennheita", stopien_celcjusz, stopien_fahrenheit);

    return 0;
}