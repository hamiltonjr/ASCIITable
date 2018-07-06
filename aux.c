#include <stdio.h>
#include "aux.h"
/*************************************************************************************/
/*              TABELA ASCCI SIMPLIFICADA (para simples conferência).                */
/* Essa tabela ASCCI pode ser útil no desenvolvimento de software para conferir os   */
/* elementos e códigos (decimal e hexadecimal). Instalado no computador pode ser     */
/* invocado imediatamente por meio de comandos do terminal.                          */
/*************************************************************************************/

void help() {
    printf("-----------------------------------------------------------------------------------------------------------\n");
    printf("Esse programa mostra na tela uma tabela ASCII estilizada com os principais códigos necessários\n");
    printf("para a programação.\n");
    printf("Caso o usuário digite o comando ascii sem argumentos, o programa exibirá a tabela completa (default).\n");
    printf("Se o usuário teclar -h, terá acesso a essa ajuda.\n");
    printf("Se teclar -v, conhecerá a versão do programa e a data da última atualização.\n");
    printf("Ainda pode teclar -d se quiser que a tabela exiba somente os códigos em decimal.\n");
    printf("Caso deseje que a tabela mostre apenas os códigos em hexadecimal, deverá teclar -x.\n");
    printf("\n");    
    printf("Esse programa é software livre e está sob a licença GNU/GPL 3.0. Fique à vontade para listar o código,\n");
    printf("estudá-lo e alterá-lo como quiser.\n");
    printf("Colaborações são bem-vindas. Aguardo o seu pull request!\n");
    printf("-----------------------------------------------------------------------------------------------------------\n");
 }
 
 void version() {
     printf("Versão 1.0.0 de julho de 2018\n");
 }

