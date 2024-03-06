#include <stdio.h>

int main() {
    float peso;
    printf("Digite o seu imc: ");
    scanf("%f", &peso);

    if (peso <= 18.5) {
        printf("Abaixo do peso\n");
    } else if (peso >= 18.5 && peso <= 24.9) {
        printf("Peso ideal\n");
    } else if (peso >= 24.9 && peso <= 29.9) {
        printf("Levemente acima do peso\n");
    } else if (peso >= 29.9 && peso <= 34.9) {
        printf("Obesidade grau 1\n");
    } else if (peso >= 34.9 && peso <= 39.9) {
        printf("Obesidade grau 2\n");
    } else {
        printf("Obesidade grau 3\n");
    }

    printf("\n");

    return 0;
}