#include <stdio.h>

int main() {
int niz[10],i,suma=0,brojac=0,min,max,suma1=0;
float prosjek,prosjek1;


for(i=0;i<10;i++)
{   printf("Unesite %d. cijeli broj: ",i+1);
    scanf("%d",&niz[i]);
    suma1=suma1+niz[i];
    if(niz[i]%2==0) 
    {
        suma=suma+niz[i]; 
        brojac++;
        
    }
}
prosjek=(float)suma/brojac;
prosjek1=(float)suma1/10;
min=niz[0];
max=niz[0];

for(i=0;i<10;i++)
{
    if (niz[i]<min) min=niz[i];
    if (niz[i]>max) max=niz[i];
    
}

printf("Srednja vrijednost unesenih brojeva je %.2f.",prosjek1);
if (brojac==0) 
printf("\nSrednja vrijednost parnih brojeva je 0.00.");
else printf("\nSrednja vrijednost parnih brojeva je %.2f.",prosjek);
printf("\nNajveci element je %d a najmanji %d.",max,min);	
	return 0;
}
