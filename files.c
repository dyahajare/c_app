#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "saisie.c"

void fichepatient(PATIENT a){
    FILE* f; 
    f=fopen("C:\\Users\\hajar\\myapp\\patient.txt","at");
    if (f == NULL) {
        fprintf(stderr, "Impossible d'ouvrir le fichier.\n");
    }
    else{
    fprintf(f, "%-20s%-20s%-15s%-10s\n", a.NOM, a.PRENOM, a.CIN, a.SEXE);
    fclose(f);
}}
void ficheordonnance(ORDONNANCE a ,PATIENT c ){
     char path[100]; int n;
     sprintf(path,"%s/%s","C:\\Users\\hajar\\myapp\\ordonnance",c.CIN);
     printf("%s",path);
    FILE *f;
    f=fopen(path,"at");
    if (f == NULL){
        printf("file error");
        exit(0);
    }
    saisieordonnance(&a);
    fprintf(f,"%-20s%-20s%-50s%-50s\n","NOM","EXAM","MEDIAMENTS","PRESCRIPTION");
    fprintf(f,"%-20s%-20s",c.NOM,a.exam);
         printf("NOMBRE DE MEDICAMENTS");
     scanf("%d",&n);
     for(int i=0;i<n;i++){
     printf("  LES MEDICAMENTS \n");fflush(stdin);
     gets(a.medicament);
     printf("  PRESCRIPTION \n");fflush(stdin);
     gets(a.prescription);
     if(i==0){
    fprintf(f,"%-50s%-50s\n",a.medicament,a.prescription);}
    else{
    fprintf(f,"\t\t\t\t\t%-50s%-50s\n",a.medicament,a.prescription);
    }
}   
  fprintf(f,"\n");
    
}
void certificat_medicale(PATIENT p , MEDECIN o){
    char path[100];  int nbr_jour;
    saisiepatient(&p);
     sprintf(path,"%s/%s","C:\\Users\\hajar\\myapp\\certificats_med",p.CIN);
     printf("%s",path);
    FILE *f;
    f=fopen(path,"at");
    if (f == NULL){
        printf("file error");
        exit(0);
    }
    printf("veuillez entrer le nombre de jour \n"); scanf("%d",&nbr_jour);
    fprintf(f,"\t\t\t\t\t\tCERTIFICAT MEDICALE\n");
    fprintf(f,"\n");
    fprintf(f,"Je soussigne ,%s  %s\n. Docteur en Medecine , certifie avoir examine Mr/Mme %s  %s Nee le %d/ %s /%d , il/elle était abscent(e) car il/elle etait malade et il/elle est besoin d'un break  de %d jours\n merci \n\n SIGNATURE",o.NOM,o.PRENOM,p.NOM,p.PRENOM,p.DATENAISSANCE.jour,p.DATENAISSANCE.mois,p.DATENAISSANCE.annee,nbr_jour);

}
void certificat_aptitude(PATIENT p , MEDECIN o){

    char path[100];  char profession[50],etablissement[50];
    saisiepatient(&p);
     sprintf(path,"%s/%s","C:\\Users\\hajar\\myapp\\certificats_apt",p.CIN);
     printf("%s",path);
    FILE *f;
    f=fopen(path,"at");
    if (f == NULL){
        printf("file error");
        exit(0);
    }
    printf("Veuillez entrer la profession "); gets(profession);
    printf(" Veuillez entrer le nom d'etablissement"); gets(etablissement);
    fprintf(f,"\t\t\t\t\t\tCERTIFICAT D'APTITUDE\n");
    fprintf(f,"\n");
    fprintf(f,"Je soussigne ,%s  %s\n. Docteur en Medecine , certifie avoir examine Mr/Mme %s  %s Nee le %d/ %s /%d , il/elle est apte physiquement pour entrer %s et executer ce domaine de %s\n merci \n\n SIGNATURE",o.NOM,o.PRENOM,p.NOM,p.PRENOM,p.DATENAISSANCE.jour,p.DATENAISSANCE.mois,p.DATENAISSANCE.annee,etablissement,profession);


}
void ajoutMedecin(MEDECIN a){
    FILE* f;
    CABINET B;
    saisiecabinet(&B);
    f=fopen("C:\\Users\\hajar\\myapp\\medecins.txt","at+");
    if (f == NULL) {
        printf("Impossible d'ouvrir le fichier.\n");
        exit(1);
    }
    else{
    fseek(f,0,SEEK_END);
    fprintf(f,"%s\t\t%s\t\t%s\t\t%s\t\t\t\t\t%s\n", a.NOM ,a.PRENOM,B.SPECIALITY,B.ADRESSE,B.ville);
    }
    fclose(f);
}
void modifierMedecin(MEDECIN c,CABINET e) {
    FILE *f = fopen("C:\\Users\\hajar\\myapp\\medecins.txt", "rt+");
    if (f == NULL) {
        printf("Impossible d'ouvrir le fichier.\n");
        exit(1);
    } int ok;
    printf("VEUILLEZ ME LANCER QUELLE INFORMATION VOUS VOULEZ CHANGER \n NOM:1 \n PRENOM:2 \n ADRESSE:3 \n VILLE:4  ");scanf("%d",&ok);
    MEDECIN S; char NEWNAME[50]; char NEWPRENOM[50]; char NEWADRESSE[110]; char NEWCITY[20]; char TEMP[110];
     while (( fscanf(f,"%s",S.NOM) != EOF)) {
        if (strcmp(S.NOM,c.NOM)==0) {
        if( ok==1){
        scanf("%s",NEWNAME); 
        strcpy(TEMP, c.NOM);
        strcpy(c.NOM, NEWNAME);
        strcpy(NEWNAME, TEMP);
        }  else if(ok==2){
        gets(NEWPRENOM);
        strcpy(TEMP,c.PRENOM);
        strcpy(c.PRENOM,NEWPRENOM);
        strcpy(NEWPRENOM,TEMP);
        }   else if(ok==3){
        gets(e.ADRESSE);
        strcpy(TEMP, e.ADRESSE);
        strcpy(e.ADRESSE,NEWADRESSE);
        strcpy(NEWADRESSE,TEMP);
        }   else if(ok==4){
        gets(e.ville);
        strcpy(TEMP,e.ville);
        strcpy(e.ville,NEWCITY);
        strcpy(NEWCITY,TEMP);
        }}
           
    }
    fclose(f);
}
 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

 

