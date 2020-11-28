#include<stdio.h>
#include<stdbool.h>
#include<math.h>
 
bool liczbadoskonala(int);
 
int main()
{
    for (int i=1; i<100000; i++)
    if (liczbadoskonala(i))
        printf("%d\n", i);
    return 0;
}
 
bool liczbadoskonala(int n)
{
    if (n<=1) 
        return false;
    int sumdz = 1;
    int j;
    for (j=2; j<sqrt(n); j++)
    if (n%j==0)
    {
        sumdz+=j;
        sumdz+=n/j;
    }
    if (j==sqrt(n))
        sumdz+=sqrt(n);
    return (sumdz == n);
}