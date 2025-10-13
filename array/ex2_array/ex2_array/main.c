//
//  main.c
//  ex2_array
//
//  Created by Andrea Grillo on 06/10/25.
//Scrivere un programma che acquisisca una sequenza di 10 numeri interi ed un indice X tra 0 e 9. Il programma dovrà stampare la somma dei numeri in posizioni minori di X e il prodotto dei numeri in posizioni successive a X.

#include <stdlib.h>
#include <stdio.h>

int main() {
    int n[10], i, err, ind, sum=0, prod=1;
    
    printf("inserire 10 numeri interi\n");
    
    for (i=0; i<10; i++) {
    
        scanf(" %d",&n[i]);
   
    }
    
    do {
        err=0;
        printf("inserire indice fra 0 e 9\n");
        scanf("%d", &ind);
        if (ind<0 || ind>9) {
            err=1;
            printf("errore: l'indice inserito non è compreso fra 0 e 9\n");
        
        }
    } while (err);
    
    for (i=0; i<ind; i++) {
    
        sum=sum+n[i];
   
    }
    for (; i<10; i++) {
    
        prod=prod*n[i];
   
    }
    
    printf("la somma dei primi %d numeri è %d, il prodotto dei restanti è %d \n", ind, sum, prod);
    
    return 0;
}
