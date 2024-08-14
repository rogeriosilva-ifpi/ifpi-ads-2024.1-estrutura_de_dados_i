#include <stdio.h>
#include <stdlib.h>
#include "treino.h"


Treino *novoTreino(){
    Treino *novoTreino = (Treino *) malloc(sizeof(Treino));
    novoTreino->qtdExercicios = 0;
}

void cadastrarExercicio(Treino *treino, Exercicios *exercicio){
    if(treino->qtdExercicios > capacidadeMaximaExercicios){
        printf("\n > Limite de Exercicios atingido!");
        return 0;
    }

    treino->exercicios[treino->qtdExercicios] = *exercicio;
    treino->qtdExercicios++;

    printf("\n> Exercício cadastrado com sucesso!");
    
    return 1;
}