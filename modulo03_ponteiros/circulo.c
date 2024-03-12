#include <stdio.h>
#define PI 3.14159265

void calculaCirculo(float, float*, float*);

int main() {
    float raio, circ, area;
    float* pcirc;
    pcirc = &circ;

    printf("Cálculo de Área\n-----------------\n");

    printf("Digite o raio(r): ");
    scanf("%f", &raio);

    // calcular área e circunferência do circulo de raio r
    calculaCirculo(raio, pcirc, &area);

    // apresentar o restulado
    printf("O Circulo de Raio %.1f tem:\nÁrea: %.1f\nCircunferência:%.1f\n", raio, area, circ);

    return 0;
}

void calculaCirculo(float r, float* circunferencia, float* area) {
    *area = PI * r * r;
    *circunferencia = 2 * PI * r;
}