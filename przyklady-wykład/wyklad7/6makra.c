#include<stdio.h>
 
#define PI 3.1415
#define XPLUSX(X) X+X
#define XRAZYX(X) (X*X)
#define XRAZYX2(X) ((X)*(X))
 
int main()
{
    double r = 1.0;
    printf("Pole kola o promieniu %lf = %lf\n", r, PI*r*r);    
 
    int i;    
    i = XPLUSX(2)*3;
    printf("i = %d\n", i); //blad
    
    i = XRAZYX(2+1);
    printf("i = %d\n", i); //blad
 
    i = XRAZYX2(2+1);
    printf("i = %d\n", i); //ok
 
    int z = 3;
    i = XRAZYX2(z++);     //blad
    printf("i = %d, z = %d\n", i, z);    
	
    return 0;
}