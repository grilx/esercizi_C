//
//  main.c
//  ex1
//
//  Created by Andrea Grillo on 01/10/25.

/*
Scrivere un programma in linguaggio C che, letti due caratteri minuscoli dallo standard input, stabilisce quale dei due
viene prima e quale dopo in ordine alfabetico e stampi l’intera porzione di alfabeto tra i due.
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
    
    char c1,c2,temp,i;
    int err;

    do{
        
        err=0; //non si è ancora verificato errore
        
        printf("inserire 2 caratteri minuscoli\n");
        scanf(" %c %c",&c1 , &c2);
        
        if(c1<'a'||c1>'z'||c2<'a'||c2>'z'){ //controllo che tutti i caratteri siano minuscoli
            
            printf("errore:insemrire solo caratteri minuscoli\n");
            
            err=1; //si verifica errore
            
        }
        
    }while(err); //continua ciclo finchè c'è errore

    if(c1>c2){ //se necessario inverto c1 e c2
        temp=c1;
        c1=c2;
        c2=temp;
    }
    
    for(i=c1;i<=c2;i++){ //stampo tutti i caratteri fra il primo e il secondo inserito
    
        printf("%c",i);
    
    }
    
    return 0;
}
