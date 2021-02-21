#include <stdio.h>
#include<stdlib.h>

struct Vrijeme {
	int sati;
	int minute;
	int sekunde;
	
} v;

struct Vrijeme unos_vremena (){
	scanf("%d %d %d", &v.sati, &v.minute, &v.sekunde);
	return v;
}
struct Vrijeme proteklo (struct Vrijeme v1, struct Vrijeme v2){
    int a;
    struct Vrijeme povratno;
	a= abs((v1.sati*3600+v1.minute*60+v1.sekunde)-(v2.sati*3600+v2.minute*60+v2.sekunde));
	povratno.sati=a/3600;
	povratno.minute=a/60-povratno.sati*60;
	povratno.sekunde=a-povratno.minute*60-povratno.sati*3600;
	return povratno;
}

int main() {
	struct Vrijeme v1,v2;
	printf("Unesite prvo vrijeme (h m s): \n");
	v1=unos_vremena();
	printf("Unesite drugo vrijeme (h m s): \n");
	v2=unos_vremena();
	printf("Izmedju dva vremena je proteklo %d sati, %d minuta i %d sekundi.",proteklo(v1,v2));
	return 0;
}
