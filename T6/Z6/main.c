#include <stdio.h>
int main (){
	float mat[100][100],suma=0;
	int i,j,m,n;
	printf("Unesite dimenzije matrice: ");
	scanf("%d %d",&m,&n);
	printf("Unesite elemente matrice: ");
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			scanf("%f",&mat[i][j]);
		}
	}
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			if(i==1 || j==1 || i==(m-1) || j==(n-1))
			suma=suma+mat[i][j];
		}
	}
	
	printf("Suma elemenata na rubu je %d",suma);
	return 0;
}