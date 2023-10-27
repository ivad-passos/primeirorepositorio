#include <stdio.h>

int lerNotas(FILE *arq, char nomearq[]){
float nota1,nota2,nota3;
    arq=fopen(nomearq, "r");
    if(!arq)return 0;
    while(fscanf(arq,"%f %f %f", &nota1, &nota2, &nota3) != EOF){
        printf("nota1: %f, nota2: %f, nota3: %f\n", nota1, nota2, nota3);
    }
    fclose(arq);
    return 1;
}

int main(){
    FILE *nota;
    char nome[30];

    printf("digite o nome do arq:\n");
    scanf("%s", nome);

    printf("\n ------------- NOTAS ---------------- \n");

    lerNotas(nota,nome);
}