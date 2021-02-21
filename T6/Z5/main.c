#include <stdio.h>
int main () {
	int mat[10][10],i,j,min;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++)
		scanf("%d",&mat[i][j]);
	}
    min=mat[1][1];
for(i=0;i<10;i++){
		if(mat[i][i]<min) 
		min=mat[i][i];
	}

	printf("%d",min);
	return 0;
}
