#include <stdio.h>
#include <math.h>
int main()
{
    float x1, y1,z1, x2, y2, z2, d;


    printf ("Unesite prve koordinate tacke 1");
    scanf ("%f %f %f", &x1, &y1, &z1);
    printf ("Unesite koordinate tacke 2:");
    scanf ("%f %f %f", &x2, &y2, &z2);
    
    d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)+(z2-z1)*(z2-z1));
   printf("udaljenost izmedju tacke1 i tacke2 je %.2f", d);

 
    return 0;
}

