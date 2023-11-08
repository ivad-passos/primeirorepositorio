#include <stdio.h>

int main(){
    int matriz[3][3];
    int num;
    int soma_linha;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            printf("digite um numero: ");
            scanf("%d", &num);
            matriz[i][j] = num;
        }
    }

    printf("\n\nMatriz:\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++){
        soma_linha = 0;
        for (int j = 0; j < 3; j++)
        {
            soma_linha += matriz[i][j];
        }
        printf("Soma da linha %d: %d\n", i + 1, soma_linha);
    }

    return 0;
}