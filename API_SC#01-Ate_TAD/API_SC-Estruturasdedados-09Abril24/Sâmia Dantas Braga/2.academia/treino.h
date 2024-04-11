#ifndef TREINO_H
#define TREINO_H
#include "exercicios.h"
#define capacidadeMaximaExercicios 100

typedef struct treino
{
    Exercicios *exercicios;
    int qtdExercicios;

}Treino;

//Protótipos das funções
Treino *novoTreino();

#endif