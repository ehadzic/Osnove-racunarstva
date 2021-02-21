#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int x,a;
	x=1+rand()%100;
	printf("Izabrao sam broj. Probaj ga pogoditi (-1 za izlaz).\n");
	do{printf("Unesite broj: ");
		scanf("%d",&a);
		if(a>x && a!=-1) 
		printf("VECI\n");
		else if (a<x && a!=-1) 
		printf("MANJI\n");
		else if(a==x && a!=-1) 
		{printf("JEDNAK\n"); printf("Kraj igre."); break;}
		else if(a==-1) { printf("Kraj igre."); break;}
		}
	while(a!=-1 && a!=x);
	return 0;
}
