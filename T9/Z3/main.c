#include <stdio.h>
/*Funkcija za unos novog stringa*/
void unos(char* string,int duzina){
int i=0;
char c;
do{
    c=getchar();
    string[i]=c;
    i++;
}while(c!='\n'&&i<duzina);string[i-1]='\0';
	
}
/*Funkcija za prebrojavanje odredjenog znaka*/
int prebrojavanje(char*string, char znak){
int broj=0;
while(*string!='\0'){
    if(*string==znak)
        broj++;
        string++;
}
return broj;
}
/*Funkcija za prebrojavanje znakova ukupno*/
int duzina(char* string) {
int i=0;
do{
    if((*(string)>=' ' && *(string)<='~')){
        i++;
    }
}while(*string++!='\0');
return i;
}
/*Funkcija za prebrojavanje samoglasnika*/
int samoglasnici(char*string){
int i=0;
while(*string!='\0'){
    if(*string=='a'||*string=='e'||*string=='i'||*string=='o'||*string=='u'||*string=='A'||*string=='I'||*string=='O'||*string=='U'||*string=='E'){
        i++;
    }
    string++;
}
return i;
}
int main(){
char rijec[80],znak;
/*Unos rijeci i znaka*/
printf("Unesite jednu rijec do 80 znakova (ENTER za kraj): \n");
unos(rijec,80);
printf("\nKoji znak treba prebrojati: ");
scanf("%c",&znak);
/*Ispis statistike*/
printf("\nUnesena rijec sadrzi %i znakova.\nBroj znakova %c je: %d\nBroj samoglasnika je: %i\n",duzina(rijec),znak,prebrojavanje(rijec,znak),samoglasnici(rijec));
return 0;
}