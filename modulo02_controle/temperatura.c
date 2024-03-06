#include <stdio.h>

int main() {
    printf("----- Temperatura THE -----\n");

    float temperatura;
    printf("Qual a temperatura agora? ");
    scanf("%f", &temperatura);

    printf("Temperatura em THE: %.1f graus C\n", temperatura);

    if (temperatura < 20) {
        printf("O Tempo está FRIO.");
    } else if (temperatura < 30) {
        printf("O Tempo está AGRADÁVEL");
    } else {
        printf("O Tempo está QUENTE!");
    }

    printf("\n");
    return 0;
}