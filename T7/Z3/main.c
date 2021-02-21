#include <stdio.h>

int prost(int x){
	int i, val=1;
	if(x==1) 
	return 0;
	for(i=2;i<x;i++){
		if(x%i==0)
		val=0;
	}
	return val;
}
int main() {
	int i;
	for(i=2;i<100;i++) {
		if(prost(i))
		printf("\n%d",i);
	}
	return 0;
}
