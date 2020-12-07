#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char argv[]){  //need to get input for amount of terms

  argc =10;

    double pi = 0;
    double i =0;
    double neg;  //neg to make a number negative

    neg = -1;

    for(i = 1; i < argc; i++)
    { 
        printf("huj is: %lf", pi);
        pi = pi + pow(neg, i)(1/((2*i)-1));
        i = i+1;
        printf("The approximation of pi is: %lf", pi);
    }

    pi *= 4;
    printf("The approximation of pi is: %lf", pi);

    return 0;
}