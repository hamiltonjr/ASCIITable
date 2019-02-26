#include <stdio.h>
#include "aux.h"
/***********************************************************************************/
/*                           SIMPLE ASCCI TABLE                                    */
/* This ASCCI table can be useful for software development, for remember the code  */
/* of characters (oct / dec / hex code). Saved on the computer, it can be used in  */
/* terminal directly.                                                              */
/***********************************************************************************/
void help() {
    printf("-------------------------------------------------------------------------\n");
    printf("This code show in screen an stylist ASCII table with the more used codes \n");
    printf("in programming. If user type the program without arguments, it be shown  \n");
    printf("the completa table. If he types -h will have access to help. If he types \n");
    printf("-v, will know the program version and last release date. He yet types -d \n");
    printf("case want only dec code table. Case he wants to see only hex codes, he   \n");
    printf("can to type -x.                                                          \n");
    printf("                                                                         \n");    
    printf("This is a free software under the GNU/GPL 3.0 lisense. You can read it,  \n");
    printf("study it and modify it like your needs. Colaboration are welcome!        \n");
    printf("-------------------------------------------------------------------------\n");
 }
 
 void version() {
     printf("Versão 1.0.1 2019-02\n");
 }

