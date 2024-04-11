#include <stdio.h>
#include <stdlib.h>
#include "academia.h"
#include "aluno.h"
#include "professor.h"


Academia *novaAcademia(){
    Academia *novaAcademia = (Academia *) malloc(sizeof(Academia));
    novaAcademia->qtdAlunos = 0;
}

int adicionarAluno(Academia *academia, Aluno *aluno){
    
    if(academia->qtdAlunos > capacidadeMaximaAlunos){
        printf("\n > Limite de Alunos atingido!");
        return 0;
    }

    academia->alunos[academia->qtdAlunos] = *aluno;
    academia->qtdAlunos++;

    printf("\n> Aluno cadastrado com sucesso!");
    
    return 1;
}
