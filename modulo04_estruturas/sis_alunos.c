#include <stdio.h>
#include <stdlib.h>

struct aluno {
    int matricula;
    char nome[120];
    int idade;
    float renda;
};

void pedirDados(struct aluno *novoAluno);
void listarAlunos(struct aluno *alunos, int qtdAlunos);

int main() {
    struct aluno *alunos;
    alunos = (struct aluno *)malloc(10 * sizeof(struct aluno));
    int qtd_alunos = 0;

    char menu[] = ">>> SysAlunos <<<\n1 - Add Aluno\n2 - Listar Alunos\n\n0 - Sair\n>>> ";
    int opcao;
    printf("%s", menu);
    scanf("%d", &opcao);

    while (opcao != 0) {
        if (opcao == 1) {
            struct aluno novoAluno;
            pedirDados(&novoAluno);
            alunos[qtd_alunos] = novoAluno;
            qtd_alunos++;
        } else if (opcao == 2) {
            listarAlunos(alunos, qtd_alunos);
        }

        printf("Enter to contineu...");
        scanf("%d", &opcao);
        system("clear");
        printf("%s", menu);
        scanf("%d", &opcao);
    }
}

void pedirDados(struct aluno *novoAluno) {
    printf("Matrícula: ");
    scanf("%d", &novoAluno->matricula);

    printf("Nome: ");
    scanf(" %120[^\n]", novoAluno->nome);
}

void listarAlunos(struct aluno *alunos, int qtdAlunos) {
    printf("Alunos Cadastrados\n");

    for (int i = 0; i < qtdAlunos; i++) {
        printf("%d - %s\n", alunos[i].matricula, alunos[i].nome);
    }
    printf("------------------\n");
}
