#include <stdio.h>
#include <stdlib.h>
#include "dados.h"


int main(){

    Dados *dados = novosDados();

    int x;
    int y;

    printf("Informe o valor de x: ");
    scanf("%d", &x);

    printf("Informe o valor de y: ");
    scanf("%d", &y);

    calcularDivisão(x, y, dados);

    mostrarResultado(dados);
}