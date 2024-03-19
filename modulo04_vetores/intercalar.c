#include <stdio.h>

void preencher_vetor(int n, char *vetor);
void intercalar_vetor(int n, char *v1, char *v2, char *v3);
void mostrar_vetor(int n, char *vetor);

int main() {
    int n;
    printf("Favor qual tamanho(n): ");
    scanf("%d", &n);

    char vetor1[n];
    char vetor2[n];

    preencher_vetor(n, vetor1);
    preencher_vetor(n, vetor2);

    char vetor3[2 * n];
    intercalar_vetor(n, vetor1, vetor2, vetor3);
    mostrar_vetor(2 * n, vetor3);

    return 0;
}

void preencher_vetor(int n, char *vetor) {
    printf("Vamos agora receber %d elementos.\n", n);
    for (int i = 0; i < n; i++) {
        printf("> %d: ", i + 1);
        scanf("%s", &vetor[i]);
    }
    printf("Vetor preenchido!\n");
}

void mostrar_vetor(int n, char *vetor) {
    printf("Mostrando Vetor de %d elementos\n", n);
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%c, ", vetor[i]);
    }
    printf("\b\b]\n");
    printf("Exibido com sucesso!\n");
}

void intercalar_vetor(int n, char *v1, char *v2, char *v3) {
    int i = 0;
    int j = 0;

    for (int k = 0; k < 2 * n; k++) {
        if (k % 2 != 0) {
            v3[k] = v1[i];
            i++;
        } else {
            v3[k] = v2[j];
            j++;
        }
    }

    printf("Intercalação Ok!\n");
}
