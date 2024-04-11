#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#define CABECALHO_H

typedef struct{
 char nome[250];
 int id;
 char cpf[20];
 char sexo[9];
 int data_nascimento;
 Aluno alunos[10];
 Treino treino;

}Professor;

typedef struct{
 char nome[250];
 int id;
 char cpf[20];
 char sexo[11];
 char data_nascimento[11];
 int id_professor;
 Professor professor[1];
 Treino treino;

}Aluno;

typedef struct{
    int id;
    char nome_treino[30];
    char observacao[250];

}Treino;

void adicionar(Professor *professor , Aluno *alunos , Treino *treinos);

