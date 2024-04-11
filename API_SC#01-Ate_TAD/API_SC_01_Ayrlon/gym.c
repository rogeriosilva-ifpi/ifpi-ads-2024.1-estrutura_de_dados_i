#include <stdio.h>
#include <stdlib.h>
#include "gym.h"


void printMenu(){
    char menu[] = "\n========= Erick Gym =========\n\n 1 - Adcionar Aluno. \n 2 - Remover Aluno \n 3 - Listar Alunos. \n 4 - Adcionar Professor. \n 5 - Remover Professor. \n 6 - Listar Professores. \n 7 - Adcionar Exercicio. \n 8 - Remover Exercicio. \n 9 - Listar Exercicios. \n 10 - Adcionar Treino. \n 11 - Remover Treino. \n 12 - Listar Treinos. \n\n >> ";

    printf("%s", menu);
}

Pessoa Novo_Aluno(){
    Pessoa aluno;
    printf("\n ----------Novo Aluno ----------\n");
    printf("\n Nome : ");
    scanf(" %120[^\n]", aluno.nome);
    printf("\n CPF : ");
    scanf(" %13[^\n]", aluno.cpf);
    printf("\n Sexo : ");
    scanf(" %13[^\n]", aluno.sexo);
    printf("\n ---- Nascimento ----");
    printf("\n Dia : ");
    scanf("%d", &aluno.DataNasc.dia);
    printf("\n Mes : ");
    scanf("%d", &aluno.DataNasc.mes);
    printf("\n Ano : ");
    scanf("%d", &aluno.DataNasc.ano);

    return aluno;
}

void listar_Alunos(Pessoa * Alunos, int qtdAlunos){
    for(int i = 0; i < qtdAlunos; i++){
        printf("\n[---------- [ Alunos ] ----------\n");
        printf("\n> Nome : %s | CPF : %s | Sexo : %s | Nascimento : %d/%2d/%d |\n", Alunos[i].nome, Alunos[i].cpf, Alunos[i].sexo, Alunos[i].DataNasc.dia, Alunos[i].DataNasc.mes, Alunos[i].DataNasc.ano);
    }

}

Pessoa Novo_Professor(){
    Pessoa professor;
    printf("\n ----------Novo Professor ----------\n");
    printf("\n Nome : ");
    scanf(" %120[^\n]", professor.nome);
    printf("\n CPF : ");
    scanf(" %13[^\n]", professor.cpf);
    printf("\n Sexo : ");
    scanf(" %13[^\n]", professor.sexo);
    printf("\n ---- Nascimento ----");
    printf("\n Dia : ");
    scanf("%d", &professor.DataNasc.dia);
    printf("\n Mes : ");
    scanf("%d", &professor.DataNasc.mes);
    printf("\n Ano : ");
    scanf("%d", &professor.DataNasc.ano);

    return professor;
}

void listar_Professores(Pessoa * Professores, int qtdProfessores){
    for(int i = 0; i < qtdProfessores; i++){
        printf("\n[---------- [ Professores ] ----------\n");
        printf("\n> Nome : %s | CPF : %s | Sexo : %s | Nascimento : %d/%2d/%d |\n", Professores[i].nome, Professores[i].cpf, Professores[i].sexo, Professores[i].DataNasc.dia, Professores[i].DataNasc.mes, Professores[i].DataNasc.ano);
    }
}

Exercicio Novo_Exercicio(){
    Exercicio exercicio;
    printf("\n ---------- Novo Exercicio ----------\n");
    printf("\n ID : ");
    scanf("%d", &exercicio.id);
    printf("\n Nome : ");
    scanf(" %100[^\n]", exercicio.nome);
    printf("\n Observacao : ");
    scanf(" %120[^\n]", exercicio.observacao);

    return exercicio;
}

void listar_Exercicios(Exercicio * Exercicios, int qtdExercicios){
    for(int i = 0; i < qtdExercicios; i++){
        printf("\n[---------- [ Exercicios ] ----------\n");
        printf("\n> Nome : %s | ID : %s | Observacao : %s |\n", Exercicios[i].nome, Exercicios[i].id, Exercicios[i].observacao);
    }
}

Treino adcionar_treino(Pessoa * Alunos, int qtdAlunos, Exercicio Exercicios, int qtdExercicios, int E){
    Treino treino;
    int cpf_do_aluno;
    int cpf_do_professor;
    printf("\n ---------- Novo Treino ----------\n");
    printf("\n Nome do aluno: ");
    scanf(" %100[^\n]", treino.aluno.nome);
    printf("\n Nome do professor: ");
    scanf(" %100[^\n]", treino.professor.nome);

    for(int i = 0; i < E; i++){
        int id_exercicio;
        printf("\n ID do exercicio : ");
        scanf("%d", &id_exercicio);
        for(int j = 0; j < qtdExercicios; j++){
            if(Exercicios.id == id_exercicio){
                treino.Exercicios[i].id = Exercicios.id;
                treino.Exercicios[i].nome= Exercicios.nome;
                treino.Exercicios[i].observacao = Exercicios.observacao;
            }
        }
    }

    return treino;
}