#include <stdio.h>
#include <math.h>
#define PI 3.14
int main()
{
    float a, b, c, r, h, p1, p2, p;


    printf ("Unesite stranicu a, b i c");
    scanf ("%f %f %f", &a, &b, &c);
    printf ("unesite poluprecnik baze valjka");
    scanf ("%f", &r);
     printf ("unesite visinu valjka");
     scanf("%f", &h);
     p1=2*(a*b+b*c+a*c);
     p2=2*r*PI*h;
     p=p1+p2;
     printf("povrsina tijela je %.3f", p);
    


 
    return 0;
}


