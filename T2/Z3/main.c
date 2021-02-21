#include <stdio.h>

int main() {
	int dan, mjesec;
	scanf("%d %d", &dan, &mjesec);
	printf("Dan: ");
	printf("Mjesec: ");
	printf("Vas znak je ");
	switch(mjesec) {
		case 1: (dan<20)? printf("Jarac!"):printf("Vodolija!");
		break;
		case 2: (dan<19)? printf("Vodolija!"):printf("Ribe!");
		break;
		case 3: (dan<21)? printf("Ribe!"):printf("Ovan!");
		break;
		case 4: (dan<20)? printf("Ovan!"):printf("Bik!");
		break;
		case 5: (dan<21)? printf("Bik!"):printf("Blizanci!");
		break;
		case 6: (dan<21)? printf("Blizanci!"):printf("Rak!");
		break;
		case 7: (dan<23)? printf("Rak!"):printf("Lav!");
		break;
		case 8: (dan<23)? printf("Lav!"):printf("Djevica!");
		break;
		case 9: (dan<23)? printf("Djevica!"):printf("Vaga!");
		break;
		case 10: (dan<23)? printf("Vaga!"):printf("Skorpija!");
		break;
		case 11: (dan<22)? printf("Skorpija!"):printf("Strijelac!");
		break;
		case 12: (dan<22)? printf("Strijelac!"):printf("Jarac!");
		break;
	}
	
	

	return 0;
}
