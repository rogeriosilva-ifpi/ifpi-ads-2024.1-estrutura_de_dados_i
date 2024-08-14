#include <stdio.h>

#include "ponto.h"

void menu();

int main() {
    Ponto *p1, *p2;
    float x, y;
    menu();
    int opcao;
    scanf("%d", &opcao);

    while (opcao != 0) {
        if (opcao == 1) {
            printf("Digite X Y: ");
            scanf("%f %f", &x, &y);
            p1 = criar(x, y);
        } else if (opcao == 2) {
            printf("Digite X Y: ");
            scanf("%f %f", &x, &y);
            p2 = criar(x, y);
        } else if (opcao == 3) {
            acessa(p1, &x, &y);
            printf("Ponto P1(%.1f, %.1f)", x, y);
        } else if (opcao == 4) {
            acessa(p2, &x, &y);
            printf("Ponto P2(%.1f, %.1f)", x, y);
        } else if (opcao == 5) {
            liberar(p1);
            liberar(p2);
            printf("Pontos com memória liberadas!");
        }

        menu();
        scanf("%d", &opcao);
    }
}

void menu() {
    char opcoes[] =
        ">>> Ponto&Ponto <<<\n \
        1 - Criar Ponto P1\n \
        2 - Criar Ponto P2\n \
        3 - Mostrar Ponto P1\n \
        4 - Mostrar Ponto P2\n \
        5 - Liberar Pontos\n \
        0 - Sair\n \
        >>> ";

    printf("%s", opcoes);
}