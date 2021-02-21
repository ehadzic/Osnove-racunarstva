#include <stdio.h>
#define BROJ_EL 10 
int main() {
	int niz[10],suma=0,i;
	float prosjek;
	
	/* Unos niza */
	for(i=0;i<10;i++){
	printf("Unesite %d. cijeli broj: ",i+1);
		scanf("%d",&niz[i]);
	}
	for(i=0;i<10;i++)
	{
		suma=suma+niz[i];
	
	}
		prosjek=(float)suma/10;
	printf("Srednja vrijednost unesenih brojeva je %.2f.\n",prosjek);
	return 0;
}
