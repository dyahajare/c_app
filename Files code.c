#include <stdio.h>
#include <stdlib.h>
#include "struct.c"
#define nbr_elements 150

typedef PATIENT a;
typedef MEDECIN b;

void afficherPatient(PATIENT patient){
    printf("NUM FICHE\tCIN\tNOM\tPRENOM");
    printf("\n");
    printf("%d\t%s\t%s\t%s\n",patient.FICHE_PAT, patient.CIN, patient.NOM, patient.PRENOM);
}

void saisieMenu(){
    int c = 0;
    PATIENT b;
    MEDECIN d;
    scanf("%d", &c);
    switch (c)
        case 1: 
            b = saisie();
            break;
        case 2:
            d = saisie();
            break;
        default: saisieMenu();
}


int main() {
   

    return 0;
}
