#include <stdio.h>

int main() {
	int mat[10][10],i,j,min,max,redmax=1,redmin=1,temp;
	printf("Unesite elemente matrice: ");
	for(i=0;i<10;i++){
	    for(j=0;j<10;j++){
	        scanf("%d",&mat[i][j]);
	    }
	}
	min=mat[1][1];
	max=mat[1][1];
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(mat[i][j]<min){ 
				redmax=i;
			}
			if(mat[i][j]>max){
				redmin=i;
			}
		}
	}
	if(redmin=redmax) {
		printf("Najmanji i najveci element se nalaze u istom redu.");
		return 0;
	}
	else
	for(i=0;i<10;i++){
		temp=mat[redmin][i];
		mat[redmin][i]=mat[redmax][i];
		mat[redmax][i]=temp;
	}
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%d",mat[i][j]);
		}
		printf("\n");
	}
	return 0;
}
