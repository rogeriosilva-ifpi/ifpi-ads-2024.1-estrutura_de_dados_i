#include  <stdio.h>

struct Resultado{
    float divisao_real;
    int  divisao_inteira;
    int resto;
};

void  calcularDivisao(float num1, float num2, struct Resultado *resultado){
     if(num2 == 0){
        printf("Erro! Não é possível dividir por zero.\n");
        return ;
     }else{
         resultado->divisao_real = num1 / num2;
         resultado->divisao_inteira = (int)(num1 / num2);
         resultado->resto = (int) num1 % (int) num2;
     }
}

int main(){
    float n1, n2;
    struct Resultado resultado;

    printf("\nDigite o primeiro número:\n");
    scanf("%f", &n1);

    printf("\nDigite o segundo número:\n");
    scanf("%f", &n2);

    printf("\nDividindo %.2f por %.2f...\n", n1, n2);

    calcularDivisao(n1, n2, &resultado);

    printf("O quociente da divisão é: %.2f\n", resultado.divisao_real);
    printf("A divisão inteira é: %d\n", resultado.divisao_inteira);
    printf("O restante da divisão é: %d\n", resultado.resto);

    return 0;
}





