#include <stdio.h>
#include "q1.h"

void computaExibeResposta(float n1, float n2, Div *div) {
    div->divReal = n1 / n2;
    div->divInteira = (int) n1 / (int) n2 ;
    div->resto = (int) n1 % (int) n2;

    printf("Resultado da divisao real: %f\n", div->divReal);
    printf("Resultado da divisao inteira: %d\n", div->divInteira);
    printf("Resto: %.2f\n", div->resto);
}