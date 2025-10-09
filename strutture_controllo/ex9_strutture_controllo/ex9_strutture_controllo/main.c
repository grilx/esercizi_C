//
//  main.c
//  ex9
//
//  Created by Andrea Grillo on 04/10/25.
/*Scrivere un programma che generi un numero intero casuale e chieda all’utente di indovinarlo. Ad ogni tentativo fallito da parte dell’utente di indovinare il numero il programma indica se il numero da indovinare è maggiore o minore rispetto a quello appena inserito.
Per generare un numero casuale è necessario chiamare una volta la funzione srand(time(0)) per inizializzare il generatore di numeri casuali ed in seguito, per ogni numero casuale, la funzione rand() come di seguito.
Es. r = rand()
N.B. Si noti che la funzione rand() restituisce un numero casuale tra zero e la costante  RAND_MAX (costante molto grande). Si può usare il solito operatore % per limitare questo range (L’uso della funzione time(..) necessita della libreria time.h. Le funzioni srand(..) e rand(..) sono invece parte di stdlib.h). */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    int n_esatto, n, indovinato=0;
    
    srand(time(0));
    n_esatto = rand() % 101; //generazione numero casuale
    
    while (!indovinato) {
        printf("inserire numero\n");
        scanf("%d", &n);
        
        //controllo se il numero inserito è esatto, minore o maggiore
        
        if (n==n_esatto) {
            indovinato=1;
        }else if (n<n_esatto){
            printf("il numero da indovinare è maggiore di %d\n", n);
        }else{
            printf("il numero da indovinare è minore di %d\n", n);
        }
    }
    
    printf("esatto! il numero da indovinare era %d\n",n_esatto);
    
    return 0;
}
