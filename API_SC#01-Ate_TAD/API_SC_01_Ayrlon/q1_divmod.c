#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float DivReal;
    int DivInt;
    int DivResto;

} Valores;

void dividir(float valor1, float valor2, Valores * divisao);

int main(){
    float valor1;
    float valor2;

    printf("Digite o valor 1 : ");
    scanf("%f", &valor1);
    printf("Digite o valor 2 : ");
    scanf("%f", &valor2);

    Valores * divisao;
    divisao = (Valores*) malloc(sizeof(Valores));

    dividir(valor1, valor2, divisao);

    printf("\n----- Valores -----: \n");
    printf("\nDivisao inteira : %d\n", divisao->DivInt);
    printf("\nDivisao real : %f\n", divisao->DivReal);
    printf("\nResto : %d\n", divisao->DivResto);

    free(divisao);

    return 0;
}

void dividir(float valor1, float valor2, Valores * divisao){
    divisao->DivInt = (int)valor1 / (int)valor2;
    divisao->DivReal = valor1 / valor2;
    divisao->DivResto = (int)valor1 % (int)valor2;
}