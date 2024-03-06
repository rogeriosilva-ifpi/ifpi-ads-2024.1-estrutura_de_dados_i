#include <stdio.h>

void calcular_media(float, float, float, float *, char *);

int main() {
    float nota1, nota2, nota3, media;
    char situacao;

    printf("Favor digite as 3 nota(n1 n2 n3): ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    calcular_media(nota1, nota2, nota3, &media, &situacao);

    printf("Sua média é %.2f\n", media);
    printf("Sua situação é %c %\n", situacao);
    return 0;
}

void calcular_media(float n1, float n2, float n3, float *m, char *sit) {
    *m = (n1 + n2 + n3) / 3;
    // Descobrir e atualizar a situacao
    if (*m >= 7) {
        *sit = 'A';
    } else if (*m < 4) {
        *sit = 'R';
    } else {
        *sit = 'P';
    }
}