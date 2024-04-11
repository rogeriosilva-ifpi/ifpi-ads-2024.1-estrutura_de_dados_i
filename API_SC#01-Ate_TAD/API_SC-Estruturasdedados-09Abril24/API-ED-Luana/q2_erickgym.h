#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[120];
    char cpf[20];
    char sexo[20];
    char data_nascimento[20];
    Professor professor;

} Aluno;

typedef struct {
    char nome[120];
    char cpf[20];
    char sexo[20];
    char data_nascimento[20];
    Aluno *aluno;
} Professor;

typedef struct {
    int id;
    char nome[150];
    int observacao[300];
} Exercicio;

int cadastrar_aluno(Aluno *aluno);