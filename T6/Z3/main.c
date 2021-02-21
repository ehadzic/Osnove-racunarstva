#include <stdio.h>

int main() {
int A[10], B[10], C[20],brojac=0,brojac2=0,i;
printf("Unesite elemente niza A: ");
for(i=0;i<10;i++) { 
	scanf("%d",&A[i]);
	brojac++;
	if (A[i] == -1) {
		brojac--;
		break;
	}
}
printf("Unesite elemente niza B: ");
for(i=0;i<10;i++) { 
	scanf("%d",&B[i]);
	brojac2++;
	if (B[i] == -1) {
		brojac2--;
		break;
	}
}
for(i=0;i<brojac;i++) C[i]=A[i];
for(i=0;i<brojac2;i++) C[brojac+i]=B[i];

printf("Niz C glasi: ");
for (i=0;i<brojac+brojac2;i++){
	if(i==brojac+brojac2-1) printf("%d",C[i]);
	else printf("%d,",C[i]);
	
}
	return 0;
}
