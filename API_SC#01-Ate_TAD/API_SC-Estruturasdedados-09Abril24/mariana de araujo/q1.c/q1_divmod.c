typedef struct{
   float numero1;
   float numero2;
   float resultado;
}ResultadoDivisao;

#include <stdio.h>
#include <math.h>

void divisao(float *num1, float *num2, ResultadoDivisao);

 int main(){
    float num1;
    printf("Digite o numero 1:");
    scanf("%f", &num1);

    float num2;
    printf("Digite o numero 2:");
    scanf("%f", &num2);


    return 0;
 }


 void divisao(float *num1, float *num2, ResultadoDivisao){
   float divisao_real = *num1 / *num2;
   int divisao_inteira = floor(*num1 / *num2);
   float resto = fmod(*num1,*num2);
   
 }
 


