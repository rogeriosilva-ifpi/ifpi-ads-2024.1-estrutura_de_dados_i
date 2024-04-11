#include <stdio.h>

typedef struct{
float divisao_real;
int divisao_inteira;
int resto_numero;

}Resultado_operacao;
void calculo(int numero_1, int numero_2, float * , int * , int *, Resultado_operacao*resultado_numero);
int main(){
    Resultado_operacao * resultado_numero;

    int numero_1, numero_2;
    printf("Digite os seus dois numeros que você quer:");
   scanf("%d %d", &numero_1 , &numero_2);

   printf("Divisao real do numero é: %.2f" ,resultado_numero->divisao_real );
 printf("Divisao inteira do numero é: %d" ,resultado_numero->divisao_inteira );
 printf("O resto que sobrou do numero é: %f" ,resultado_numero->resto_numero );

return 0;
}

void calculo(int numero_1, int numero_2, float * , int * , int *, Resultado_operacao*resultado_numero)
{
    
    float divisao_real = numero_1/numero_2;
    int divisao_inteira = numero_1/numero_2;
    int resto_numero = numero_1%numero_2;


    resultado_numero->divisao_inteira = divisao_inteira;
    resultado_numero->divisao_real = divisao_real;
    resultado_numero->resto_numero = resto_numero;  
}