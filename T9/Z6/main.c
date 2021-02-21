#include<stdio.h>
void tritacke(char *s){
	char *p;
	char *pocetak_rijeci;
	char *kraj_rijeci;
	char *pi;
	p=s;
	int br=0;
	while(*p!='\0'){
		if(*p>='A' && *p<='Z' || *p<='a' && *p<='z'){
			br=0;
			pocetak_rijeci=p;
			while(*p>='A' && *p<='Z' || *p<='a' && *p<='z'){
				br++;
				p++;
			}
			kraj_rijeci=p;
			if(br>=10){ 
				*(pocetak_rijeci+2)='.';
				pi=pocetak_rijeci+3;
				while(*kraj_rijeci!='\0'){
					*pi=*kraj_rijeci;
					pi++;
					kraj_rijeci++;
				}
				*kraj_rijeci='\0';
			}
		}	
		p++;
	}
}