void supprPatient(PATIENT b) {
    FILE *f, *tmp;
    f = fopen("C:\\Users\\hajar\\myapp\\patient.txt", "rt");
    if (f == NULL) {
        printf("Impossible d'ouvrir le fichier.\n");
        exit(1);
    }

    tmp = fopen("temp.txt", "wt");
    if (tmp == NULL) {
        printf("Impossible d'ouvrir le fichier temporaire.\n");
        exit(1);
    }

    PATIENT t;
    while (fscanf(f, "%-20s%-20s%-15s%-10s\n", t.NOM, t.PRENOM, t.CIN, t.SEXE) != EOF) {
        if (strcmp(t.NOM, b.NOM) != 0) {
            fprintf(tmp, "%-20s%-20s%-15s%-10s\n", t.NOM, t.PRENOM, t.CIN, t.SEXE);
        }
    }

    fclose(f);
    fclose(tmp);

    remove("C:\\Users\\hajar\\myapp\\patient.txt");
    if (rename("temp.txt", "C:\\Users\\hajar\\myapp\\patient.txt") != 0) {
        printf("Erreur lors du renommage du fichier temporaire.\n");
        exit(1);
    }

    printf("Patient avec CIN %s supprime avec succes.\n", b.CIN);
}

void ajoutPatient(PATIENT a){
    FILE* f; 
    f=fopen("C:\\Users\\hajar\\myapp\\patient.txt","at+");
    if (f == NULL) {
        printf("Impossible d'ouvrir le fichier.\n");
        exit(1);
    }
    else{
    fseek(f,0,SEEK_END);
    fprintf(f,"\n");
    saisiepatient(&a);
    fprintf(f, "%-20s%-20s%-15s%-10s", a.NOM, a.PRENOM, a.CIN, a.SEXE);
    }
    fclose(f);
}
 int main(){
PATIENT a ;
ajoutPatient(a);
supprPatient(a);   return 0;
 }