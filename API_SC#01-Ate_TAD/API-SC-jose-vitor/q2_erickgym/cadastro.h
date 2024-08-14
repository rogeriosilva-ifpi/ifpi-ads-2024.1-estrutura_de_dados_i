#include <stdio.h>

typedef struct aluno {
    char cpf[12];
    char nome[120];
    char sexo[10];
    char data_nascimento[12];
} Aluno;

typedef struct professor {
    char cpf[12];
    char nome[120];
    char sexo[10];
    char data_nascimento[12];
} Professor;

typedef struct cadastro {
    Aluno aluno;
    Professor professor;
} Cadastro;

// void adicionar();
// void remover();
// void listar();
