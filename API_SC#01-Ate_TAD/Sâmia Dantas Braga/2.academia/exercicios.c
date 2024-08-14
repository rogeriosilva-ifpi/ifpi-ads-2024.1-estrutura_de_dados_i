#include <stdio.h>
#include <stdlib.h>
#include "exercicios.h"



Exercicios *novoExercicio(){
    Exercicios *novoExercicio = (Exercicios *) malloc(sizeof(Exercicios));
}

void dadosExercicios(Exercicios *exercicio){
    printf("\n----- Cadastro de Exercício -----");
    printf("\nID: ");
    scanf("%d", exercicio->id);
    printf("Nome: ");
    scanf("%s", exercicio->nome);
    printf("Observação: ");
    scanf("%s", exercicio->observacao);
    printf("\n--------------------------------\n");
    
}

