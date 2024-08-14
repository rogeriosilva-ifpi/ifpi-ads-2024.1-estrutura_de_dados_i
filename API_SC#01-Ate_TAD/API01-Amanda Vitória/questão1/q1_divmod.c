#include <stdio.h>
#include <stdlib.h>
#include "q1_divmod.h"

typedef struct {
    float div_real;
    float div_int;
    float resto;
} Operacoes;


int main() {
    Operacoes *p;

    p = (float *) malloc((10 * sizeof(float)));

    float num1, num2;
    float resultados;

    printf("Num1: ");
    scanf("%f", &num1);

    printf("Num2: ");
    scanf("%f", &num2);

    calcular_operacoes(num1, num2, p);


}