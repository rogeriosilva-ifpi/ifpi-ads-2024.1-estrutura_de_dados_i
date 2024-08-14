#include <stdio.h>

//Protótipos:
void adicionarAluno(int qtdAlunos, char *cpf, char *nome, char *sexo, char *dt_nasc);




void adicionarAluno(int qtdAlunos, char *cpf, char *nome, char *sexo, char *dt_nasc) {

    for (int i = 0; i < qtdAlunos; i++) {
        printf("Cpf: ");
        scanf("%s", &cpf);
        printf("Nome: ");
        scanf("%s", &nome);
        printf("Sexo M/F: ");
        scanf("%s", &sexo);
        printf("Data Nasc: ");
        scanf("%s", &dt_nasc);
    }
}