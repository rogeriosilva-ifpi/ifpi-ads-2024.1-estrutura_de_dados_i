#include <stdio.h>

void inverter(int *p1, int *p2);

int main(void) {
    int num1, num2;
    printf("Digite dois números: ");
    scanf("%d %d", &num1, &num2);

    printf("\nNumero 1: %d \nNumero 2: %d\n", num1, num2);
    inverter(&num1, &num2);

    printf("\nNumero 1: %d \nNumero 2: %d\n", num1, num2);
}

void inverter(int *p1, int *p2) {
    int temporario = *p2;
    *p2 = *p1;
    *p1 = temporario;
}