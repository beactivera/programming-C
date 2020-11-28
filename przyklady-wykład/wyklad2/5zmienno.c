#include<stdio.h>
 
int main()
{
    float f = 1.0f/7;
    double d = 1.0/7;
 
    printf("Typ float\n");
    printf("  1/7 = %f\n", f);
    printf("  1/7 = %.16f\n", f);
 
    printf("Typ double\n");
    printf("  1/7 = %lf\n", d);
    printf("  1/7 = %.16lf\n", d);
 
    return 0;
}