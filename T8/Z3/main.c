#include <stdio.h>
float maxtemp (float p[],int br){
	float *q=p;
	float max;
	max=*p;
	while(q<p+br){
		if(*q>max)
		max=*q;
		q++;
	}
	return max;
	
	
}

float prtemp(float p[],int br){
	float suma=0;
	float *q=p;
	while(q<p+br){
		suma=suma+*q;
		q++;
	}
	return suma/br;
	
}

int main() {
	int i,n;
	float niz[100];
	printf("Unesite broj mjerenja: ");
	scanf("%d",&n);
	printf("Unesite temperature: ");
	for(i=0;i<n;i++){
		scanf("%f",&niz[i]);
	}
	printf("Maksimalna temperatura: %.1f",maxtemp(niz,n));
	printf("\nProsjecna temperatura: %.1f",prtemp(niz,n));
	
	return 0;
}
