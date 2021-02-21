#include <stdio.h>

int main() {
int a,brojac1=0,brojac2=0,brojac3=0;
printf("Unesite brojeve: ");
do{scanf("%d",&a);
	if(a%5==0) brojac1++;
	if(a%7==0) brojac2++;
	if(a%11==0) brojac3++;
}
while(a!=-1);
printf("\nDjeljivih sa 5: %d",brojac1);
printf("\nDjeljivih sa 7: %d",brojac2);
printf("\nDjeljivih sa 11: %d",brojac3);
	return 0;
}
