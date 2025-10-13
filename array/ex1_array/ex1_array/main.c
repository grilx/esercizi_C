//
//  main.c
//  ex1_array
//
//  Created by Andrea Grillo on 06/10/25.
//Scrivere un programma che riceva in ingresso dall'utente un vettore di 5 caratteri tutti minuscoli. Il programma dica all'utente se le lettere contenute nel vettore sono in ordine alfabetico.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define LEN 5

int main() {
    char strl[LEN],temp;
    int err,i, flag=0;
    
    printf("inserire 5 caratteri minuscoli\n");
    
    for (i=0; i<LEN; i++) {
        
        do {
            err=0;
            scanf(" %c", &strl[i]);
            
            if (strl[i]<'a' || strl[i]>'z') {
                
                printf("errore: il carattere inserito non è una lettera minuscola\n");
                
                err=1;
            }
            
        }while (err);
        
    }
            
    temp=strl[0];
    
    for (i=0; i<LEN && !flag; i++) {
        
        if (strl[i]<temp) {
            
            flag=1;
            
        }
        
        temp=strl[i];
        
    }
    
    if (flag) {
        printf("i caratteri inseriti NON sono in ordine alfabetico\n");
    }else{
        printf("i caratteri inseriti sono in ordine alfabetico\n");
    }
    
    return 0;
}
