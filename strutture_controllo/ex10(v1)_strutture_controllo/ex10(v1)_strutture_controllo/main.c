//
//  main.c
//  ex10
//
//  Created by Andrea Grillo on 04/10/25.
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
    int err, n, i, k, z, lung;
    
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
    
    lung=n*2-1;
    
    for (i = 0; i < lung; i++) {
        
        for (k = 0; k < lung; k++) {
            
            if (i < n) {
                
                if (k > i - 1 && k < lung - i) {
                    
                    printf("%d ", n - i);
                    
                } else if (k <= lung / 2) {
                    
                    printf("%d ", n - k);
                    
                } else {
                    
                    printf("%d ", k - n + 2);
                    
                }
                
            } else {
                
                if (k > lung - 1 - i && k < i + 1) {
                    
                    printf("%d ", n - (lung - 1 - i));
                    
                } else if (k <= lung / 2) {
                    
                    printf("%d ", n - k);
                    
                } else {
                    
                    printf("%d ", k - n + 2);
                    
                }
                
            }
        }
        
        printf("\n");
    }
        
    return 0;
}
