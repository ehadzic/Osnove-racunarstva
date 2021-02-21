#include <stdio.h>

struct Osoba{
	char ime[15];
	char prezime[20];
	int telefon;
};
struct Osoba unos_osobe(){
	struct Osoba o;
	printf("Unesite ime: ");
	scanf("%s",o.ime);
	printf("Unesite prezime: ");
	scanf("%s",o.prezime);
	printf("Unesite broj telefona: ");
	scanf("%d",&o.telefon);
	
	return o;
}
void ispis_osobe(struct Osoba o){
	printf("%s %s, Tel: %d",o.ime,o.prezime,o.telefon);
}


int main() {
	struct Osoba imenik[100];
	int var;
	int size=0;
	int i;
	
	do{
		printf("Pritisnite 1 za unos, 2 za ispis, 0 za izlaz: ");
		scanf("%d",&var);
		
		if(var==1){
			imenik[size++]=unos_osobe();
		}
		else if(var==2){
			for(i=0;i<size;i++){
				printf("\n%d. ",i+1);
				ispis_osobe(imenik[i]);
			}
			printf("\n");
		}
	}while(var!=0);
	
	return 0;
}
