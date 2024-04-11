#include <stdio.h>
#include <stdlib.h>

typedef struct divmod {
    //float div_real;
    float div_inteira;
    //float mod;
} Divisao;

void calcular_operacoes(float n1, float n2, Divisao *divisao);

int main() {
    Divisao *divisao;
    float valor1, valor2;

    printf("Primeiro valor: ");
    scanf("%f", &valor1);
    printf("Segundo valor: ");
    scanf("%f", &valor2);

    printf("%f", divisao->div_inteira);

    return 0;
}

void calcular_operacoes(float n1, float n2, Divisao *divisao) {
    divisao = (Divisao *)malloc(sizeof(Divisao));
    divisao->div_inteira = n1 / n2;
}