#include<stdio.h>
#include<stdlib.h>
#include"saisie.c"
#include<string.h>

void menu1med() {
    system("echo \033[1;35;47m BONJOUR MEDECIN \033[0m");
    printf("\n\n");
    system("echo \033[1;36;41m\t\t\t\t\tPATIENTS:1\033[0m\n\n");  printf("\n"); printf("\n");
    system("echo \033[1;36;41m\t\t\t\t\tEMPLOYES:2\033[0m\n\n");  printf("\n"); printf("\n");
    system("echo \033[1;36;41m\t\t\t\t\tCAISSE:3\033[0m\n\n");   
}
void menupatient(){
    system("echo \033[1;35;47m PATIENT \033[0m");
printf("\n\n");
    system("echo \033[1;36;41m\t\t\t\t\tAJOUTER:1\033[0m\n\n");  printf("\n"); printf("\n");
    system("echo \033[1;36;41m\t\t\t\t\tMODIFIER:2\033[0m\n\n");  printf("\n"); printf("\n");
    system("echo \033[1;36;41m\t\t\t\t\tSUPPRIMER:3\033[0m\n\n"); printf("\n"); printf("\n");
    system("echo \033[1;36;41m\t\t\t\t\tDONNER UNE ORDONNANCE:4\033[0m\n\n");  printf("\n"); printf("\n");   
    system("echo \033[1;36;41m\t\t\t\t\tDONNER UNE CERTIFICAT:5\033[0m\n\n");  printf("\n"); printf("\n");
}
void menuemploye(){
 system("echo \033[1;35;47m EMPLOYE \033[0m");
printf("\n\n");
    system("echo \033[1;36;41m\t\t\t\t\tAJOUTER:1\033[0m\n\n");  printf("\n"); printf("\n");
    system("echo \033[1;36;41m\t\t\t\t\tMODIFIER:2\033[0m\n\n");  printf("\n"); printf("\n");
    system("echo \033[1;36;41\t\t\t\t\tSUPPRIMER:3\033[0m\n\n"); printf("\n"); printf("\n");
}
void menucaisse(){
system("echo \033[1;35;47m CAISSE \033[0m");
printf("\n\n");
    system("echo \033[1;36;41m\t\t\t\t\tIMPAYES:1\033[0m\n\n");  printf("\n\n"); 
    system("echo \033[1;36;41m\t\t\t\t\tDEPENSES:2\033[0m\n\n");  printf("\n\n");
    system("echo \033[1;36;41m\t\t\t\t\tRECETTES:3\033[0m\n\n"); printf("\n"); printf("\n");
}
void menuenpatient(){
     system("echo \033[1;35;47m  BONJOUR CHER PATIENT \033[0m");
printf("\n\n");
    system("echo \033[1;36;41m\t\t\t\t\tPRENDRE UN RENDEZ-VOUS!:1\033[0m\n\n");  printf("\n"); printf("\n");
    system("echo \033[1;36;41m\t\t\t\t\tVOS AVIS:2\033[0m\n\n");  printf("\n"); printf("\n");
}
void checkpage0(int n){ 
    if(n==1){
        menu1med();
    }else if(n==2){
        menuenpatient();
    }else{
        printf("ERROR");
    }
}
 

 