//
//  main.c
//  ex3
//
//  Created by Andrea Grillo on 01/10/25.
//  Scrivere un programma che stampi la tavola pitagorica 10x10.


#include <stdlib.h>
#include <stdio.h>

int main() {
    int i,k;
    for (i=1; i<=10; i++) {

        for (k=1; k<=10; k++) {
            printf(" %d", i*k);
        }
        printf("\n");
    }
    
    return 0;
}
