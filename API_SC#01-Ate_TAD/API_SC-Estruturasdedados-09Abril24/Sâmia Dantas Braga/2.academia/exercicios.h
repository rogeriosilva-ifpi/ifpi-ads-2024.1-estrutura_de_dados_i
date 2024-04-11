#ifndef EXERCICIOS_H
#define EXERCICIOS_H

typedef struct exercicios
{
    int id;
    char nome[120];
    char observacao[200];
    
    
}Exercicios;

//Protótipos das funções
Exercicios *novoExercicio();
void dadosExercicios(Exercicios *exercicio);

#endif