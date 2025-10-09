//
//  main.c
//  ex2
//
//  Scrivere un programma per il calcolo delle tabelline. Il programma riceve dall’utente due numeri. Il primo corrisponde al numero di cui è necessario calcolare la tabellina mentre il secondo indica la lunghezza della tabellina richiesta.
//  Es: 2, 10 produce come risultato: 2 4 6 8 10 12 14 16 18 20
//  Es: 3, 8 produce come risultato: 3 6 9 12 15 18 21 24
//  Accettare solamente numeri positivi: se l’utente inserisce un numero negativo mostrare un messaggio di errore e richiedere un altro numero.


#include <stdlib.h>
#include <stdio.h>

int main() {
    
    int n, lung, err, i;
   
    do {
        err=0;
        
        printf("inserire numero di cui calcolare la tabellina\n");
        scanf("%d",&n);
        printf("inserire lunghezza della tabellina da calcolare\n");
        scanf(" %d",&lung);
        
        if (n<0 || lung<0) {
            printf("errore: inserire solo interi positivi\n");
            err=1;
        }
    } while (err);
    
    for (i=1; i<=lung; i++) {
        
        printf(" %d ", n*i );
        
    }
    

    return 0;
}
