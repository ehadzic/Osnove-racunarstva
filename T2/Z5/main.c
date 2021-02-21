#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, x, derivacija;
    printf("Unesite koeficijente a, b i c: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("Unesite tacku x: ");
    scanf("%f", &x);
    if (a<-10 || a>10 || b<-10 || b>10 || c<-10 || c>10) 
    printf("Koeficijenti a, b i c nisu u zadanom rasponu.");
    else derivacija=2*a*x+b;
    printf("Prva derivacija u tacki x=1 je %.0f", derivacija);



	return 0;
}
