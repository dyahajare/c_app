#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct  medecin{
     int immatricule;
     char NOM[20];
     char PRENOM[20];
     char MOTPASS1[20];
     char MOTPASS2[20];
};
typedef struct medecin MEDECIN;
struct   patient{
     int FICHE_PAT;
     char CIN[10];
     char NOM[20];
     char PRENOM[20];
     char MOTPASS1[20];
     char MOTPASS2[20];
     char SEXE[20];
};
typedef struct patient PATIENT;
struct  cabinet{
    char NOM[20];
    char ADRESSE[50];
    char Url[100];
    char SPECIALITY[50];
};
typedef struct cabinet CABINET;
struct  caisse{
    float impaye;
    float depense;
    float recette;
};
typedef struct caisse CAISSE;
struct employe{
    char NOM[20];
    char PRENOM[20];
    int age;
    char PROFESSION[20];
};
typedef struct employe EMPLOYE;
struct DATE{
    int jour ;
    int annee;
    char mois[20];
};
typedef struct DATE date;
struct rdv{
    date DATE;
    char NOM_cabinet[20];
    char SPECIALITY[50];
    char cas[20];
};
typedef struct rdv RDV;
struct ordonnance{
    int FICHE_PAT;
    char exam[20];
    char medicament[30];
    int nbr_dejours;
};
typedef struct ordonnance ORDONNANCE;