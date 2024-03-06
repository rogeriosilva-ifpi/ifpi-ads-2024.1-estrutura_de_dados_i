#include <stdio.h>

int main() {
    printf("De Maior ou De Menor??");

    int idade;
    printf("Por gentileza, sua idade: ");
    scanf("%d", &idade);

    int resultado;

    resultado = idade >= 18 ? 1 : 0;

    printf("Resultado é %d\n", resultado);
}