#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gym.h"

void menu_principal();

int main(){
    // int A, P, E;
    // printf("\nMáximo de alunos na academia: ");
    // scanf("%d", &A);
    // printf("\nMáximo de professores na academia: ");
    // scanf("%d", &P);
    // printf("\nMáximo de exercícios na academia: ");
    // scanf("%d", &E);

    int opcao;
    menu_principal();

    while(opcao != 0){
        if(opcao == 1){
            // Aluno *alunos;
            // alunos = (Aluno*) malloc(*sizeof(Aluno));
            int qtd_alunos = 0;
            system("clear");
            int op_alunos;
            printf("***** ALUNOS *****");
            printf("\n1- Adicionar\n2- Remover\n3- Listar\n\n4- Menu Principal\n>>> ");
            scanf("%d", &op_alunos);
            if(op_alunos == 1){
                Aluno novoAluno;
                adicionarAlunos(&novoAluno);
            }else if(op_alunos == 2){
                removerAluno();
            }else if(op_alunos == 3){
                listarAlunos();
            }else if(opcao == 4){
                limparTela();
                menu_principal();
            }

        }else if(opcao == 2){
            system("clear");
            int op_profs;
            printf("***** PROFESSORES *****");
            printf("\n1- Adicionar\n2- Remover\n3- Listar\n\n4- Menu Principal\n>>> ");
            scanf("%d", &op_profs);
            if(op_profs == 1){
                adicionarProfs();
            }else if(op_profs == 2){
                removerProf();
            }else if(op_profs == 3){
                listarProfs();
            }else if(op_profs == 5){
                limparTela();
                menu_principal();
            }

        }else if(opcao == 3){
            system("clear");
            int op_exercicios;
            printf("***** EXERCÍCIOS *****");
            printf("\n1- Adicionar\n2- Remover\n3- Listar\n\n4- Menu Principal\n>>> ");
            scanf("%d", &op_exercicios);
            if(op_exercicios == 1){
                adicionarExercicios();
            }else if(op_exercicios == 2){
                removerExercicio();
            }else if(op_exercicios == 3){
                listarExercicios();
            }else if(op_exercicios == 5){
                limparTela();
                menu_principal();
            }

        }
    }
    // free(alunos);
    return 0;
}


void menu_principal(){
    printf("\n- - - - - - - - - -  MENU  - - - - - - - - - -");
    printf("\n>> Selecione sua opção: ");
    printf("\n1- Alunos");
    printf("2- Professores");
    printf("3- Exercícios");
    printf("\n\n0- Sair");
    printf("\n>>> ");

}

void adicionarAlunos(Aluno *novoAluno){
    printf("\nNome do Aluno: ");
    scanf(" %120[^\n]", novoAluno->nome);
    printf("\nCPF: ");
    scanf(" %12[^\n]", novoAluno->cpf);
    printf("\nSexo(F | M): ");
    scanf(" %2[^\n]", novoAluno->sexo);
    printf("\nData de nascimento(DD/MM/AAAA): ");
    scanf(" %11[^\n]", novoAluno->data_nasc);
}