#include <stdio.h>

float calcularMedia(int tam, float* vetor);

int main() {
    float v[5];

    printf("Favor digite 5 valores, um por vez\n");
    for (int i = 0; i < 5; i++) {
        // scanf("%f", &v[i]);
        scanf("%f", v + i);
    }
    v[0] = 1000;
    *(v + 1) = 1000;

    float m = calcularMedia(5, v);

    printf("A média é %.2f\n", m);
}

float calcularMedia(int tam, float* vetor) {
    float somatorio = 0.0;
    for (int i = 0; i < tam; i++) {
        // somatorio = somatorio + vetor[i];
        somatorio = somatorio + *(vetor + i);
    }
    float media = somatorio / tam;
    return media;
}