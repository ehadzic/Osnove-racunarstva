#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int faktorijel(int x) {
	int val =1;
	if(x==1 || x==0)  {
		return 1;
	}else
		val=x*faktorijel(x-1);
	return val;
}
	
	
	
float sinus(float x,float n) {
    int i; 
    float suma=0;
    for(i=0;i<n;i++) {
        suma=suma+pow(-1,i-1)*(pow(x,2*i-1)/faktorijel(2*i-1));
    
        
    }
    return suma;
}

int main() {
    float x,n;
    printf("Unesite x: ");
    scanf("%f",&x);
    printf("Unesite n: ");
    scanf("%f",&n);
    printf("sin(%f)=%f",x,sinus(x,n));
	
	return 0;
}
