#include <math.h>
#include <stdio.h>


double kwadrat(double a);

int main(){

    double x, pierwiastek;
    printf("Podaj x: ");
    scanf("%lf", &x);

    pierwiastek = sqrt(kwadrat(x));

    printf("%lf", pierwiastek);

    if(x == pierwiastek){
        printf("%lf jest rowny pierwiastkowi z %lf.\n",x,pierwiastek);
    }
    else{
        printf("%lf NIE jest rowny pierwiastkowi z %lf.\n",x,pierwiastek);
    }
    return 0;
}
double kwadrat(double a){
    return a*a;
}