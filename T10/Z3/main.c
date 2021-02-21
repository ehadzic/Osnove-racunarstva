#include <stdio.h>
char *rot13(char*sifruj){
	char*ret=sifruj;
	char*s=sifruj;
	int a;
	while(*s!='\0'){
		if(*s!=' ' && ((*s>='a' && *s<='z') || *s>='A' && *s<='Z')){
			a=*s+13;
			if(a>'z'){
				a='a'+a-'z'-1;
			}
			else if(a>'Z' && a<'a'){
				a='A'+a-'Z'-1;
			}
			*s=a;
		}
		s++;
	}
	return ret;
}
int main(){
	char niz[]="a";
	printf("%s",rot13(niz));
	return 0;
}