#include <stdio.h>
#include "q1_divmod.h"

int main(){
    float valor1, valor2;

    printf("\nDigite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    struct Divisao novaDivisao;
    Resultado(valor1, valor2, &novaDivisao);

    printf("\n-----------------------------------\n");
    printf("\nResultado divisao inteira: %d", novaDivisao.divisaoInteira);
    printf("\nResto: %d", novaDivisao.resto);
    printf("\nResultado divisao real: %.2f\n\n", novaDivisao.divisaoReal);

    return 0;
}

void Resultado(float valor1, float valor2, struct Divisao *novaDivisao){
    novaDivisao->divisaoInteira = valor1/valor2;
    novaDivisao->resto = valor1 - (novaDivisao->divisaoInteira * valor2);
    novaDivisao->divisaoReal = (valor1/valor2);
}