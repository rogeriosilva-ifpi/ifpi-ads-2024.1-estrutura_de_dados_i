#include <stdio.h>
#include <stdlib.h>
#include "dados.h"

Dados *novosDados(){
    Dados *novosDados = (Dados *) malloc(sizeof(Dados));
}

void calcularDivisão(int x, int y, Dados *dados){

    float divisaoReal = x / y;
    int divisaoInteira = x / y;
    int resto = x % y;

    dados->divisaoReal = divisaoReal;
    dados->divisaoInteira = divisaoInteira;
    dados->resto = resto;

}

void mostrarResultado(Dados *dados){
    printf("\n------------------------");
    printf("\nDivisão Real: %.2f", dados->divisaoReal);
    printf("\nDivisão Inteira: %d", dados->divisaoInteira);
    printf("\nResto: %d\n", dados->resto);
    printf("------------------------\n");
}