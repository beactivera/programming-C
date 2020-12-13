#include <stdio.h>

int main(){

    int n=10;
    int i;
    int tab1[10] = {1,25,33,67,90,56,71,3,44,10};
    int tab2[10] = {44,8,17,48,63,2,99,84,45,12};

    int tab3a[10];
    printf("tablica 3a: ");
    for(i=0; i<n;i++){
        int pierwsza = tab1[i];
        int druga = tab2[i];
        tab3a[i] = pierwsza + druga;
        printf("%d ", tab3a[i]);
    }

    int tab3b[10];
    printf("tablica 3a: ");
    for(i=0; i<n;i++){
        int pierwsza = tab1[i];
        int druga = tab2[i];
        if(pierwsza>druga)
        {
            tab3b[i] = pierwsza;
        }
        else{
            tab3b[i] = druga;
        }
        printf("%d ", tab3b[i]);
    }

    return 0;
}