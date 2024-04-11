#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//ESTRUTURAS
typedef struct aluno {
    char cpf[15]; // ddd.ddd.ddd-dd
    char nome[120];
    char sexo[2]; // M ou F
    char data_nascimento[12]; //DD/MM/AAAA
} Aluno;

typedef struct professor {
    char cpf[12];
    char nome[120];
    char sexo[10];
    char data_nascimento[12];
} Professor;

typedef struct treino {
    char exercicio[20];
} Treino;

typedef struct cadastro {
    Aluno aluno;
    Professor professor;
    Treino treino
} Cadastro;


//CHAMANDO FUNÇÕES
void cadastro(Professor *professor, Aluno *aluno, Treino *treino);
void remover();
void listar();

int main() {

// ALOCANDO MEMÓRIA PARA AS ESTRUTURAS
    Professor *professor;
    professor = (Professor *malloc(sizeof professor));

    Aluno *aluno;
    aluno = (Aluno *malloc(sizeof aluno));

    Treino *treino;
    treino = (Treino *malloc(sizeof treino));


    Cadastro *cadastro;
    cadastro = (Cadastro *malloc(sizeof cadastro));


// MENU PRINCIPAL
    char menu = "---- ERICK GYM ----\n1 - ADD\n2 - REMOVER\n3 - LISTAR\n0 - SAIR\n\nSELCIONE A OPCAO >>> ";
    int opcao;
    printf("%s", menu);
    scanf("%d", opcao);



    while (opcao != 0) {
        if (opcao == 1){
            cadastro(Professor *professor, Aluno *aluno, Treino *treino);
        }else if (opcao == 2) {
            remover();
        }else if (opcao == 3) {
            listar();
        }
    }

    return 0;
}

//FUNÇÕES

void cadastro(Professor *professor, Aluno *aluno, Treino *treino){

// MENU SECUNDÁRIO P/ CADASTRO DE PROFESSOR, ALUNO E EXERCÍCIO
    char selecionarCadastro = "---- CADASTRO NA ERICK GYM ----\n1 - ADD PROFESSOR\n2 - ADD ALUNO\n3 -ADD EXERCICIO\n0 - SAIR\n\nSELCIONE A OPCAO >>> ";
    int opcao;
    printf("%s", menu);
    scanf("%d", opcao);

    while (opcao != 0) {
        if (opcao == 1){

            //ADICIONAR PROFESSOR
            printf("Nome: \n");
            scanf("%s", professor->nome);

            printf("CPF: \n");
            scanf("%s", professor->cpf);

            printf("Sexo: \n");
            scanf("%s", professor->sexo);

            printf("Data de Nascimento: \n");
            scanf("%s", professor->data_nascimento);

        }else if (opcao == 2) {

            //ADICIONAR ALUNO
            printf("Nome: \n");
            scanf("%s", aluno->nome);

            printf("CPF: \n");
            scanf("%s", aluno->cpf);

            printf("Sexo: \n");
            scanf("%s", aluno->sexo);

            printf("Data de Nascimento: \n");
            scanf("%s", aluno->data_nascimento);

        }else if (opcao == 3) {

            //ADICIONAR EXERCÍCIO
            printf("EXERCÍCIO: \n");
            scanf("%s", treino->exercicio);

        }
    }
}


void remover() {

}

void listar(Professor *professor, Aluno *aluno, Treino *treino, int qtdProfessores,int qtdAlunos, int qtdExercicios) {
// MENU QUATERNÁRIO PARA LISTAR PROFESSOR, ALUNO E EXERCÍCIO
    char menu = "---- ERICK GYM ----\n1 - LISTAR PROFESSORES\n2 - LISTAR ALUNOS\n3 - LISTAR EXERCICIO\n0 - SAIR\n\nSELCIONE A OPCAO >>> ";
    int opcao;
    printf("%s", menu);
    scanf("%d", opcao);

    while (opcao != 0) {
        if (opcao == 1){
            printf("LISTA DE PROFESSORES\n");
            for (int i = 0; i < qtdProfessores; i++){
                professor[i].nome;
                professor[i].cpf;
                professor[i].sexo;
                professor[i].data_nascimento;
            }
        }else if (opcao == 2) {
            printf("LISTA DE ALUNOS\n");
            for (int i = 0; i < qtdAlunos; i++){
                aluno[i].nome;
                aluno[i].cpf;
                aluno[i].sexo;
                aluno[i].data_nascimento;
            }
        }else if (opcao == 3) {
            printf("LISTA DE EXERCICIOS\n");
            for (int i = 0; i < qtdExercicios; i++){
                treino[i].exercicio;
            }
        }
    }
}