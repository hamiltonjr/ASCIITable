#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
/*************************************************************************************/
/*              TABELA ASCCI SIMPLIFICADA (para simples conferência).                */
/* Essa tabela ASCCI pode ser útil no desenvolvimento de software para conferir os   */
/* elementos e códigos (decimal e hexadecimal). Instalado no computador pode ser     */
/* invocado imediatamente por meio de comandos do terminal.                          */
/*************************************************************************************/

int main(int argc, char** argv) {
    const unsigned char shift = 16; // shift para alinhar tabelas
    unsigned char c;                // resumo dos argumentos delinha de comando

    printf("======================================================================\n");
    printf("                       TABELA ASCCI SIMPLIFICADA                      \n");
    printf("======================================================================\n\n");

    for (unsigned char s=2; s<=7; s++) {
        printf("| Ch |");
        for (unsigned char c=s*shift; c<(s+1)*shift; c++) {
            printf("  %c ", c);  
        }
        printf("\n");

        printf("| Dc |");
        for (unsigned char c=s*shift; c<(s+1)*shift; c++) {
            printf(" %03d", c);  
        }
        printf("\n");

        printf("| Hx |");
        for (unsigned char c=s*shift; c<(s+1)*shift; c++) {
            printf("  %x", c);
        }
        printf("\n\n\n");
    }

    printf("======================================================================\n");
    printf("   Version 1.0 - by Hamilton Gonçalves Jr. This is a free software.   \n");
    printf("======================================================================\n\n");

    return EXIT_SUCCESS;;
}