#ifndef ACADEMIA_H
#define ACADEMIA_H
#include "professor.h"
#include "aluno.h"
#include "treino.h"

#define capacidadeMaximaAlunos 100
#define capacidadeMaximaProfessor 10


typedef struct academia
{
    Professor *professor;
    Aluno *alunos;
    int qtdAlunos;
    char nome[120];
    char endereco[120];

}Academia;

//Protótipos das funções
Academia *novaAcademia();
int adicionarAluno(Academia *academia, Aluno *aluno);


#endif