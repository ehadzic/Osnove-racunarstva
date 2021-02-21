#include <stdio.h>

int fun (int niz[], int vel){
    int suma = 0;
    
    int i;
    for(i=0; i<vel; i++){
            suma = suma + niz[i];
            
    }
    
    if(vel > 0) return suma+vel;
    return 0;
}

int main(){
    int niz[5], rez;
    for(int i = 0; i < 5; i++){
        niz[i] = i;
    }
    rez = fun(niz, 5);
    
  
    return 0;
}
