#include "q2_erickgym.h"
#include <stdio.h>
//#include <stlib.h>



int main() {
    printf("*** ACADEMIA ERICK GYM ****\n");
    char menu[] = "Selecione uma Opcao\n 1 - Adicionar Aluno\n 2 - Adicionar Professor\n 3 - Listar\n 4 - Remover\n>>> ";
    int opcao;
    printf("%s", menu);
    scanf("%d", &opcao);
    
    while (opcao != 0) {
        if (opcao == 1) {
            printf("> Adicionar Novo Aluno\n");
            //cadastrarAluno();
        } else if (opcao == 2) {
            printf("> Adicionar Novo Professor\n");
        } else if (opcao == 3) {
            printf("----- Listar -----\nEscolha uma opcao\n");
            char sub_menu[] = " 1 - Listar Alunos\n 2 - Listar Professores\n 3 - Listar Exercícios\n 4 - Listar Treinos\n>>> ";
            int sub_opcao1;
            printf("%s", sub_menu);
            scanf("%d", &sub_opcao1);
            while (sub_opcao1 != 0) {
                if (sub_opcao1 == 1) {
                    printf("Você escolheu, %d\n", sub_opcao1);
                } else if (sub_opcao1 == 2) {
                    printf("Você escolheu, %d\n", sub_opcao1);
                } else if (sub_opcao1 == 3) {
                    printf("Você escolheu, %d\n", sub_opcao1);
                } else if (sub_opcao1 == 4) {
                    printf("Você escolheu, %d\n", sub_opcao1);
                } else {
                    printf("Opcao Invalida");
                }
                printf("%s", sub_menu);
                scanf("%d", &sub_opcao1);
            }
        } else {
            printf("> Opcao Invalida");
        }
    }

    return 0;
}