#include <stdio.h>

typedef struct divisao {
    float divisaoReal;
    int divisaoInteira;
    int resto;
} Divisao;

void expressao(Divisao *divisao, int x, int y);


int main(){
    Divisao *divisao;
    int *x, *y;

    printf("----- DIVMOD -----");

    printf("Valor de X: \n");
    scanf("%d", x);

    printf("Valor de Y: \n");
    scanf("%d", y);

    expressao(Divisao *divisao, int x, int y);
    
}

void expressao(Divisao *divisao, int x, int y){
    float divisao_real = x/y;
    int divisao_inteira = (x/y) / 10;
    int resto = x%y;

    // divisao->divisaoReal = divisao_real;
    // divisao->divisaoInteira = divisao_inteira;
    // divisao->resto = resto;

    printf("Divisao Real: %f", divisao_real);
    printf("Divisao Inteira: %d", divisao_inteira);
    printf("Resto: %d", resto);
}

