#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "q1.h"

int main() {
    float n1, n2;
    Div *div = (Div *)malloc(sizeof(Div));

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    computaExibeResposta(n1, n2, div);

    return 0;
}
