#include <stdio.h>


int main()
{
    float mt, vt, cijena1, cijena2, racun1, racun2, postotak1, postotak2,u;


    printf ("potrosnju mt i vt");
    scanf ("%f %f", &mt, &vt);
     printf ("unesite cijenu mt i vt");
    scanf ("%f %f", &cijena1, &cijena2);
    racun1=mt*cijena1;
    racun2=vt*cijena2;
    printf("racun mt %.2f i vt %.2f je", racun1, racun2);
    u=mt+vt;
    postotak1=mt/u;
    postotak2=vt/u;

  
 
    return 0;
}