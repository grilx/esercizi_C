//
//  main.c
//  ex3_array
//
//  Created by Andrea Grillo on 06/10/25.
//Scrivere un programma che chiede due sequenze di caratteri all’utente, e conta quante volte nella prima stringa è contenuta interamente la seconda.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define LEN 30

int main() {
    
    char s1[LEN], s2[LEN];
    int l1, l2, i, k=0, err, cont=0;
    

    
    do {
        
        err=0;
        
        printf("inserire prima parola: ");
        
        scanf(" %s", s1);
        
        printf("inserire seconda parola: ");
        
        scanf(" %s", s2);
        
        l1=strlen(s1);
        l2=strlen(s2);
        
        if (l1>l2) {
            err=1;
            printf("errore: la prima parola è più lunga della seconda\n");
        }
            
    } while (err);
    
    for (i=0; i<l2; i++) {
        if (s2[i]==s1[k]) {
            k++;
            if (k==l1) {
                cont++;
                k=0;
            }
        }else{
            k=0;
        }
    }
    
    printf("la prima frase è contenuta interamente nella seconda %d volte\n", cont);

    return 0;
}
