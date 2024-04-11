#include <stdio.h>
#include <stdlib.h>
#include "gym.h"

int main(){
    int A, P, E;

    printf("\n==========================================");
    printf("\n Capacidade maxima de alunos ? ");
    scanf("%d", &A);
    printf("\n Capacidade maxima de professores ? ");
    scanf("%d", &P);
    printf("\n Quantidade de Exercicios em um treino ? ");
    scanf("%d", &E);

    Pessoa * Alunos;
    Alunos = (Pessoa *) malloc(A * sizeof(Pessoa));
    int qtdAlunos = 0;
    Pessoa * Professores;
    Professores = (Pessoa *) malloc(P * sizeof(Pessoa));
    int qtdProfessores = 0;

    Exercicio * Exercicios;
    Exercicios = (Exercicio *) malloc(100 * sizeof(Exercicio));
    int qtdExercicios = 0;

    Treino * Treinos;
    Exercicios = (Treino *) malloc(100 * sizeof(Treino));
    int qtdTreinos = 0;

    int opcao;
    printMenu();
    scanf("%d", &opcao);

    while(opcao != 0){
        if(opcao == 1){
            Alunos[qtdAlunos] = Novo_Aluno();
            qtdAlunos++;
        }
        else if(opcao == 2){
        }
        else if(opcao == 3){
            listar_Alunos(Alunos, qtdAlunos);
        }
        else if(opcao == 4){
            Professores[qtdProfessores] = Novo_Professor();
            qtdProfessores++;
        }
        else if(opcao == 5){
            printf("opcao 5");
        }
        else if(opcao == 6){
            listar_Professores(Professores, qtdProfessores);
        }
        else if(opcao == 7){
            Exercicios[qtdExercicios] = Novo_Exercicio();
            qtdExercicios++;
        }
        else if(opcao == 9){
            listar_Exercicios(Exercicios, qtdExercicios);
        }
        else if(opcao == 7){
            Exercicios[qtdExercicios] = Novo_Exercicio();
            qtdExercicios++;
        }
        else if(opcao == 10){
            Treinos[qtdTreinos] = adcionar_treino(Alunos, qtdAlunos, Exercicios, qtdExercicios, E);
        }
        else if(opcao == 12){
            listar_Treinos(Alunos, qtdAlunos);
        }
        

        printMenu();
        scanf("%d", &opcao);
    }

    return 0;
}