#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ALUNOS 100
#define MAX_PROFESSORES 100
#define MAX_EXERCICIOS 100
#define MAX_TREINOS 100


typedef struct {
    char cpf[12];
    char nome[50];
    char sexo;
    char data_nascimento[11];
} Aluno;

typedef struct {
    char cpf[12];
    char nome[50];
    char sexo;
    char data_nascimento[11];
    Aluno *alunos[MAX_ALUNOS]; 
    int total_alunos;
} Professor;

typedef struct {
    int id;
    char nome[50];
    char observacao[100];
} Exercicio;

typedef struct {
    Aluno *aluno;
    Exercicio *exercicios[MAX_EXERCICIOS]; 
    int total_exercicios;
} Treino;


void cadastrar_aluno(Aluno alunos[], int *total_alunos) {
    if (*total_alunos >= MAX_ALUNOS) {
        printf("Capacidade máxima de alunos atingida.\n");
        return;
    }

    printf("Digite o CPF do aluno: ");
    scanf("%s", alunos[*total_alunos].cpf);
    printf("Digite o nome do aluno: ");
    scanf("%s", alunos[*total_alunos].nome);
    printf("Digite o sexo do aluno (M/F): ");
    scanf(" %c", &alunos[*total_alunos].sexo);
    printf("Digite a data de nascimento do aluno (DD/MM/AAAA): ");
    scanf("%s", alunos[*total_alunos].data_nascimento);

    (*total_alunos)++;
}

void remover_aluno(Aluno alunos[], int *total_alunos, char cpf[]) {
    for (int i = 0; i < *total_alunos; i++) {
        if (strcmp(alunos[i].cpf, cpf) == 0) {
            for (int j = i; j < *total_alunos - 1; j++) {
                alunos[j] = alunos[j + 1];
            }
            (*total_alunos)--;
            printf("Aluno removido com sucesso.\n");
            return;
        }
    }
    printf("Aluno não encontrado.\n");
}

void listar_alunos(Aluno alunos[], int total_alunos) {
    printf("Lista de Alunos:\n");
    for (int i = 0; i < total_alunos; i++) {
        printf("CPF: %s, Nome: %s, Sexo: %c, Data de Nascimento: %s\n",
               alunos[i].cpf, alunos[i].nome, alunos[i].sexo, alunos[i].data_nascimento);
    }
}

void cadastrar_professor(Professor professores[], int *total_professores) {
    if (*total_professores >= MAX_PROFESSORES) {
        printf("Capacidade máxima de professores atingida.\n");
        return;
    }

    printf("Digite o CPF do professor: ");
    scanf("%s", professores[*total_professores].cpf);
    printf("Digite o nome do professor: ");
    scanf("%s", professores[*total_professores].nome);
    printf("Digite o sexo do professor (M/F): ");
    scanf(" %c", &professores[*total_professores].sexo);
    printf("Digite a data de nascimento do professor (DD/MM/AAAA): ");
    scanf("%s", professores[*total_professores].data_nascimento);

    professores[*total_professores].total_alunos = 0; 

    (*total_professores)++;
}

void remover_professor(Professor professores[], int *total_professores, char cpf[]) {
    for (int i = 0; i < *total_professores; i++) {
        if (strcmp(professores[i].cpf, cpf) == 0) {
            for (int j = i; j < *total_professores - 1; j++) {
                professores[j] = professores[j + 1];
            }
            (*total_professores)--;
            printf("Professor removido com sucesso.\n");
            return;
        }
    }
    printf("Professor não encontrado.\n");
}

void listar_professores(Professor professores[], int total_professores) {
    printf("Lista de Professores:\n");
    for (int i = 0; i < total_professores; i++) {
        printf("CPF: %s, Nome: %s, Sexo: %c, Data de Nascimento: %s\n",
               professores[i].cpf, professores[i].nome, professores[i].sexo, professores[i].data_nascimento);
    }
}

void cadastrar_exercicio(Exercicio exercicios[], int *total_exercicios) {
    if (*total_exercicios >= MAX_EXERCICIOS) {
        printf("Capacidade máxima de exercícios atingida.\n");
        return;
    }

    printf("Digite o ID do exercício: ");
    scanf("%d", &exercicios[*total_exercicios].id);
    printf("Digite o nome do exercício: ");
    scanf("%s", exercicios[*total_exercicios].nome);
    printf("Digite alguma observação para o exercício: ");
    scanf(" [^\n]", exercicios[*total_exercicios].observacao);

    (*total_exercicios)++;
}

void remover_exercicio(Exercicio exercicios[], int *total_exercicios, int id) {
    for (int i = 0; i < *total_exercicios; i++) {
        if (exercicios[i].id == id) {
            for (int j = i; j < *total_exercicios - 1; j++) {
                exercicios[j] = exercicios[j + 1];
            }
            (*total_exercicios)--;
            printf("Exercício removido com sucesso.\n");
            return;
        }
    }
    printf("Exercício não encontrado.\n");
}

