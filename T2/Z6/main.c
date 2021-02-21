#include <stdio.h>

int main() {
	float a, b, c, d;
	printf("Unesite brojeve a,b,c,d: ");
	scanf("%f %f %f %f", &a, &b, &c, &d);
	if (b<c) printf("\nSkupovi se ne sijeku.");
	else if (b>c) printf("Rezultantni interval je [%.0f,%.0f].", c, b);
	else if(a>c && b>d) {printf("Rezultantni interval je [%.0f,%.0f].", a,d); }
	return 0;
}
