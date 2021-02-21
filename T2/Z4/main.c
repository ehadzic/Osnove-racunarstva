#include <stdio.h>

int main() {
	int a, b, c, x=0, y=0, z=0;
	printf("Unesite tri broja: ");
	scanf("%d %d %d", &a, &b, &c);
	if((a<50 || a>200) || (b<50 || b>200) || (c<50 || c>200)) {printf("Svi brojevi nisu iz intervala 50 do 200");
	return 0;}
	if(a>=b && a>=c) {x=a; if(b>=c){y=b; z=c;}}
	if(a>=b && a>=c) {x=a; if (c>=b){y=c; z=b;}}
	if(b>=a && b>=c) {x=b; if(a>=c) {y=a; z=c;}}
	if(b>=a && b>=c) {x=b; if(c>=a) {y=c; z=a;}}
	if(c>=a && c>=b) {x=c; if (a>=b){y=a; z=b;}}
	if(c>=a && c>=b) {x=c; if (b>=a){y=b; z=a;}}
	
	
	printf("Brojevi poredani po velicini glase: %d,%d,%d", z, y, x);
	if(x==y && y==z) printf("\nUnesen je 1 razlicit broj"); 
	else if(x==y && y!=z) printf("\nUnesena su 2 razlicita broja"); 
	else if(y==z && z!=x) printf("\nUnesena su 2 razlicita broja");
	else if(x!=y && y!=z && x!=z) printf("Unesena su 3 razlicita broja");
	

	
	return 0;
}
