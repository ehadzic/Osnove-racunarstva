#include <stdio.h>
void smanji(char *s){
	while(*s!='\0'){
		*s=*(s+1);
		s++;
	}
}
char*ukloni_komentare(char *s){
	char *ret=s;
	while(*s!='\0'){
		if(*s=='/' && *(s+1)== '/'){
			while(*s=='/' && *(s+1)== '/'){
				smanji(s);
			}
			s--;
		}
		if(*(s+1)=='\0')
			break;
		if(*s=='/'){
			if(*(s+1)=='*'){
				while(!(*s=='*' && *(s+1)=='/')){
					smanji(s);
				}
				smanji(s);
				smanji(s);
				s--;
			}
		}
		s++;
	}
	return ret;
}

int main() {
	
	return 0;
}
