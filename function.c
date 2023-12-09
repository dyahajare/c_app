#include "struct.c"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int check(char a[20], char b[20]){
  return strcmp(a,b); }
MEDECIN saisie(){
     MEDECIN a;
     printf(" l'immatricule \n");
     scanf("%d",&a.immatricule);
     printf("  Nom \n");
     scanf("%s",a.NOM);
     printf("  Prenom \n");
     scanf("%s",a.PRENOM);
    
     do {
        printf("Mot de passe : ");
        scanf("%s", a.MOTPASS1);
        printf("Reécrire le mot de passe : ");
        scanf("%s", a.MOTPASS2);

        if (check(a.MOTPASS1, a.MOTPASS2) != 0) {
            printf("Les mots de passe sont différents. Réessayez.\n");
        }
    } while (check(a.MOTPASS1, a.MOTPASS2) != 0);
}
PATIENT saisi(){
     PATIENT a;
     printf(" CIN \n");
     scanf("%s",a.CIN);
     printf(" Nom\n");
     scanf("%s",a.NOM);
     printf(" Prenom\n");
     scanf("%s",a.PRENOM);
        do {
        printf("Le mot de passe : ");
        scanf("%s", a.MOTPASS1);
        printf("Reecrire le mot de passe : ");
        scanf("%s", a.MOTPASS2);

        if (check(a.MOTPASS1, a.MOTPASS2) != 0) {
            printf("Les mots de passe sont differents. Repessayez.\n");
        }
    } while (check(a.MOTPASS1, a.MOTPASS2) != 0);
}
     
CABINET sais(){
     CABINET a;
     printf("  NOM DU CABINET \n");
     scanf("%s",a.NOM);
     printf("  ADRESSE DU CABINET \n");
     scanf("%s",a.ADRESSE);
     printf("   URL à ajouter \n");
     scanf("%s",a.Url);
     printf("   Spécialité \n");
     scanf("%s",a.SPECIALITY);
}

 
int main(){
     PATIENT A;
     CABINET n;
     A=saisi();
     
     return 0;
}