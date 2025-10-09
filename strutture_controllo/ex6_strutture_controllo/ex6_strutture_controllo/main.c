//
//  main.c
//  ex6
//
//  Created by Andrea Grillo on 04/10/25.
//Scrivere un programma (senza usare array) che richiede l'inserimento di voti ottenuti in un certo numero di corsi. Il programma chiede qual è il numero di voti da inserire. Per ciascuno, l'utente deve inserire numero di crediti e voto ottenuto (in 30imi). Il programma infine stampa la media pesata dei corsi e il numero totale dei crediti. Si ricorda che la media pesata, ad esempio su due voti, si calcola come:
// media = (voto1*crediti1+voto2*crediti2)/(crediti1+crediti2).

#include <stdlib.h>
#include <stdio.h>

int main() {
    int n_voti, crediti, voto, err, i, somma_p=0, crediti_tot=0;
    float media;
    do {
        err=0;
        printf("inserire il numero di voti\n");
        scanf(" %d",&n_voti);
        if (n_voti<0){
            printf("errore: il numero di voti inserito non è un intero positivo\n");
            err=1;
        }
    } while (err==1);
    
    for (i=1; i<=n_voti; i++) {
        do {
            err=0;
            printf("inserire in ordine il voto numero %d e i relativi crediti\n", i);
            scanf("%d %d",&voto,&crediti);
            if (crediti<0||voto<0||voto>30){
                printf("errore: il voto o il numero di crediti inseriti non sono valori accettabili\n");
                err=1;
            }
        } while (err==1);
        
        somma_p=somma_p+voto*crediti;
        crediti_tot=crediti_tot+crediti;
        
    }
    
    media= (float)somma_p/crediti_tot;
    
    printf("media = %f\n", media);
    return 0;
}
