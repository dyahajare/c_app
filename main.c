 #include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include "menus.c"
 

int main() {
    
     system("color 6");
    printf("²²²²²²      ²²²²²²²          ²²        ²²               ²²            ²²²²             ²²      ²²²²²²  ²²²²²²\n");
    printf("²                     ²                   ²²     ²²            ²²    ²²        ²²   ²²       ²²  ²²       ²²          ²²\n");
    printf("²²²²²²           ²                       ²²               ²²²²²²²        ²²      ²²  ²²²²²²       ²²          ²²\n");
    printf("²                     ²                       ²²               ²²       ²²       ²²    ²²    ²²     ²²      ²²          ²²\n");
    printf("²²²²²²      ²²²²²²²                ²²               ²²       ²²       ²² ²²       ²²     ²²      ²²      ²²²²²²\n");
    printf("\n");
    printf("\n");
    printf("\n");
                       system("echo \033[1;33;44m                                                                     MEDECIN:1                             \033[0m");              printf("\n");
                       system("echo \033[1;33;44m                                                                     PATIENT:2                             \033[0m"); 
 int n;
 scanf("%d",&n);
checkpage0(n);

 return 0;
}
