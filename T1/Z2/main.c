#include <stdio.h>
#define PI 3.14

int main()
{
    float R, P, V, Plopte;


    printf ("Unesite poluprecnik:");
    scanf ("%f", &R);
    P=(R*R)*PI;
    V=(4./3)*R*R*R*PI;
    Plopte=4*R*R*PI;

  
    printf("\n Povrsina kruga sa poluprecnikom %2f je %.2f", R,P);
    printf("\n Zapremina kugle sa poluprecnikom %2f je %.2f", R,V);
     printf("\n Zapremina lopte sa poluprecnikom %.2f je %.2f",R, Plopte);
    return 0;
}
