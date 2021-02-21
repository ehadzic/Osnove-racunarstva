#include <stdio.h>
#include <math.h>
int main() {
	int i,j;
	printf ("  X |");
	for(i=1; i<=10; i++) printf("%4d",i);
	printf("\n");
	printf("----+");
	for(i=1;i<=40;i++) printf("-");
	printf("\n");
	for(i=1; i<=10; i++)
	{
	    printf("%3d |",i);
	for(j=1;j<=10;j++) printf("%4d",i*j);
	    printf("\n");
	}
	
	return 0;
}
