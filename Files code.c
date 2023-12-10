#include <stdio.h>
#include <stdlib.h>
#include "struct.c"

typedef PATIENT a;
typedef MEDECIN b;

void afficherPatient(PATIENT* patient){
    int i = 0;
    printf("NUM\t\tCIN\t\tNOM\t\tPRENOM");
    printf("\n");
    while(*(patient+i)!=NULL){
        printf("%d\t\t%s\t\t%s\t\t%s\n", *(patient+i).FICHE_PAT, *(patient+i).CIN, *(patient+i).NOM, *(patient+i).PRENOM);
        i++ ;
        }
}

/*void saisieMenu(){
    int c = 0;
    PATIENT b;
    MEDECIN d;
    scanf("%d", &c);
    switch (c)
        case 1: b = saisie(); break;
        case 2: d = saisi(); break;
        default: saisieMenu();
}*/


int main() {
    PATIENT *P = (PATIENT*)malloc(50*sizeof(PATIENT));
    P[0] = {1,"a54","zakaria","nouisser","kqjh"};
    P[1] = {2,"a55","hajar","dya","kjsdht"};
    afficherPatient(P);
    return 0;
}
