//
//  main.c
//  ex7
//
//  Created by Andrea Grillo on 04/10/25.
//Scrivere un programma che chiede due numeri all’utente e ne stampa a video tutti i divisori comuni.

#include <stdlib.h>
#include <stdio.h>

int main() {
    int n1,n2,i,temp,err;
    
    do {
        err=0;
        printf("inserire 2 interi positivi\n");
        scanf("%d %d",&n1,&n2);
        if (n1<0||n2<0) {
            printf("errore: i numeri inseriti non erano entrambi interi positivi\n");
            err=1;
        }
    } while (err==1);
    
    if (n2>n1){ //faccio in modo che n1 sia il numero minore
        temp=n1;
        n1=n2;
        n2=temp;
    }
    
    for (i=1; i<=n1; i++) { //essendo che n1<n2 mi basta controllare fino ad n1
        if (n1%i==0 && n2%i==0) {
            printf("%d ", i);
        }
    }
    return 0;
}
