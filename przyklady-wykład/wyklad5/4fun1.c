#include<stdio.h>
 
// prototypy
int dodaj1(int);
double poleProstokata(double, double);
void wyswietlTablMnozenia(int, int);
 
int main() 
{
    //wywolania
    wyswietlTablMnozenia(4, 5);
    printf("%d\n",dodaj1(dodaj1(7)));
    double pole = poleProstokata(3.11, 2.1);
    printf("%f\n",pole);
    return 0;
}
 
//definicje
int dodaj1(int a)
{
    return a+1;
}
 
double poleProstokata(double a, double b)
{
    return a*b;
}
 
void wyswietlTablMnozenia(int a, int b)
{
    int y,x;
    for (y=1; y<=a; y++)
    {
        for (x=1; x<=b; x++)
            printf("%5d", x*y);
        printf("\n");
    }
}