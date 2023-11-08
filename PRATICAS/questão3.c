#include <stdio.h>

int main() {

    int matriz[5][4];
    int num_matricula, media_provas, media_trabalhos, nota_final, maior_matricula;
    double media_aritmetica;
    int maior_nota = 0;
    int soma_notas = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o numero de matricula do aluno %d: ", i + 1);
        scanf("%d", &num_matricula);

        printf("Digite a media das provas do aluno %d: ", i + 1);
        scanf("%d", &media_provas);

        printf("Digite a media dos trabalhos do aluno %d: ", i + 1);
        scanf("%d", &media_trabalhos);

        nota_final = media_provas + media_trabalhos;

        matriz[i][0] = num_matricula;
        matriz[i][1] = media_provas;
        matriz[i][2] = media_trabalhos;
        matriz[i][3] = nota_final;
    }

    printf("\n\n| Numero de matricula | Media das provas | Media dos trabalhos | Nota final |\n");
    for (int i = 0; i < 5; i++) {
        printf("\n| %10d | %10d | %10d | %10d |", matriz[i][0], matriz[i][1], matriz[i][2], matriz[i][3]);
    }

    for (int i = 0; i < 5; i++) {
        if (matriz[i][3] > maior_nota) {
            maior_nota = matriz[i][3];
            maior_matricula = matriz[i][0];
        }
    }

    printf("\n\n maior nota final = matricula %d", num_matricula);

    for (int i = 0; i < 5; i++) {
        soma_notas += matriz[i][3];
    }

    media_aritmetica = (soma_notas / 5.0);

    printf("\n\nA media aritmetica das notas finais = %.2f", media_aritmetica);

    return 0;
}
