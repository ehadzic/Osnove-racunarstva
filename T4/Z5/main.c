#include <stdio.h>

int main() {
	int a,min=9,max=0,b;
	printf("Unesite broj: ");
	scanf("%d",&a);

	do{
	  b=a%10;
	if(b>max) max=b;
	if(b<min) min=b;
	a=a/10;
	    
	}
	while(a>0);
	printf("Najveca cifra je %d a najmanja je %d.",max, min);
	return 0;
}
