#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    float div_real;
    int div_int;
    int resto;
} Respostas;

void calcularRespostas(float num1, float num2, Respostas *resultado);

int main(){
    Respostas resultado;

    float num1;
    float num2;

    printf("\nDigite um primeiro número: ");
    scanf("%f", &num1);

    printf("\nDigite um segundo número: ");
    scanf("%f", &num2);

    calcularRespostas(num1, num2, &resultado);
    return 0;
}

void calcularRespostas(float num1, float num2, Respostas *resultado){
    resultado->div_real = num1/num2;
    resultado->div_int = num1/num2;
    resultado->resto = (int)num1 % (int)num2;

    printf("\nDivisão Real: %.2f", resultado->div_real);
    printf("\nDivisão inteira: %d", resultado->div_int);
    printf("\nResto: %d", resultado->resto);
    printf("\n");

}