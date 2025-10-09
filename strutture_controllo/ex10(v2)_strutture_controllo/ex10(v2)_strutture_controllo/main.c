/*Scrivere un programma che chiede all'utente un numero compreso da 1 a 9 e stampa un quadrato come mostrato di seguito.

Se l'utente inserisce 4:

4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4

Se inserisce 2

2 2 2
2 1 2
2 2 2

Se inserisce 7

7 7 7 7 7 7 7 7 7 7 7 7 7
7 6 6 6 6 6 6 6 6 6 6 6 7
7 6 5 5 5 5 5 5 5 5 5 6 7
7 6 5 4 4 4 4 4 4 4 5 6 7
7 6 5 4 3 3 3 3 3 4 5 6 7
7 6 5 4 3 2 2 2 3 4 5 6 7
7 6 5 4 3 2 1 2 3 4 5 6 7
7 6 5 4 3 2 2 2 3 4 5 6 7
7 6 5 4 3 3 3 3 3 4 5 6 7
7 6 5 4 4 4 4 4 4 4 5 6 7
7 6 5 5 5 5 5 5 5 5 5 6 7
7 6 6 6 6 6 6 6 6 6 6 6 7
7 7 7 7 7 7 7 7 7 7 7 7 7 */


#include <stdlib.h>
#include <stdio.h>

int main() {
    int err, n, i, k, lung, dist_min, top, bottom, left, right;
    
    //controllo che il numero inserito sia compreso fra 1 e 9
    
    do {
        err=0;
        printf("inserire un numero compreso fra 1 e 9\n");
        scanf("%d",&n);
        if (n<1||n>9){
            printf("errore: il numero inserito non è compreso fra 1 e 9\n");
            err=1;
        }
    } while (err);
    
    //trovo la lunghezza del quadrato di cui dovrò costruire il lato
    
    lung=n*2-1;
    
    //per ogni posizione trovo verso che direzione ho la distanza minima dal bordo
    
    for (i=1; i<=lung; i++) {
        for (k=1; k<=lung; k++){
            
            //per ogni posizione trovo la distanza dal bordo verso ogni direzione
            
            top=i;
            bottom=lung-i+1;
            left=k;
            right=lung-k+1;
            
            //ricerco verso quale direzione ho la distanza minima
            
            dist_min=top;
            
            if(bottom<dist_min)
                dist_min=bottom;
            if(left<dist_min)
                dist_min=left;
            if(right<dist_min)
                dist_min=right;
            
            //dato che più mi avvicino ad un bordo qaulsiasi del quadrato più il numero da stampare è vicino al numero inserito, allora posso stampare il numero basandomi sulla distanza della posizione in cui mi trovo dal bordo più vicino
            
            printf("%d ", n-dist_min+1);
        }
        
        printf("\n");
    }
    
      return 0;
}
