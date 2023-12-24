#include "struct.c"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int check(char a[20], char b[20]){
  return strcmp(a,b); }
void saisiemedecin( MEDECIN* a){
    printf(" l'immatricule \n");
     scanf("%d",&a->immatricule);
     printf("  Nom \n"); fflush(stdin);
     gets(a->NOM);
     printf("  Prenom \n");fflush(stdin);
     gets(a->PRENOM);
     
     do {
        printf("Mot de passe : ");fflush(stdin);
        gets(a->MOTPASS1);
        printf("Reécrire le mot de passe : ");fflush(stdin);
        gets(a->MOTPASS2);

        if (check(a->MOTPASS1, a->MOTPASS2) != 0) {
            printf("Les mots de passe sont différents. Réessayez.\n");
        }
    } while (check(a->MOTPASS1, a->MOTPASS2) != 0);
}
void saisiepatient( PATIENT* a){
     printf(" CIN \n");fflush(stdin);
     gets(a->CIN);
     printf(" Nom\n");fflush(stdin);
     gets(a->NOM);
     printf(" Prenom\n");fflush(stdin);
     gets(a->PRENOM);
     printf(" SEXE:homme/femme \n");
     gets(a->SEXE);
     printf(" DATE DE NAISSANCE / \n");
     scanf("%d%s%d",&a->DATENAISSANCE.jour,a->DATENAISSANCE.mois,&a->DATENAISSANCE.annee);
    
        do {
        printf("Le mot de passe : ");fflush(stdin);
        gets(a->MOTPASS1);
        printf("Reecrire le mot de passe : ");fflush(stdin);
        gets(a->MOTPASS2);

        if (check(a->MOTPASS1, a->MOTPASS2) != 0) {
            printf("Les mots de passe sont differents. Reessayez.\n");
        }
    } while (check(a->MOTPASS1, a->MOTPASS2) != 0);
}
     
void saisiecabinet(CABINET* a){
     printf("  NOM DU CABINET \n");fflush(stdin);
     gets(a->NOM);
     printf("  ADRESSE DU CABINET \n");
     gets(a->ADRESSE);
     printf("   URL a ajouter \n"); fflush(stdin);
     gets(a->Url);
     printf("   Specialite \n"); fflush(stdin);
     gets(a->SPECIALITY);
     printf(" VILLE \n"); 
     gets(a->ville);
    
}
void saisieemploye(EMPLOYE* a){
     printf(" NOM D'EMPLOYE \n");fflush(stdin);
     scanf("%s",a->NOM);
     printf(" PRENOM D'EMPLOYE \n");fflush(stdin);
     scanf("%s",a->PRENOM);
     printf("  PROFESSION  \n");fflush(stdin);
     scanf("%s",a->PROFESSION);
     printf(" AGE \n");fflush(stdin);
     scanf("%d",&a->age);
     }
void saisieordonnance(ORDONNANCE* a){
     
     printf("  EXAMENS ADDITIVES SI BESOIN \n");fflush(stdin);
     gets(a->exam);
}
void saisierdv(RDV* a){
    printf(" DATE=j/m/a \n");
    scanf("%d%s%d",&a->DATE.jour,a->DATE.mois,&a->DATE.annee);
    printf(" NOM DU CABINET OU MEDECIN \n");fflush(stdin);
    gets(a->NOM_cabinet);
    printf("  SPECIALITE \n");fflush(stdin);
    gets(a->SPECIALITY);
    printf("cas : CONSULTATION / CONTROLE / URGENTE en majscule \n"); fflush(stdin);
    gets(a->cas);
    
}
void saisieapt(CERTI_APT* a){
    printf(" CIN : ");fflush(stdin);
    gets(a->CIN);
    printf(" DATE : ");
    scanf("%d%s%d",&a->DATE.jour,a->DATE.mois,&a->DATE.annee);
    printf(" ETAT: ");fflush(stdin);
    gets(a->etat);   
    printf(" PROFESSION: ");fflush(stdin);
    gets(a->prof_pat);
}
void saisiemed(CERTI_MED* e){
    printf(" CIN : ");
    scanf("%s",e->CIN);
    printf(" NOMBRE DE JOURS : ");
    scanf("%d",&e->nbr_jour);
    printf(" LA CAUSE : ");
    scanf("%s",e->cause);
}
void saisiecaisse(CAISSE *a){
    printf(" DATE\n ");
    scanf("%d%s%d",&a->DATE.jour,a->DATE.mois,&a->DATE.annee);
    printf(" RECETTE \n");
    scanf("%f",&a->recette);
    printf(" DEPENSES \n");
    scanf("%f",&a->depense);
    printf(" IMPAYE \n");
    scanf("%f",&a->impaye);
}
 