#include <stdio.h>
#define SP1 65
#define SP2 90
#define DP1 105
#define DP2 140
#define P1 65
#define P2 80
int main() {
	
	float SP, DP, Puls;
	printf("Unesite sistolicki, dijastolicki pritisak i puls: ");
	scanf ("%f %f %f", &SP, &DP, &Puls);
	if (SP>SP1 && SP<SP2) {printf("SP: normalan\n");} else printf("SP: nije normalan\n");
	if (DP>DP1 && DP<DP2) printf("DP: normalan\n"); else printf("DP: nije normalan\n");
	if(Puls>P1 && Puls<P2) printf ("Puls: normalan\n"); else printf ("Puls: nije normalan\n");

	return 0;
}

