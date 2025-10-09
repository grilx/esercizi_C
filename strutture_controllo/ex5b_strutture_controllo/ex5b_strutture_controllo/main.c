//
//  main.c
//  ex5a
//
//  Created by Andrea Grillo on 04/10/25.

/*
Si realizzi un programma che legga da tastiera un valore intero N, compreso tra 1 e 10, e stampi a video un “quadrato di asterischi” di lato N.

Esempio con N=5

*****
*****
*****
*****
*****

Si realizzi una variante del programma per visualizzare solo i lati del quadrato */

#include <stdlib.h>
#include <stdio.h>

int main() {
    int N,i,k,err;
    
    do {
        err=0;
        printf("inserire lunghezza lato del quadrato\n");
        scanf(" %d",&N);
        if (N<0){
            printf("errore: l'indice inserito non è un intero positivo\n");
            err=1;
        }
    } while (err==1);
    
    for (i=1; i<=N; i++) {
        if (i==1||i==N) {
            for (k=1; k<=N; k++) {
                printf("*");
            }
        }else{
            for (k=1; k<=N; k++) {
                if (k==1||k==N) {
                    printf("*");
                }else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
