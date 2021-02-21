#include <stdio.h>
char *izbaci_rijec(char*s, int n){
	int num=0;
	int space=1;
	char *temp;
	char*ret=s;
	if(n<1) return;
	
	while(*s!='\0'){
		if(*s<'A' || (*s>'Z' && *s<'a') || (*s>'z')){
			space=1;
		}
		else if(space){
			num++;
			space=0;
			if(num==n){
				while((*s>='A' && *s<='Z') || (*s>='a' && *s<='z')){
					temp=s;
					while(*s!='\0'){
						*s=*(s+1);
						s++;
					}
					s=temp;
				}
			}
		}
		s++;
	}
	return ret;
}

int main(){
	
	return 0;
}