#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void unesi(char niz[], int velicina) {
    char znak = getchar();
    if (znak == '\n') znak=getchar();
    int i = 0;
    while (i < velicina-1 && znak != '\n') {
        niz[i] = znak;
        i++;
        znak = getchar();
    }
    niz[i]='\n';
     niz[i + 1]='\0';
}

int main() {
	FILE *ulaz, *predmetibla;
	char znak, ime[20] = "ispiti.txt";
	char ucitano[100];
	char imePred[100];
	int num = 0,indeks, numPro = 0;
	double prosjek, suma = 0, prolaznost;
	int predmet, tempPred, ocjena;
	int postoji = 0;
	int i = 0;
	
	ulaz = fopen(ime, "r");
	predmetibla = fopen("predmeti.txt", "r");
	
	if (ulaz == NULL) {
		printf ("Pogreska kod otvaranja datoteke %s!\n\n", ime);
		return 1;
	}
	while(!postoji){
		printf("Unesite predmet: ");
		unesi(imePred, 100);
		while(1){
			fscanf(predmetibla, "%d ", &tempPred);
			if(!fgets(ucitano, 100, predmetibla))
			break;
			
			if(!strcmp(ucitano, imePred)){
				postoji = 1;
				predmet = tempPred;
				break;
			}
		}
		if(postoji)
			break;
		printf("Nepostojeci predmet!\n");
		fseek(predmetibla, 0, SEEK_SET);
	}
	
	while (fscanf(ulaz,"%d %d %d", &indeks, &tempPred, &ocjena ) == 3){
	        if(tempPred == predmet){
	            num++;
	            if(ocjena >= 6){
	            	
	                numPro++;
	            }
	            suma += ocjena;
	        }
	}
	if(!num){
	        	printf("Zalimo, ali ne postoje podaci o predmetu %s!", imePred);
	        	return 1;
	        }
	prosjek = suma / num;
	prolaznost = ((float)numPro / num)*100;
	
	printf("Prosjecna ocjena: %.2f\n", prosjek);
	printf("Prolaznost: %.0f%%", prolaznost);
			
	fclose (ulaz);
	fclose (predmetibla);
	return 0;
}