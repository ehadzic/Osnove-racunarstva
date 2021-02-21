#include <stdio.h>
void unesi(char niz[], int velicina);

void unesi(char niz[], int velicina){
    char znak=getchar();
    if(znak=='\n') znak=getchar();
    int i=0;
    while(i<velicina-1 && znak!='\n'){
        niz[i]=znak;
        i++;
        znak=getchar();
    }
    niz[i]='\0';
}

char* zamijeni_broj(char*s, int cifra){
    int duzina=-1;
    char *pok=s;
    char broj;
    char** rijec;
    char** start;
    char* ret;
    int i;
    broj='0'+cifra;
    char *niz[]={"nula","jedan","dva","tri","cetiri","pet","sest","sedam","osam", "devet"};
    rijec=niz+cifra;
    start=niz+cifra;
    ret=*rijec;
    while(**rijec!='\0'){
        duzina++;
        (*rijec)++;
    }
    *rijec=ret;
    
    while(*s!='\0'){
        if(*s==broj){
            char*kraj=s;
            while(*kraj!='\0') kraj++;
            while(kraj>s){
                *(kraj+duzina)=*kraj;
                kraj--;
            }
            for(i=0;i<duzina+1;i++){
                *s++=*((*start)++);
            }
            s--;
            *start=ret;
        }
        s++;
    }
    return pok;
}
int main(){
    char tekst[100];
    printf("Unesite tekst: ");
    unesi(tekst,100);
    zamijeni_broj(tekst,3);
    printf("Nakon zamjene: %s",tekst);
    return 0;
}