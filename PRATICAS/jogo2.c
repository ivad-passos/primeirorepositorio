#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char j1[30] , j2[30];
    printf("Digite o nome do player 1: ");
    scanf("%s", j1);
    printf("Digite o nome do player 2: ");
    scanf("%s", j2);
    system("cls");
    printf("*** JOGO DA VELHA ***\n");
    printf("*********************\n");
    printf("Nome do player 1: %s\n" , j1);
    printf("Nome do player 2: %s\n\n" , j2);
    printf("Boa sorte players %s e %s\n" , j1 , j2);
    printf("**************************************\n");
    printf("\n\n");
    printf("   0   1   2   \n");
    printf("0    |   |    \n");
    printf("--------------\n");
    printf("1    |   |    \n");
    printf("--------------\n");
    printf("2    |   |    \n");


}