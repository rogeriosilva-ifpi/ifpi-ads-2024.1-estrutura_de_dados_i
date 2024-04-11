#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "q2.h"
#include <time.h>

int main() {
    srand(time(NULL));
    int qtdMaximaAlunos = 20, qtdMaximaProfessores = 5, qtdExercicios = 5;

    int qtdAlunos = 0;
    int qtdProfessores = 0;
    exibeMenu();
    int opcao;
    scanf("%d", &opcao);
    int pause;

    // vetor de professores
    Professor *professores = (Professor *)malloc(sizeof(Professor) * qtdMaximaProfessores);

    while(opcao != 0) {
        if (opcao == 1) {
            printf("\nAdiciona professor\n");

            Professor *novoProfessor = criaProfessor();
            
            getchar();
            printf("Nome do professor: ");
            fgets(novoProfessor->nome, sizeof(novoProfessor->nome), stdin);
            novoProfessor->nome[strcspn(novoProfessor->nome, "\n")] = '\0';

            printf("CPF do professor: ");
            fgets(novoProfessor->cpf, sizeof(novoProfessor->cpf), stdin);
            novoProfessor->cpf[strcspn(novoProfessor->cpf, "\n")] = '\0';

            novoProfessor->id = rand() % 10000;

            adicionaProfessor(professores, &qtdProfessores, novoProfessor);
            printf("\nProfessor adicionado com sucesso\nID do professor: %d\n", novoProfessor->id);
        } else if (opcao == 2) {
            printf("\nListar professores\n");

            listaProfessores(professores, qtdProfessores);
        } else if (opcao == 3) {
            printf("\nRemover professor\n");

            int idProfessor;
            printf("Id do professor: ");
            scanf("%d", &idProfessor);

            removeProfessor(professores, &qtdProfessores, idProfessor);
            printf("\nProfessor removido com sucesso\n");
        }

        printf("\nTecle 1 para continuar: ");
        scanf("%d", &pause);
        exibeMenu();
        scanf("%d", &opcao);
    }

    free(professores);
    return 0;
}