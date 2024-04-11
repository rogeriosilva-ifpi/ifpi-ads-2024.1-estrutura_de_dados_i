#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
    float divisao_real;
    int divisao_inteira;
    int resto;

}Resultado;


void calcular(int num_1, int num_2, Resultado *resultado);
int main(){
    Resultado * resultados;

    int  num_1, num_2;
    printf("Digite dois numeros:");
    scanf("%d %d", &num_1 , &num_2);
    resultados = malloc(sizeof(resultados));


    void calcular(int num_1, int  num_2, Resultado *resultado);

    printf("Divisao real: %.2f \n" ,resultados->divisao_real );
    printf("Divisao inteira: %d \n" ,resultados->divisao_inteira );
    printf("Divisao resto: %.2f \n" ,resultados->resto);
    return 0;
    
    free(resultados);

}

void calcular(int num_1, int num_2, Resultado * resultados){
  float divisao_real = num_1/num_2;
  int divisao_inteira = num_1/num_2;
  int resto= num_1%num_2;

  resultados->divisao_inteira= divisao_inteira;
  resultados->divisao_real = divisao_real;
  resultados->resto = resto;

}