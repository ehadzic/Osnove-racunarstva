#include <stdio.h>
void unos(char* string,int duzina) {
	int i=0;
	char c;
	do{
		c=getchar();
		string[i]=c;
		i++;
	}
	while(c!='\n' && i<duzina);
	string[i-1]='\0';
}
char* velika(char* string){
	char* prvi=string;
	while(*string!='\0'){
		if( *string>='a' && *string<='z')
		*string=(*string)-32;
		string++;
	}
	return prvi;
}
int main() {
	char rijec[80];
	int a=1;
	printf("Unesite neki tekst: ");
	unos(rijec,80);
	printf("%s",velika(rijec));
	return 0;
}