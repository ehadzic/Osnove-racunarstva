#include<stdio.h>
#include <stdlib.h> /* Zbog funkcije exit() */
int main() {
	FILE *ulaz;
	char znak, ime[20] = "ispiti.txt";
	int num = 0, indeks, numPro = 0;
	double prosjek, suma = 0, prolaznost;
	int predmet,tempPred, ocjena;

	ulaz = fopen(ime, "r");
	if (ulaz == NULL) {
		printf ("Pogreska kod otvaranja datoteke %s!\n\n", ime);
		return 1;
	}
	
	printf("Unesite predmet: ");
	scanf("%d", &predmet);
	
	while (fscanf(ulaz,"%d %d %d", &indeks, &tempPred, &ocjena) == 3){
	        if(tempPred == predmet){
	            num++;
	            if(ocjena >= 6){
	            	
	                numPro++;
	            }
	            suma += ocjena;
	        }
	        
	}
	if(!num){
	        	printf("Zalimo, ali ne postoje podaci o predmetu sa brojem %d!",predmet);
	        	return 1;
	        }
	prosjek = suma / num;

	prolaznost = ((float)numPro / num)*100;
	
	printf("Prosjecna ocjena: %.2f\n", prosjek);
	printf("Prolaznost: %.0f%%", prolaznost);
			
		
	
	
	fclose (ulaz);
	return 0;
}