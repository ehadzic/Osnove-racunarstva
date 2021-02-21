#include <stdio.h>
#include <stdlib.h> /* Zbog funkcije exit() */
int main() {
	FILE *ulaz;
	char znak, ime[20];
	int broj_redova=0, broj_rijeci=0, broj_znakova=0, razmak=1;
	int brojSam = 0, brojCif = 0, brojVelSlo = 0;

	//printf ("Unesite ime datoteke: ");
	scanf ("%s", ime);
	ulaz = fopen(ime, "r");
	if (ulaz == NULL) {
		printf ("Pogreska kod otvaranja datoteke %s!\n\n", ime);
		exit (1);
	}
	while ((znak=fgetc(ulaz)) != EOF) {
		/* Ako je znak novi red, povecaj broj linija za jedan */
		if (znak=='\n')
			++broj_redova;

		/* Da li je znak razmak? */
		if (znak==' ' || znak=='\n' || znak=='\t')
			razmak=1;

		else {
			++broj_znakova;
			if(znak == 'a' || znak == 'A' || znak == 'E' || znak == 'e' || znak == 'I' || znak == 'i' || znak == 'o' || znak == 'O' || znak == 'u' || znak == 'U')
				brojSam++;
			if(znak >= '0' && znak <= '9')
				brojCif++;
			if(znak >= 'A' && znak <= 'Z')
				brojVelSlo++;
			
			/* Ako je prethodni znak bio razmak a ovaj nije,
			   povecavamo broj rijeci za 1 */
			if (razmak==1) ++broj_rijeci;
			razmak=0;
		}
	}
	if (broj_znakova != 0) broj_redova++;
	printf ("Broj redova: %d\nBroj rijeci: %d\nBroj znakova: %d\n", 
broj_redova, broj_rijeci, broj_znakova);
	printf("Broj samoglasnika: %d\n", brojSam);
	printf("Broj velikih slova: %d\n", brojVelSlo);
	printf("Broj cifara: %d\n", brojCif);
	fclose (ulaz);
	return 0;
}
