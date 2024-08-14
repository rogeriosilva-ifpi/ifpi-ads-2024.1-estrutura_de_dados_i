#ifndef ALUNO_H
#define ALUNO_H
#include "professor.h"
#include "exercicios.h"

typedef struct aluno
{
    char nome[120];
    int cpf;
    char sexo;
    char dataNascimento[20];
    Professor *professor;
    Exercicios *exercicios;

}Aluno;

//Protótipos das funções
Aluno *novoAluno();

#endif