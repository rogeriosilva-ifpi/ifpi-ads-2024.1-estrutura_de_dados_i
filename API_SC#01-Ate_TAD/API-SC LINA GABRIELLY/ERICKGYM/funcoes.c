#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cabecalho.h"

//void verificar()

void adicionar(Professor *professor , Aluno *alunos , Treino *treinos ){
    int opcao ;
    printf("Voce deseja adiconar ALUNO | PROFESSOR | TREINO ? \n");
    printf("Digite 1 para ALUNO , 2 para PROFESSOR e 3 para TREINO:");
    scanf("%d" , &opcao);

    if (opcao == 1){
        printf("CADASTRO DE INFORMACOES ALUNO(A):\n");
        printf("Nome:" );
        scanf(" %249[^\n]", alunos->nome);
        printf("Crie um id: ");
        scanf(" %d" , &alunos->id);
        printf("CPF: ");
        scanf(" %19[^\n]" , alunos->cpf);
        printf("Sexo: ");
        scanf(" %10[^\n]" , alunos->sexo);
        printf("Data de nascimento: ");
        scanf(" %11[^\n]" , alunos->data_nascimento);
        printf("ID do seu professor:");
        scanf(" %d" , &alunos->id_professor);
        
    }
    else if (opcao == 2){
        printf("CADASTRO DE INFORMACOES PROFESSOR(A):\n");
        printf("Nome:" );
        scanf(" %249[^\n]", professor->nome);
        printf("Crie um id: ");
        scanf(" %d" , &professor->id);
        printf("CPF: ");
        scanf(" %19[^\n]" , professor->cpf);
        printf("Sexo: ");
        scanf(" %10[^\n]" , professor->sexo);
        printf("Data de nascimento: ");
        scanf(" %11[^\n]" , professor->data_nascimento);

    }

    else if (opcao == 3){
      printf("CADASTRO DE INFORMACOES TREINO:");
      printf("ID treino:");
      scanf(" %d" , &treinos->id);
      printf("Nome do treino:");
      scanf(" %29[^\n]" , treinos->nome_treino);
      printf("Observacao:");
      scanf(" %249[^\n]" , treinos->observacao);


    }
    else{
        printf("OPCAO INVALIDA");   
    }
}
void listar(Professor *professor , Aluno *alunos , Treino *treinos , int , int qtd){
  int opcao;
  int qtd;
  printf("Voce deseja listar ALUNO | PROFESSOR | TREINO ? \n");
  printf("Digite 1 para ALUNO , 2 para PROFESSOR e 3 para TREINO:");
  scanf("%d" , &opcao);
  if (opcao == 1){
    for( int i; i<qtd ; i++){
        printf("");
    }


  }
 
 



}

