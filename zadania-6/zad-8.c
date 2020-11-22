#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int floorSqrt(int liczba);

// Driver program 
int main()  
{      
    int n, pierw;
    printf("Podaj liczbe: ");
    scanf("%d", &n);

    pierw = floorSqrt(n);

    printf("Pierwiastek z podane liczby wynosi: %d\ng", pierw); 
    return 0;    
} 
 

         
int floorSqrt(int liczba)  
{     
    if (liczba == 0 || liczba == 1)  
       return liczba; 
  
   
    int m, l = 1, r = liczba, pierw; 

    while ( l<= r)  
    {         
        m = (l + r) / 2; 
  
        if (m*m == liczba) 
            return m; 
  
        if (m*m < liczba)  
        { 
            l = m + 1; 
            pierw = m; 
        }  
        else 
            r = m -1;         
    } 
    return pierw; 
} 
   
