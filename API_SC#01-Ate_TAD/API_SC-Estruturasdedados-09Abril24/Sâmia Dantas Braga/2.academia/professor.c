#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"


Professor *novoProfessor(){
    Professor *novoProfessor = (Professor *) malloc(sizeof(Professor));
}

void pedirDadosProfessor(Professor *professor){
    printf("----- Dados do Professor -----");
    printf("Nome: ");
    scanf("%s", professor->nome);
    printf("CPF: ");
    scanf("%d", professor->cpf);
    printf("Data de nascimento (DD/MM/AAAA): ");
    scanf("%s", professor->dataNascimento);
    printf("Sexo (f - feminino / m - masculino): ");
    scanf("%s", professor->sexo);
}