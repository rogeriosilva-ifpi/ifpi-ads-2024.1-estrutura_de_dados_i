#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "q2.h"
#include <time.h>

Aluno *criaAluno() {
    Aluno *novoAluno = (Aluno *)malloc(sizeof(Aluno));

    if (novoAluno == NULL) {
        printf("Falha ao alocar memoria para criar um aluno\n");
        exit(EXIT_FAILURE);
    }

    return novoAluno;
}

Professor *criaProfessor() {
    Professor *novoProfessor = (Professor *)malloc(sizeof(Professor));

    if (novoProfessor == NULL) {
        printf("Falha ao alocar memoria para criar um aluno\n");
        exit(EXIT_FAILURE);
    }

    novoProfessor->alunos == NULL;

    return novoProfessor;
}

int buscaProfessorIndice(Professor *professores, int qtdProfessores, int idProfessor) {
    int i;
    for (i = 0; i < qtdProfessores; i++) {
        if (professores[i].id == idProfessor) {
            return i;
        }
    }

    return -1;
}

void adicionaProfessor(Professor *professores, int *qtdProfessores, Professor *novoProfessor) {
    int indice = buscaProfessorIndice(professores, *qtdProfessores, novoProfessor->id);

    if (indice != -1) {
        printf("Professor ja cadastrado\n");
        return;
    }

    if (*qtdProfessores > 5) {
        printf("Erro ao adicionar professor: Quantidade maxima de professores excedida");
        return;
    }

    professores[*qtdProfessores] = *novoProfessor;
    (*qtdProfessores)++;
}

void listaProfessores(Professor *professores, int qtdProfessores) {
    int i;
    printf("\nProfessores da academia:\n");
    for (i = 0; i < qtdProfessores; i++) {
        printf("Professor [%d]: ID: %d | Nome: %s\n", i + 1, professores[i].id, professores[i].nome);
        printf("---------------------------------------\n");
    }
}

void removeProfessor(Professor *professores, int *qtdProfessores, int idProfessor) {
    int indice = buscaProfessorIndice(professores, *qtdProfessores, idProfessor);

    if (indice == -1) {
        printf("\nProfessor nao cadastrado.\n");
        return;
    }

    int i;
    for (i = 0; i < *qtdProfessores; i++) {
        if (professores->id == idProfessor) {
            int j;
            for (j = 0; j < *qtdProfessores - 1; j++) {
                professores[j] = professores[j + 1];
            }

            (*qtdProfessores)--;
        }
    }
}

// int buscaAlunoIndice(Aluno *alunos, int qtdAlunos, int idAluno) {
//     int i;
//     for (i = 0; i < qtdAlunos; i++) {
//         if (alunos[i].id == idAluno) {
//             return i;
//         }
//     }
//     return -1;
// }

// void adicionaAluno(Professor *professor, int *qtdALunos, Aluno *novoAluno) {
//     int indice = buscaAlunoIndice(professor->alunos, *qtdALunos, novoAluno->id);

//     if (indice != -1) {
//         printf("Aluno ja existe!\n");
//         return;
//     }

//     professor->alunos = (Aluno *)realloc(professor->alunos, (*qtdALunos + 1) * sizeof(Aluno));

//     if (professor->alunos == NULL) {
//         printf("Falha ao alocar memoria para o novo aluno\n");
//         exit(EXIT_FAILURE);
//     }

//     professor->alunos[*qtdALunos] = *novoAluno;
//     (*qtdALunos)++;
// }

void exibeMenu()
{
    char menu[] = "\n\t\t\t>>>> NOME GENERICO DE ACADEMIA <<<<\n1 - Adicionar professor\n2 - Listar professores\n3 - Remover professor\n0 - sair\n\ndigite aqui ->: ";
    printf("%s", menu);
}