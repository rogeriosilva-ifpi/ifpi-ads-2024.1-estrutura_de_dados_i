#pragma once
#define Q2

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    int id;
    char cpf[12];
    char nome[120];
    char sexo[2];
    Data dtNascimento;
} Aluno;

typedef struct {
    int id;
    char cpf[15];
    char nome[120];
    char sexo[2];
    Data dtNascimento;
    Aluno *alunos;
} Professor;

typedef struct {
    int id;
    char nome[120];
    char observacao[250];
} Exercicio;

typedef struct {
    Aluno *aluno;
    Professor *professor;
    Exercicio *exercicios;
} Treino;

Aluno *criaAluno();
Professor *criaProfessor();
int buscaProfessorIndice(Professor *professores, int qtdProfessores, int idProfessor);
void adicionaProfessor(Professor *professores, int *qtdProfessores, Professor *novoProfessor);
void listaProfessores(Professor *professores, int qtdProfessores);
void removeProfessor(Professor *professores, int *qtdProfessores, int idProfessor);
void exibeMenu();