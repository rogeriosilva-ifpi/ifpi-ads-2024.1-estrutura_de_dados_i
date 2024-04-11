#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float divisaoReal;
    float divisaoInteira;
    int Resto;
} Divisao;

void calculoDivisor(Divisao *divisao, int divisor, int dividendo);
void mostrarValor(Divisao *divisao, int divisor, int dividendo);

int main(){
    Divisao *divisao;
    divisao = (Divisao *)malloc(sizeof(Divisao));
    int divisor;
    int dividendo;

    calculoDivisor(divisao, divisor, dividendo);
    
    return 0;
}

void calculoDivisor(Divisao *divisao, int divisor, int dividendo){
    printf("Vamos dividirr \n");
    printf("Didite o Dividendo \n>> ");
    scanf("%d", &dividendo);
    printf("Didite o Divisor \n>> ");
    scanf("%d", &divisor);
    
    divisao->divisaoReal = dividendo / divisor;
    divisao->divisaoInteira = dividendo / divisor;
    int resto = dividendo % divisor;

    divisao->divisaoReal = resto;

    mostrarValor(divisao, divisor, dividendo);

}

void mostrarValor(Divisao *divisao, int divisor, int dividendo){

    printf("Resultado\n");

    printf(">> %d / %d = \n", dividendo, divisor);
    printf("Divisao REAL \n>> ");
    printf("%f\n", divisao->divisaoReal);
    printf("Divisao INTEIRA \n>> ");
    printf("%.0f\n", divisao->divisaoInteira);
    printf("RESTO da Divisao \n>> ");
    printf("%d\n", divisao->Resto);
    
}