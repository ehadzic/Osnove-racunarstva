#include <stdio.h>
void unesi (char *niz, int velicina)
{
	char znak = getchar();
	if (znak == '\n')
		znak = getchar();
	int i = 0;
	while (i < velicina - 1 && znak != '\n')
	{
		niz[i] = znak;
		i++;
		znak = getchar();
	} niz[i] = '\0';
}
int prva_rijec (char *s)
{
	int broj = 0, razmak = 1;
	char *s1;
	s1 = s;
	while (*s != '\0')
	{
		if (*s == ' ')
			razmak = 1;
		else if (razmak == 1)
		{
			razmak = 0;
			broj++;
		}
		s++;
	}
	s = s1;
	while (*s < 'A' || (*s > 'Z' && *s < 'a' || *s > 'z' ))
		s++;
	while (*s != ' ' && *s != '\0')
		s++;
	*s = '\0';
return broj;
}
int main() {
	char *a[100];
	printf("Broj rijeci u recenici je: %d", prva_rijec(a));
	printf("%s", *a);
	return 0;
}