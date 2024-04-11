#include <stdio.h>
#include <stdlib.h> 
#include <stdint.h> 

typedef struct{ 
float res1;
float res2;
float res3;

}resultado;

void operaçoes(float n1,float n2, resultado *resultados);



int main(){ 
resultado *resultados; 
resultados = (resultado*) malloc(100 * sizeof(resultado));
float n1;
float n2;
printf("digite um numero: \n");
scanf("%f", &n1);
printf("digite um numero: \n");
scanf("%f", &n2);
operaçoes(n1,n2, resultados);

return 0;
}

void operaçoes(float n1,float n2, resultado *resultados){  
 for (int i = 0; i < 3; i++) 

 {
  float resultado1 = n1/n2; 
  int resultado2 = n1/n2;
  float resultado3 = (int)n1 % (int)n2;

 resultados[i].res1 == resultado1;
 resultados[i].res2 == resultado2; 
 resultados[i].res3 == resultado3;
 
 printf("divisão real: %.2f\n",resultado1);
 printf("divisão inteira: %d\n",resultado2);
 printf("resto: %f\n",resultado3);
 return;
}}