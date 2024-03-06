#include <stdio.h>

int main() {
    printf("\n CONTADOR\n");

    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    int contador = 1;
    while (contador <= numero) {
        printf("%d\n", contador);
        contador++;
    }

    printf("Fim do Loop.\n\n");
}