#include <stdio.h>
float maxtemp (float p[8]){
	float *q=p;
	float max;
	max=*p;
	while(q<p+8){
		if(*q>max)
		max=*q;
		q++;
	}
	return max;
	
	
}

float prtemp(float p[8]){
	float suma=0;
	float *q=p;
	while(q<p+8){
		suma=suma+*q;
		q++;
	}
	return suma/8;
	
}

int main() {
	int i;
	float niz[8];
	printf("Unesite temperature: ");
	for(i=0;i<8;i++){
		scanf("%f",&niz[i]);
	}
	printf("Maksimalna temperatura: %.1f",maxtemp(niz));
	printf("\nProsjecna temperatura: %.1f",prtemp(niz));
	
	return 0;
}
