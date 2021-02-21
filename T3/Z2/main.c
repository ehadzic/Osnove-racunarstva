#include <stdio.h>
#include <math.h>
int main() {
	int broj, suma, i;
	suma = 0;
    for(i=1;i<2;) {
    	printf("Unesite broj ");
    	scanf("%d", &broj);
    	suma=suma+broj;
    	if(suma>=100) 
    	break;
    	
    } 
	return 0;
}
