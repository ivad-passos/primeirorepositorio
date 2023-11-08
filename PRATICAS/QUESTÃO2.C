#include <stdio.h>

int main(){
    int matriz[3][3];
    int num;
    int i,j;
    int soma_linha;

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++)
        {
            printf("digite um numero: ");
            scanf("%d", &num);  
            matriz[i][j] = num;
        }
    }

    printf("\n\nMatriz:\n");

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++){
        soma_linha = 0;
        for (j = 0; j < 3; j++)
        {
            soma_linha += matriz[i][j];
        }
        printf("Soma da linha %d: %d\n", i + 1, soma_linha);
    }

    return 0;
}