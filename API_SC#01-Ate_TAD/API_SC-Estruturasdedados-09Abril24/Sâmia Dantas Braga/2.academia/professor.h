#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "aluno.h"

typedef struct professor
{
    char nome[120];
    int cpf;
    char sexo;
    char dataNascimento[20];
    Aluno *alunos;
    Exercicios *exercicios;

}Professor;

//Protótipos das funções
Professor *novoProfessor();
void pedirDadosProfessor(Professor *professor);

#endif