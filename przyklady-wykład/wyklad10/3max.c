#include<stdio.h>

double max(double a[], int pocz, int kon);

int main()
{
    double a[] = {1.21, 2.21, 3.11, 1.22, 3.21, 1.21, 3.24, 1.21, 2.32, 2.43};

    printf("%lf\n", max(a, 0, sizeof(a)/sizeof(double)));
    return 0;
}

double max (double a[], int pocz, int kon)
{
    if (kon-pocz == 1) 
        return a[pocz];
    int p = (pocz+kon)/2;
    double m1 = max(a, pocz, p); 
    double m2 = max(a, p, kon);
    if (m1 > m2) 
        return m1;
    else 
        return m2;        
}