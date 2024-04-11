#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cabecalho.h"

void adicionar(Professor *professor , Aluno *alunos , Treino *treinos );

int main(){
    Professor *professores;
    Aluno *alunos;
    Treino *treinos;

    alunos = malloc(10*sizeof(alunos));
    professores = malloc(10*sizeof(professores));
    treinos = malloc(10*sizeof(treinos));
    int opcao=0;
   
   printf("|-----GESTAO DA ACADEMIA ERICK GYM ---------|\n");
   printf("|-------  SEJA BEM VINDO   -----------------|\n");
   printf("|>>>MENU<<<\n 1 - Adicionar \n 2 - Listar \n 3 - Remover \n\n0 - Encerrar \n>>>");
   scanf("%d" , &opcao);

   while(opcao != 0){
     if (opcao == 1){
       adicionar(  &alunos , &professores , &treinos);
     }
     else if(opcao == 2){
        


     }


   }

}