void listar_exercicios(Exercicio exercicios[], int total_exercicios) {
    printf("Lista de Exercícios:\n");
    for (int i = 0; i < total_exercicios; i++) {
        printf("ID: %d, Nome: %s, Observação: %s\n",
               exercicios[i].id, exercicios[i].nome, exercicios[i].observacao);
    }
}

void adicionar_treino(Treino treinos[], int *total_treinos, Aluno *aluno, Exercicio *exercicios[], int total_exercicios) {
    if (*total_treinos >= MAX_TREINOS) {
        printf("Capacidade máxima de treinos atingida.\n");
        return;
    }

    treinos[*total_treinos].aluno = aluno;
    for (int i = 0; i < total_exercicios; i++) {
        treinos[*total_treinos].exercicios[i] = exercicios[i];
    }
    treinos[*total_treinos].total_exercicios = total_exercicios;

    (*total_treinos)++;
    printf("Treino adicionado com sucesso.\n");
}

void listar_treinos(Treino treinos[], int total_treinos) {
    printf("Lista de Treinos:\n");
    for (int i = 0; i < total_treinos; i++) {
        printf("Treino para o aluno: %s\n", treinos[i].aluno->nome);
        printf("Exercícios:\n");
        for (int j = 0; j < treinos[i].total_exercicios; j++) {
            printf("  - %s\n", treinos[i].exercicios[j]->nome);
        }
    }
}

int main() {
    int total_alunos = 0, total_professores = 0, total_exercicios = 0, total_treinos = 0;
    Aluno alunos[MAX_ALUNOS];
    Professor professores[MAX_PROFESSORES];
    Exercicio exercicios[MAX_EXERCICIOS];
    Treino treinos[MAX_TREINOS];

    
    int opcao;
    do {
        printf("\n---- BEM VINDO A ERYC GYM ----\n");
        printf("\n=== Menu Principal ===\n");
        printf("1. Cadastrar Aluno\n");
        printf("2. Remover Aluno\n");
        printf("3. Listar Alunos\n");
        printf("4. Cadastrar Professor\n");
        printf("5. Remover Professor\n");
        printf("6. Listar Professores\n");
        printf("7. Cadastrar Exercício\n");
        printf("8. Remover Exercício\n");
        printf("9. Listar Exercícios\n");
        printf("10. Adicionar Treino\n");
        printf("11. Listar Treinos\n");
        printf("12. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrar_aluno(alunos, &total_alunos);
                break;
            case 2: {
                char cpf[12];
                printf("Digite o CPF do aluno a ser removido: ");
                scanf("%s", cpf);
                remover_aluno(alunos, &total_alunos, cpf);
                break;
            }
            case 3:
                listar_alunos(alunos, total_alunos);
                break;
            case 4:
                cadastrar_professor(professores, &total_professores);
                break;
            case 5: {
                char cpf[12];
                printf("Digite o CPF do professor a ser removido: ");
                scanf("%s", cpf);
                remover_professor(professores, &total_professores, cpf);
                break;
            }
            case 6:
                listar_professores(professores, total_professores);
                break;
            case 7:
                cadastrar_exercicio(exercicios, &total_exercicios);
                break;
            case 8: {
                int id;
                printf("Digite o ID do exercício a ser removido: ");
                scanf("%d", &id);
                remover_exercicio(exercicios, &total_exercicios, id);
                break;
            }
            case 9:
                listar_exercicios(exercicios, total_exercicios);
                break;
            case 10: {
                char cpf_aluno[12];
                printf("Digite o CPF do aluno para o treino: ");
                scanf("%s", cpf_aluno);
                Aluno *aluno = NULL;
                for (int i = 0; i < total_alunos; i++) {
                    if (strcmp(alunos[i].cpf, cpf_aluno) == 0) {
                        aluno = &alunos[i];
                        break;
                    }
                }
                if (aluno == NULL) {
                    printf("Aluno não encontrado.\n");
                    break;
                }
                printf("Digite o número de exercícios para o treino: ");
                int num_exercicios;
                scanf("%d", &num_exercicios);
                Exercicio *exercicios_treino[num_exercicios];
                for (int i = 0; i < num_exercicios; i++) {
                    int id;
                    printf("Digite o ID do exercício %d: ", i + 1);
                    scanf("%d", &id);
                    for (int j = 0; j < total_exercicios; j++) {
                        if (exercicios[j].id == id) {
                            exercicios_treino[i] = &exercicios[j];
                            break;
                        }
                    }
                }
                adicionar_treino(treinos, &total_treinos, aluno, exercicios_treino, num_exercicios);
                break;
            }
            case 11:
                listar_treinos(treinos, total_treinos);
                break;
            case 12:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 12);

    return 0;
}


    
   







