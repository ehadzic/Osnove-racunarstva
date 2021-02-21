#include <stdio.h>


int main() {
	int t=0, n=27, m=12, i=0;
	
	for(i=1; i<m+n; i++){
		if((n%i)==0 && (m%i)==0){
			t=t+i;
			printf("%d \n", t);
			
		}
	}
	
	return 0;
}
