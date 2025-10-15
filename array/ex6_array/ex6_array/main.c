//
//  main.c
//  ex6_array
//
//  Created by Andrea Grillo on 15/10/25.
//Due parole p e q si definiscono Hertzianamente compatibili se entrambe sono leggibili anche “oscillando” e leggendo alternativamente i caratteri dell’una e dell’altra. La figura mostra tigre con fiera e fiera con fresa. In figura parole uguali sono tracciate da linee di ugual stile.
//Si noti anche che la relazione sussiste in due modi (diretto o inverso). In figura: fiera e tigre si leggono iniziando dalla stessa lettera (modo diretto), per fiera e fresa occorre iniziare dall’iniziale dell’ “altra” parola nella coppia (modo inverso). Se la relazione fosse definita solo in modo diretto o solo in modo inverso varrebbe anche la proprietà transitiva (esempio: aria, prua, erba, orma sono tutte direttamente compatibili tra loro), ma consideriamo due parole compatibili indipendentemente dal modo in cui la proprietà si manifesta.
//Si scriva un programma che verifica la compatibilità Hertziana di due stringhe.



#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define LEN 30

int main() {
    
    char s1[LEN], s2[LEN];
    int i, comp_dir=1, comp_inv=1, l1, l2;
    
    printf("inserire prima parola: ");
    scanf("%s", s1);
    printf("inserire seconda parola: ");
    scanf("%s", s2);
    
    l1=strlen(s1);
    l2=strlen(s2);
    
    if(l1!=l2){
        printf("le 2 parole NON sono hertzianamente compatibili\n");
    }else{
        for (i=0; i<l1-1; i=i+2) {
            if (s1[i]!=s2[i]) {
                comp_dir=0;
            }
            if (s1[i+1]!=s2[i+1]) {
                comp_inv=0;
            }
            if (!comp_dir && !comp_inv) {
                printf("le 2 parole NON sono hertzianamente compatibili\n");
                break;
            }
        }
        if (comp_dir || comp_inv) {
            printf("le 2 parole sono hertzianamente compatibili\n");

        }
    }
    
   
     
    return 0;
}
