#include <stdio.h>

int drugi (int niz[], int n) 
{
	int max, max1, i, j, k, h, b, raz;
    
    max=0;
    max1=0;
    b=0;
	if (n==1)
	{
		return -1;
	}

	else
	{
	
	  for (i=0; i<n; i++)
	  {
		if (niz[i]>max)
		{
			max=niz[i];
		}
		
		if (niz[n-1]==niz[n-1-i]&& niz[0]==niz[1])
		{
		  b++;	
		}
		
		if ((b+1)==n)
		{return -1;}
	  }
	 
	  for (k=0; k<n; k++)
	  {
		if (niz[k]>max1 && niz[k]<max)
		{
			max1=niz[k];
		}
	  }
	  for (j=0; j<n; j++)
	  {
		if (niz[j]==max1)
		{
			raz=j;
		}
	  }
	  
	  return raz;
	}
}


int main() 
{
	int niz[100],n, m, unos, rez;
	printf("Unesite niz brojeva: ");
	n=0;
	m=0;
	while (m==0)
	{
	  scanf("%d",&unos);
	  if (unos==(-1))
	  {
	  	m=-1;
	  }
	  
	  else
	  {
	  	niz[n]=unos;
	  	n++;
	  }
	}
	
	rez=drugi(niz,n);
	if (rez==(-1))
	{
		printf ("-1");
	}
	else
    { 
    	printf ("Indeks drugog po velicini je: %d", rez);
    }
	return 0;
}