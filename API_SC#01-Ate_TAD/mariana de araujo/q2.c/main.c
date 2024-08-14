#include <stdio.h>
#include <stdlib.h>
#include "erickgym.h"

int main(){
    Aluno *alunos = (Aluno*)malloc(10 * sizeof(Aluno));
    // Professor *aluno->Professor->nome = (Professor*)malloc(sizeof(Professor));
    Professor *professor = (Professor*)malloc(sizeof(Professor));
    int qtd_alunos = 0;
    int qtd_professores = 0;
    int qtd_treinos = 0; 


    int opcao;
    char menu[] = "----- Bem vindo ao ErickGym System -----\n\nEscolha uma opcao:\n1 - Add Aluno:\n2 - Listar Alunos:\n3- Add Profesor:\n4- Listar Professor:\n5 - Sou Professor:\n6- Sou Aluno:\n\n0 - Sair:\n\n>>>";
    printf("%s", menu);
    scanf("%d", &opcao);

    while(opcao != 0){
        if(opcao == 1){
            // Aluno *aluno = addAluno();

        }
        printf("%s", menu);
        scanf("%d", &opcao);
    }


    return 0;
}