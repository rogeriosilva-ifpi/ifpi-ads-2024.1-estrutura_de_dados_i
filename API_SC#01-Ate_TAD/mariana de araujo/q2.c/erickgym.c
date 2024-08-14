#include <stdlib.h>
#include <stdio.h>
#include "erickgym.h"


 Professor *novoProfessor(){
    Professor *professor = (Professor*)malloc(sizeof(Professor));

    return professor;
}

Aluno *novoAluno(){
    Aluno *aluno = (Aluno*)malloc(sizeof(Aluno));
    
    aluno->professor = novoProfessor();

    return aluno;
}



void pedirDadosAluno(Aluno *aluno){
    Aluno *aluno(Aluno);

    printf("Digite o CPF do aluno:\n");
    scanf("%d", &aluno ->cpf);

    printf("Digite o nome do aluno:\n");
    scanf("%s", aluno->nome);

    printf("Digite o sexo do aluno (M ou F):\n");
    scanf("%s", aluno->sexo);

    printf("Digite a data de aniversario do aluno DD/MM/AAAA:\n");
    scanf("%s", aluno->data_nascimento);

    printf("Digite o nome do professor desse aluno:\n");
    scanf("%s", aluno->professor->nome);

}

/*
void ListarAluno(Aluno *aluno, int qtd_alunos){
    for(int i=0; i>qtd_alunos; i++){
    printf("Aluno:\n Nome: "%s" ", aluno.nome[i]);

    }
}
*/



