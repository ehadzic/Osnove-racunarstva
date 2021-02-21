#include <stdio.h>

int main() {
int a,niz[101]={0},i;
printf("Unesite brojeve: \n");

do{scanf("%d",&a);
if(a==-1) break;
if(a>100 || a<0) {
    
    printf("Brojevi moraju biti izmedju 0 i 100!\n"); 
    continue;
    }
niz[a]++;
    
}
while(a!=-1);
for(i=0;i<101;i++) {
    if (niz[i]!=0) printf("Broj %d se ponavlja %d\n",i,niz[i]);
}

	return 0;
}
