#include <stdio.h> 

   struct Resultados {
     float divisao_real;
     int divisao_inteira;
     int resto;
   };

   void calcular_resultados (int num1, int num2, struct Resultados *resultados) {
    
     resultados->divisao_real = (float)num1 / num2; 
     resultados->divisao_inteira = num1 / num2; 
     resultados->resto = num1 % num2;

   }

 int main () {
    int num1, num2;
    struct Resultados resultados;

    printf("Digite o primeiro Numero: " ); 
    scanf("%d", &num1);

    printf("Digite o segundo Numero: ");
    scanf("%d", &num2);     

    calcular_resultados(num1,num1, &resultados);

    printf("Divisão real: %.2f\n", resultados.divisao_real);
    printf("Divisão Inteira: %d\n", resultados.divisao_inteira);
    printf("resto: %d\n", resultados.resto);

    return 0;

 }
