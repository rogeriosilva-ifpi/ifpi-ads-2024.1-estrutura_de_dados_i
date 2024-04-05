#include "aluno.h"

#include <stdio.h>
#include <stdlib.h>
// Implementação do TAD Aluno

Aluno *novoAluno() {
    Aluno *aluno = (Aluno *)malloc(sizeof(Aluno));
    aluno->endereco = (Endereco *)malloc(sizeof(Endereco));

    return aluno;
}

void pedirDados(Aluno *aluno) {
    printf("Matrícula: ");
    scanf("%d", &aluno->matricula);

    printf("Nome: ");
    scanf(" %120[^\n]", aluno->nome);

    pedirEndereco(aluno);
}

void pedirEndereco(Aluno *aluno) {
    // aluno->endereco = (Endereco *)malloc(sizeof(Endereco));

    printf("Endereço: \n");
    printf("Logradouro: ");
    scanf(" %250[^\n]", aluno->endereco->logradouro);
}

void listarAlunos(Aluno *alunos, int qtdAlunos) {
    printf("Alunos Cadastrados\n");

    for (int i = 0; i < qtdAlunos; i++) {
        printf("%d - %s\n", alunos[i].matricula, alunos[i].nome);
        printf("\tEndereço: \n");
        printf("\tLogradouro: %s\n", alunos[i].endereco->logradouro);
    }
    printf("------------------\n");
}
