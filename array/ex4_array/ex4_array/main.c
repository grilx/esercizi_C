//
//  main.c
//  ex4_array
//
//  Created by Andrea Grillo on 13/10/25.
//Scrivere un programma che costruisce un array A di 50 interi e un B di 5 interi e stampa 1 se esiste in A una sequenza di 5 elementi che sono esattamente gli elementi di B anche in un ordine differente.

#include <stdlib.h>
#include <stdio.h>

#define LEN1 50
#define LEN2 5

int main() {
    int
    A[LEN1]={
        1,1,1,1,1,1,1,1,1,1,
        1,1,1,1,1,1,1,1,1,1,
        1,1,1,1,1,1,1,1,1,1,
        1,1,1,2,5,1,4,3,1,1,
        1,1,1,1,1,1,1,1,1,1,
        },
    B[LEN2]={1,2,3,4,5},
    TEMP[LEN2];
    
    int i, k, j, esiste=0, cont=0, trovato, gia_trovato;
    
    //inizializzo il vettore TEMP in modo che i suoi valori iniziali non interferiscano con i valori di k
    for (i=0; i<LEN2; i++) {
        TEMP[i]=LEN2+1;
    }
    
    for (i=0; i<LEN1 && !esiste; i++) {
        trovato=0;
        for (k=0; k<LEN2 && !esiste && !trovato; k++) {
            
            //se trovo una corrispondenza
            if (A[i]==B[k]) {
                
                //inizialmente dò per scontato di non averla già trovata
                gia_trovato=0;
                
                //controllo di non aver già trovato quella corrispondenza
                for (j=0; j<LEN2; j++) {
                    if (k==TEMP[j]) {
                        
                        gia_trovato=1;
                    }
                }
                
                //se non ho già trovato quella corrispondenza
                if (!gia_trovato) {
                    TEMP[cont]=k;
                    //salvo la posizione k
                    cont++;
                    //e aumento il contatore
                    trovato=1;
                    //esco dal ciclo
                    
                    if (cont==LEN2) {
                        //se il contatore arriva alla lunghezza del secondo vettore
                        esiste=1;
                        //allora esiste
                    }
                }
            }
        }
        //se il cont non aumenta cont=0
        if (!trovato) {
            cont=0;
        }
    }
    printf("%d\n",esiste);
    
    return 0;
}
