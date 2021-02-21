#include <stdio.h>
void zaokruzi (double *p, int vel) 
{
	int i;
	double temp;
	for(i = 0; i < vel; i++) 
	{	if (*p < 0) 
		{
			*p = (int) ((*p - 0.05000000000001)*10);
			*p = (float)(*p / 10);
			p++;
		}
		else {
		*p = (int) ((*p + 0.05000000000001)*10);
		*p = (float)(*p / 10);
		p++;
		}
	}
	
}
int main() { int n, i; 
	double niz[1000];
	printf("Unesite broj clanova niza: ");
	scanf("%d", n);
	printf("Unesite niz: ");
	for(i=0; i<n; i++)
	scanf("%f", &niz[i]);
	zaokruzi ( niz, n);
	for (i=0; i<n; i++) 
	printf("%g ", niz[i]);
	
	return 0;
}