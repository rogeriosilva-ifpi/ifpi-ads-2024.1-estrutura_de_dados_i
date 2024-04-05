#include <stdio.h>
#include <stdlib.h>
// struct aluno {

typedef struct {
    char logradouro[250];
    int numero;
    char bairro[120];
    char cidade[120];
    char uf[3];
    char cep[11];
} Endereco;

typedef struct {
    int matricula;
    char nome[120];
    int idade;
    float renda;
    Endereco *endereco;
} Aluno;

// typedef struct aluno Aluno;
void pedirDados(Aluno *novoAluno);
void listarAlunos(Aluno *alunos, int qtdAlunos);
void pedirEndereco(Aluno *aluno);
Aluno *novoAluno();

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
            // novoAluno.endereco = (Endereco *)malloc(sizeof(Endereco));
            // pedirDados(&aluno);
            pedirDados(aluno);
            // alunos[qtd_alunos] = aluno;
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

Aluno *novoAluno() {
    Aluno *aluno = (Aluno *)malloc(sizeof(Aluno));
    aluno->endereco = (Endereco *)malloc(sizeof(Endereco));

    return aluno;
}

void liberarAluno(Aluno *aluno) {
    free(aluno);
}

void pedirDados(Aluno *aluno) {
    printf("Matrícula: ");
    scanf("%d", &aluno->matricula);

    printf("Nome: ");
    scanf(" %120[^\n]", aluno->nome);

    pedirEndereco(aluno);
}

void pedirEndereco(Aluno *aluno) {
    // aluno->endereco = (Endereco *)malloc(sizeof(Endereco));

    printf("Endereço: \n");
    printf("Logradouro: ");
    scanf(" %250[^\n]", aluno->endereco->logradouro);
}

void listarAlunos(Aluno *alunos, int qtdAlunos) {
    printf("Alunos Cadastrados\n");

    for (int i = 0; i < qtdAlunos; i++) {
        printf("%d - %s\n", alunos[i].matricula, alunos[i].nome);
        printf("\tEndereço: \n");
        printf("\tLogradouro: %s\n", alunos[i].endereco->logradouro);
    }
    printf("------------------\n");
}
