//
//  main.c
//  ex 4
//
//  Created by Andrea Grillo on 01/10/25.

//Scrivere un programma che acquisisca una sequenza di 10 numeri interi ed un
//indice X tra 0 e 9. Il programma dovrà stampare la somma dei numeri in posizioni
//minori di X e il prodotto dei numeri in posizioni successive a X.


#include <stdlib.h>
#include <stdio.h>

int main() {
    int x, n, sum=0, prod=1,i,err;
    
    do {
        err=0;
        printf("inserire indice\n");
        scanf(" %d",&x);
        if (x<0||x>9){
            printf("errore: l'indice inserito non è compreso fra 0 e 9\n");
            err=1;
        }
    } while (err==1);
    
    printf("inserire 10 numeri interi\n");
    
    for (i=0; i<x; i++ ) {
        scanf(" %d",&n);
        sum=sum+n;
    }
    for (; i<10; i++ ) {
        scanf(" %d",&n);
        prod=prod*n;
    }
    printf("la somma dei primi %d numeri inseriti è %d \nmentre il prodotto dei restanti numeri inseriti è %d \n", x, sum, prod);
    return 0;
}
