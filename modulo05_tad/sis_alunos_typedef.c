#include <stdio.h>
#include <stdlib.h>

#include "aluno.h"

int main() {
    Aluno *alunos;
    alunos = (Aluno *)malloc(10 * sizeof(Aluno));
    int qtd_alunos = 0;

    char menu[] = ">>> SysAlunos <<<\n1 - Add Aluno\n2 - Listar Alunos\n\n0 - Sair\n>>> ";
    int opcao;
    printf("%s", menu);
    scanf("%d", &opcao);

    while (opcao != 0) {
        if (opcao == 1) {
            Aluno *aluno = novoAluno();
            pedirDados(aluno);
            alunos[qtd_alunos] = *aluno;
            qtd_alunos++;
        } else if (opcao == 2) {
            listarAlunos(alunos, qtd_alunos);
        }

        printf("Enter to continue...");
        scanf("%d", &opcao);
        system("clear");
        printf("%s", menu);
        scanf("%d", &opcao);
    }
}
