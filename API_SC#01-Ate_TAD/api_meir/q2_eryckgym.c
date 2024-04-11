#include <stdio.h>
#include <string.h>
#include "q2_eryckgym.h"

int main(){
    int A, P, E, ET;
    printf("\nCapacidade maxima de alunos: ");
    scanf("%d", &A);
    printf("\nCapacidade maxima de professores: ");
    scanf("%d", &P);
    printf("\nCapacidade maxima de exercicios disponiveis: ");
    scanf("%d", &E);
    printf("\nQuantidade de exercicios em um treino: ");
    scanf("%d", &ET);

    Professor *professores = (Professor *)malloc(P * sizeof(Professor));
    Aluno *alunos = (Aluno *)malloc(A * sizeof(Aluno));
    Exercicio *exercicios = (Exercicio *)malloc(E * sizeof(Exercicio));

    int qt_professores = 0;
    int qt_alunos = 0;
    int qt_exercicios = 0;

    enter_to_continue();
    int opcao;
    char menu = "\n---------- MENU ----------\n1 - Cadastrar\n2 - Remover\n3 - Listar\n\n0 - Sair\n\n>>>> ";
    char cadastro = "\n---------- CADASTRO --------- \n1 - Professor\n2 - Aluno\n3 - Exercicios\n\n>>>> ";
    char remover = "\n---------- REMOVER ---------- \n1 - Professor\n2 - Aluno\n3 - Exercicios\n\n>>>> ";
    char listar = "\n---------- LISTAR ---------- \n1 - Professor\n2 - Aluno\n3 - Exercicios\n\n>>>> ";
    scanf("%d", &opcao);

    while(opcao != 0){
        if(opcao == 1){
            enter_to_continue();
            int op;
            printf(cadastro);
            scanf("%d", &op);
            enter_to_continue();
            while(op != 1 && op != 2 && op != 3 && op != 4){
                printf(cadastro);
                scanf("%d", &op);
            }
                if(op == 1){
                    cadastrar_professores(professores, &qt_professores);
                }else if(op == 2){
                    cadastrar_alunos(alunos, &qt_alunos);
                }else if(op == 3){
                    cadastrar_exercicios(exercicios, &qt_exercicios);
                }else if(op == 4){
                    //cadastrar_treinos
                }
        }else if(opcao == 2){
            enter_to_continue();
            int op;
            printf(remover);
            scanf("%d", &op);
            enter_to_continue();
            while(op != 1 && op != 2 && op != 3 && op != 4){
                printf(remover);
                scanf("%d", &op);
            }
                if(op == 1){
                    //remover PROF
                }else if(op == 2){
                    //remover alu
                }else if(op == 3){
                    //remover exer
                }else if(op == 4){
                    //remover treino
                }
        }else if(opcao == 3){
            enter_to_continue();
            int op;
            printf(listar);
            scanf("%d", &op);
            enter_to_continue();
            while(op != 1 && op != 2 && op != 3 && op != 4){
                printf(listar);
                scanf("%d", &op);
            }
                if(op == 1){
                    //listar PROF
                }else if(op == 2){
                    //listar alu
                }else if(op == 3){
                    //listar exer
                }else if(op == 4){
                    //listar treino
                }
        }
        
        enter_to_continue();
        printf(menu);
        scanf("%d", &opcao);
    }

    free(exercicios);
    free(alunos);
    free(professores);
    return 0;
}

void enter_to_continue(){
    printf("\n<enter> to continue...");
    getchar(); 
    while (getchar() != '\n');
    system("cls");
}

//PROFESSORES

void cadastrar_professores(Professor *professores, int *qt_professores){
    Professor novoProfessor;
    printf("\nNome: ");
    scanf(" %120[^\n]", &novoProfessor.nome);
    printf("\nCPF (apenas numeros): ");
    scanf(" %12[^\n]", &novoProfessor.cpf);
    printf("\nSexo (M ou F): ");
    scanf(" %2[^\n]", &novoProfessor.sexo);

    int dia, mes, ano;
    printf("Data de nascimento (DD/MM/AAAA): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    sprintf(&novoProfessor.data_nascimento, "%02d/%02d/%04d", dia, mes, ano);

    professores[*qt_professores] = novoProfessor;
    (*qt_professores)++;
}

void remover_professores(Professor *professores, int *qt_professores, int id){
    
}

void listar_professores(Professor *professores, int *qt_professores){

}

//ALUNOS

void cadastrar_alunos(Aluno *alunos, int *qt_alunos){
    Aluno novoAluno;
    printf("\nNome: ");
    scanf(" %120[^\n]", &novoAluno.nome);
    printf("\nCPF (apenas numeros): ");
    scanf(" %12[^\n]", &novoAluno.cpf);
    printf("\nSexo (M ou F): ");
    scanf(" %2[^\n]", &novoAluno.sexo);

    int dia, mes, ano;
    printf("Data de nascimento (DD/MM/AAAA): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    sprintf(&novoAluno.data_nascimento, "%02d/%02d/%04d", dia, mes, ano);

    alunos[*qt_alunos] = novoAluno;
    (*qt_alunos)++;
}

void remover_alunos(Aluno *alunos, int *qt_alunos, int id){
    
}

void listar_alunos(Aluno *alunos, int qt_alunos){

}

//EXERCICIOS

void cadastrar_exercicios(Exercicio *exercicios, int *qt_exercicios){
    Exercicio novoExercicio;
    printf("\nID: ");
    scanf("%d", &novoExercicio.id);
    printf("\nNome: ");
    scanf(" %50[^\n]", &novoExercicio.nome);
    printf("\nObservacao: ");
    scanf(" %200[^\n]", &novoExercicio.observacao);

    exercicios[*qt_exercicios] = novoExercicio;
    (*qt_exercicios)++;
}

void remover_exercicios(Exercicio *exercicios, int *qt_exercicios){
    
}

void listar_exercicios(Exercicio *exercicios, int *qt_exercicios){
    printf("\n--------- EXERCICIOS ---------");
    printf("\nNome - ID, Observacao\n");
    for(int i = 0; i < (*qt_exercicios); i++){
        printf("\n%s", exercicios[*qt_exercicios].nome);
        printf("\n%d", exercicios[*qt_exercicios].id);
        printf("\n%s", exercicios[*qt_exercicios].observacao);
    }
}

//TREINOS

void cadastrar_treinos(Treino *treinos, int *qt_treinos){

}

void remover_treinos(Treino *treinos, int *qt_treinos, int id_aluno){
    
}

void listar_treinos(Treino *treinos, int *qt_treinos, int id_aluno){

}
