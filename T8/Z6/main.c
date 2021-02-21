#include <stdio.h>

void sortiraj (double niz[], int n)
{
	double *i;
	double *p;
	double *j;
	double *min; 
	double temp;
	i=&niz[0];
	p=&niz[0];
	
	for (i=p; i<(p+n); i++)
	{
		min=i;
		for (j=i; j<(p+n); j++)
		{
			if ((*j)<(*min))
			{
				min=j;
			}
		}
		
		temp=(*min);
		*min=(*i);
		*i=temp;
	}
}

int main() 
{
	int m, n;
	double f, niz[100];
	
	m=0;
	n=0;
	while (m==0)
	{
		scanf ("%lf",&f);
		if (f==(-1))
		{
			m=-1;
		}
		else
		{
			niz[n]=f;
			n++;
		}
	}
	
	sortiraj(niz,n);
	
	return 0;
}