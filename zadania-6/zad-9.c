#include<time.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{

double low = 0;
double high = 3;
double x;
double y;



while(low <= high) {

  x = (low + high)/2;
  
  y = (x*x*x) - (2*(x*x)) + (x - 7);

  if(y == 0) {

    printf("Miejscem zerowym funkcji jest %lf", x);

  } else if(y > 0) {

    high -= 0.00001;

  } else {

    low += 0.00001;

  }

}

printf("Miejscem zerowym funkcji jest: %lf", x);

  return 0;
}
