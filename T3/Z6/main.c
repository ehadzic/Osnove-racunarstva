#include <stdio.h>

int main() {
	int i,n,brojac;
	brojac=0;
	
	printf("unesite n: ");
	scanf("%d",&n);
	if(n<=0) {
		printf("broj nije prirodan\n"); 
		return 0;
		
	}
	for(i=1;i<=n;i++) {
		if (n%i==0) brojac++;
		
	}
	if(brojac>2) 
	printf("broj je slozen. "); 
    else if (n==1) printf("broj nije ni prost ni slozen");
	else
	printf("broj je prost");
	
	return 0;
}
