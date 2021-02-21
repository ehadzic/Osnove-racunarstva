#include <stdio.h>

int main() {
	int niz[10],i,j,brojac=0,n;
	printf("Unesite elemente niza: ");
	for(i=0;i<10;i++){
	    scanf("%d",&niz[i]);
	    brojac++;
	    if(niz[i]==-1) {
	        brojac--; 
	        break;
	    }
	}
	printf("Unesite element koji treba izbaciti: ");
	scanf("%d",&n);
	for(i=0;i<brojac;i++) {
	    if(niz[i]==n) {
	        for(j=i;j<brojac-1;j++) 
	        niz[j]=niz[j+1];
	        brojac--;
	        i--;
	    }
	}
	printf("Novi niz glasi: ");
	for(i=0;i<brojac;i++) {
	if(i==brojac-1) printf("%d",niz[i]); 
	else printf("%d,",niz[i]);
	}
	return 0;
}
