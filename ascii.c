#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "aux.h"
/***********************************************************************************/
/*                           SIMPLE ASCCI TABLE                                   */
/* This ASCCI table can be useful for software development, for remember the code  */
/* of characters (oct / dec / hex code). Saved on the computer, it can be used in  */
/* terminal directly.                                                              */
/***********************************************************************************/
int main(int argc, char** argv) {
    const unsigned char shift = 16; // shift for table alignment
    unsigned char c;                // command-line arguments
    bool flag_o = false;            // oct codes are visible
    bool flag_d = false;            // dec codes are visible
    bool flag_x = false;            // hex codes are visible

    if (argc>2) {
        printf("ERROR: many arguments. Enter -h for HELP\n");
        exit(EXIT_FAILURE);
    }

    if (argc==2) {
        if (!strcmp(argv[1], "-h")) {
            help();
            exit(EXIT_SUCCESS);
        }
        if (!strcmp(argv[1], "-v")) {
            version();
            exit(EXIT_SUCCESS);
        }
        if (!strcmp(argv[1], "-o")) {
            flag_o = true;
        }
        if (!strcmp(argv[1], "-d")) {
            flag_d = true;
        }
        if (!strcmp(argv[1], "-x")) {
            flag_x = true;
        }
    }

    printf("\n");
    printf("======================================================================\n");
    printf("                        SIMPLE ASCII TABLE                            \n");
    printf("======================================================================\n");
    printf("\n");

    for (unsigned char s=2; s<=7; s++) {
        printf("| Ch |");
        for (unsigned char c=s*shift; c<(s+1)*shift; c++) {
            printf("  %c ", c);  
        }
        printf("\n");

        if (!flag_o) {
            printf("| Oc |");
            for (unsigned char c=s*shift; c<(s+1)*shift; c++) {
                printf(" %03o", c);  
            }
        }
        printf("\n");

        if (!flag_x) {
            printf("| Dc |");
            for (unsigned char c=s*shift; c<(s+1)*shift; c++) {
                printf(" %03d", c);  
            }
        }
        printf("\n");

        if (!flag_d) {
            printf("| Hx |");
            for (unsigned char c=s*shift; c<(s+1)*shift; c++) {
                printf("  %x", c);
            }
        }
        printf("\n\n\n");
    }

    printf("======================================================================\n");
    printf("  Version 1.0.1 - by Hamilton Gonçalves Jr. This is a free software.  \n");
    printf("======================================================================\n\n");

    return EXIT_SUCCESS;;
}
