//
//  main.c
//  ex5_array
//
//  Created by Andrea Grillo on 13/10/25.
//Definiamo il grado minimo g e il grado massimo G di una parola P rispettivamente come il minimo e il massimo numero di occorrenze delle lettere di P in P. Ad esempio:
//POLENTA    g=1, G=1 ( tutte le lettere della parola compaiono in essa una e una sola volta )
//ORGOGLIO g=1, G=3 ( R, L, I compaiono una sola volta, O compare tre volte )
//MAMMA       g=2, G=3 ( A compare due volte, M compare tre volte )
//G e g valgono convenzionalmente 0 per la parola vuota (cioè per una parola priva di caratteri).
//Si scriva un programma C che legge una stringa di lunghezza generica che rappresenta P, calcola G e g, e li stampa

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define LEN 30

int main() {
    
    char parola[LEN];
    int i, k, G=0, g=LEN, temp, L;
    
    printf("inserire una parola: ");
    scanf("%s", parola);
    
    L=strlen(parola);
    
    for (i=0; i<L; i++) {
        temp=0;
        for (k=0; k<L; k++) {
            if (parola[i]==parola[k]) {
                temp++;
            }
        }
        if (G<temp) {
            G=temp;
        }
        if (g>temp) {
            g=temp;
        }
    }
    printf("G = %d\ng = %d\n", G, g);
    
    return 0;
}
