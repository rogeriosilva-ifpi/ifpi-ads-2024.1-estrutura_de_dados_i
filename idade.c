#include <stdio.h>

// compilar: $ gcc idade.c -o rogerio
// executar: $ ./rogerio

int main() {
    int ano;
    char nome[10];
    float altura;

    printf("Qual seu nome: ");
    scanf("%s", nome);

    printf("Em qual ano você nasceu: ");
    scanf("%d", &ano);

    printf("Qual sua altura: ");
    scanf("%f", &altura);

    int idade = 2024 - ano;

    printf("Que legal %s, em 2024 você terá %d anos.\n", nome, idade);
    printf("A sua altura é: %.1f m\n", altura);

    return 0;
}