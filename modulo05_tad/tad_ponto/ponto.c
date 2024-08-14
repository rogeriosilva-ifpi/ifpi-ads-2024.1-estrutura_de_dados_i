#include "ponto.h"

#include <stdlib.h>

Ponto* criar(float x, float y) {
    Ponto* ponto = (Ponto*)malloc(sizeof(Ponto));
    ponto->x = x;
    ponto->y = y;

    return ponto;
}

void liberar(Ponto* ponto) {
    free(ponto);
}

void acessa(Ponto* ponto, float* x, float* y) {
    *x = ponto->x;
    *y = ponto->y;
}