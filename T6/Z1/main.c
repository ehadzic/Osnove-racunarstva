#include <stdio.h>
#define DUZINA 10
int main() {
    double niz[DUZINA],temp;
    int i,j,min;
    
    for (i=0; i<DUZINA; i++) {
        
        scanf("%lf", &niz[i]);
    }


    for (i=0; i<DUZINA; i++) {
        min=i;
        for (j=i+1; j<DUZINA; j++) {
            if (niz[j] < niz[min])
                min = j;
        }
        temp = niz[i];
        niz[i] = niz[min];
        niz[min] = temp;
    }


    
    
    for (i=0; i<DUZINA; i++)
        printf("%g ", niz[i]);
    printf("\n");
    return 0;
}
