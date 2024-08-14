#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"


Aluno *novoAluno(){
    Aluno *novoAluno = (Aluno *) malloc(sizeof(Aluno));
}

void pedirDadosAluno(Aluno *aluno){
    printf("----- Dados do Aluno -----");
    printf("Nome: ");
    scanf("%s", aluno->nome);
    printf("CPF: ");
    scanf("%d", aluno->cpf);
    printf("Data de nascimento (DD/MM/AAAA): ");
    scanf("%s", aluno->dataNascimento);
    printf("Sexo (f - feminino / m - masculino): ");
    scanf("%s", aluno->sexo);
}