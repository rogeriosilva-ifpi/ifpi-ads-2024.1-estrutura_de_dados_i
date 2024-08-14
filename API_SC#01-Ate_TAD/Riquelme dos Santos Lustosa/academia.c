#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "aluno.h"
#include "professor.h"
#include "exercicio.h"



void add_aluno(Professor *professor, Aluno *aluno);
void listarAlunos (Aluno *aluno, int qtdAlunos);

char menu[] = "\n<<<<<< ERICK GYM >>>>>>>\n--------- AREA DO ALUNO --------\n1. Adicionar Aluno\n2. Remover Aluno\n3. Listar Alunos\n------- AREA DO PROFESSOR ---------\n4. Adicionar Professor0\n5. Remover Professor\n6. Listar Professores - Sair\n7. Adicionar Exercicio\n8. Remover Exercicio\n9. Listar Exercicios Selecione a opcao >>> ";
    int opcao;

    printf("%s", menu);
    scanf("%f", &opcao);

    while (opcao != 0){

        }if (opcao == 1) {
            Aluno professor;
            printf("CPF: ");
            scanf("%s", &aluno.cpf);
            printf("Nome: ");
            scanf("%s", &aluno.nome);
            printf("Sexo: ");
            scanf("%s", &aluno.sexo);
            printf("Data de Nascimento: ");
            scanf("%s", &aluno.data_nascimento);
            add_aluno()
            qtdAlunos++;

        } else if (opcao == 2) {
            Aluno aluno;
            printf("CPF: ");
            scanf("%s", &aluno.cpf);
            printf("Nome: ");
            scanf("%s", &aluno.nome);
            printf("Sexo: ");
            scanf("%s", &aluno.sexo);
            remove_aluno(&alunos[qtdAlunos], cpf, &nome);
            qtdAlunos--;


        } else if (opcao == 3) {
            listarAlunos(alunos, qtdAlunos);

        } else if (opcao == 4) {
            Professor professor;
            printf("CPF: ");
            scanf("%d", &professor.cpf);
            printf("Nome: ");
            scanf("%s", &professor.nome);
            printf("Sexo: ");
            scanf("%s", &professor.sexo);
            printf("Data de Nascimento: ");
            scanf("%s", &professor.data_nascimento);
            qtdProfessores++;

        } else if (opcao == 5) {
            Professor professor;
            printf("CPF: ");
            scanf("%d", &professor.cpf);
            printf("Nome: ");
            scanf("%s", &professor.nome);
            printf("Sexo: ");
            scanf("%s", &professor.sexo);
            printf("Data de Nascimento: ");
            scanf("%s", &professor.data_nascimento);
            qtdAlunos--;

        } else if (opcao == 6) {
            listarProfessores(professores, qtdProfessores);

        } if else (opcao == 7) {
            Exercicio professor;
            printf("Id: ");
            scanf("%f", &exercicio.id);
            printf("Nome: ");
            scanf("%s", &exercicio.nome);
            printf("Observacao: ");
            scanf("%s", &exercicio.observacao);
            add_exercicio()
            qtdExercicios++;
        }




void add_aluno(Professor *professor, Aluno *aluno) {
    professor->alunos[professor->num_alunos++] = *aluno;
}

void listarAlunos (Aluno *aluno, int qtdAlunos){
    printf("<<<<< Alunos Cadastrados >>>>>>\n");

    for (int i = 0; i < qtdContas; i++){
        printf("CPF: %s - Nome: %s - Sexo: %s - Data de Nascimento: %s\n", Aluno[i].cpf, Aluno[i].nome, Aluno[i].sexo, Aluno[i].data_nascimento);
    }
    
}