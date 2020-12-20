#include<stdio.h>
#include<stdbool.h>

typedef enum 
{
    STYCZEN, 
    LUTY,
    MARZEC,
    KWIECIEN,
    MAJ,
    CZERWIEC,
    LIPIEC,
    SIERPIEN,
    WRZESIEN,
    PAZDZIERNIK,
    LISTOPAD,
    GRUDZIEN    
} TMiesiace;

int main()
{
    TMiesiace mm = LUTY;
    int i = mm;
    printf("%d\n", i);
    
    mm = 2;
    printf("%d\n", mm);

    if (mm == MARZEC)    
        printf("PRAWDA\n");
    else
        printf("FALSZ\n");
	
    printf("%d \n", STYCZEN);
    printf("%d \n", LUTY);
    printf("%d \n", MARZEC);
    printf("%d \n", KWIECIEN);
    printf("%d \n", MAJ);
    printf("%d \n", CZERWIEC);
    return 0;
}


