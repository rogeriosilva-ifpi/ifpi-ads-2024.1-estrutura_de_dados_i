#ifndef ALUNO_H
#define ALUNO_H

typedef struct {
    char cpf[13];
    char nome[100];
    char sexo[2];
    char data_nascimento[12];
} Aluno;

#endif