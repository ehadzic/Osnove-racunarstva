#include <stdio.h>
int faktorijel(int x) {
	int val =1;
	if(x==1 || x==0)  {
		return 1;
	}else{
		val=x*faktorijel(x-1);
		return val;
	}
}
int main() {
	int n,i;
	double x,suma=0;
	
	printf("Unesite broj n u intervalu [1, 12]: ");
	scanf("%d",&n);
	printf("Unesite realan broj x: ");
	scanf("%lf",&x);
	
	for(i=1;i<=n;i++) {
		suma += x/faktorijel(i);
	}

	printf("Suma od 1 do %d za x = %.3f je %.3f",n,x,suma);



	
	return 0;
}
