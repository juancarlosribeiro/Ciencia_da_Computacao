#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX_ALUNOS 3
#define MAX_NOME 50

struct Aluno {
    char nome[MAX_NOME];
    int matricula;
    float notas[3];
    float media;
    char resultado[15];
};

float calcularMedia(float notas[]) {
    return (notas[0] + notas[1] + notas[2])/3;
}

void determinarResultado(float media, char resultado[]) {
    if (media >= 7.0) {
        strcpy(resultado, "Aprovado");
    } else if (media >= 5.0) {
        strcpy(resultado, "Recuperacao");
    } else {
        strcpy(resultado, "Reprovado");
    }
}

int main() {
    struct Aluno alunos[MAX_ALUNOS];

    printf("Cadastro de Alunos\n\n");

    for (int i = 0; i < MAX_ALUNOS; ++i) {
        printf("Aluno %d:\n", i + 1);

        printf("Nome: ");
        scanf("%s", alunos[i].nome);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Notas (3 disciplinas): ");
        scanf("%f %f %f", &alunos[i].notas[0], &alunos[i].notas[1], &alunos[i].notas[2]);

        alunos[i].media = calcularMedia(alunos[i].notas);
        determinarResultado(alunos[i].media, alunos[i].resultado);

        printf("\n");
    }

    printf("\nResultados Finais:\n");
    for (int i = 0; i < MAX_ALUNOS; ++i) {
        printf("Aluno %d\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Notas: %.2f %.2f %.2f\n", alunos[i].notas[0], alunos[i].notas[1], alunos[i].notas[2]);
        printf("Media: %.2f\n", alunos[i].media);
        printf("Resultado Final: %s\n\n", alunos[i].resultado);
    }

    return 0;
}




