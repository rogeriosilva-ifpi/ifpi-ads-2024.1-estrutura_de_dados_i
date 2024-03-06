#include <stdio.h>

// Protótipo das funções
float calcular_imc(float peso, float altura);

int main() {
    float peso, altura;
    printf("Por gentileza, Peso e Altura: ");
    scanf("%f %f", &peso, &altura);

    float meu_imc = calcular_imc(peso, altura);

    printf("Seu IMC é %.1f", meu_imc);

    return 0;
}

float calcular_imc(float peso, float altura) {
    return (peso) / (altura * altura);
}