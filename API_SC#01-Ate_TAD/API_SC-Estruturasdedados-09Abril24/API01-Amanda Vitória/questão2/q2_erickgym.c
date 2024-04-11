#include <stdio.h>
#include <stdlib.h>
#include "q2_erickgym.h"

typedef struct {
    char cpf[12];
    char nome[81];
    char sexo[2];
    char data_nasc[10];
    char *alunos[];
} Professor;

typedef struct {
    char cpf[12];
    char nome[81];
    char sexo[2];
    char data_nasc[10];
    Professor professor;
} ALuno;


int main() {
    int qtdAlunos, qtdProfs, qtdExerc;

    struct ALuno *aluno;

    //aluno = (struct Aluno *) malloc((10 * sizeof(ALuno)));

    printf("Qtd Alunos: ");
    scanf("%d", &qtdAlunos);
    printf("Qtd Professores: ");
    scanf("%d", &qtdProfs);
    printf("Qtd Exercicios: ");
    scanf("%d", &qtdExerc);

    printf("\n----> ERICK GYM <----\n1 - Adicionar Aluno\n2 - Listar Alunos\n3 - Remover Alunos\n\n0 - Sair\n> ");
    
    int opcao;
    scanf("%d", &opcao);

    while (opcao != 0){
        
        if (opcao == 1) {
            adicionarAluno(qtdAlunos); //faltando algum parametro
        } else if (opcao == 2) {
            //listarAlunos(qtdAlunos, alunos);
        } else if (opcao == 3) {
            //removerAluno()
        }


        scanf("%d", &opcao);
    }
    
    //printf(menu);
}