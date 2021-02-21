#include <stdio.h>
int jeWhite(char a);
void smanji (char *s);

void smanji(char *s){
	while(*s!='\0'){
		*s=*(s+1);
		s++;
	}
}

char* whitespace(char*s){
	char *ret=s;
	char *temp;
	
	while(*s!='\0'){
		if(jeWhite(*s)){
			*s=' ';
			temp=s;
			while(jeWhite(*(s+1))){
				*(s+1)=' ';
				smanji(s);
			}
			s=temp;
		}
		s++;
	}
	if(*(s-1)==' ')
		smanji(s-1);
	if(*ret==' ')
		smanji(ret);
	
	return ret;
}

int jeWhite(char a){
	if(a==' ' || a=='\n' || a=='\t')
		return 1;
	return 0;
}

int main() {
	
	return 0;
}
