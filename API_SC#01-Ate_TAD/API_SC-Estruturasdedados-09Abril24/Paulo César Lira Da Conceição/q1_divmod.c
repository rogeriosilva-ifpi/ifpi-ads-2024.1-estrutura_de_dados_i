#include <stdio.h>
int divisao_real();
int divisao_inteiro();
int resto();

int main(){
    printf(" ----- CALCULO -----\n");

    int numberone;
    int numbertwo;

    printf(" > Informe o valor do primeiro numero : ");
    scanf("%d", &numberone);

    printf(" > Informe o valor do segundo numero : ");
    scanf("%d", &numbertwo);

    float divisau_real = numberone/ numbertwo;
    int divisao_inteira = numberone / numbertwo;
    float resto = divisau_real % 100;

    printf("> A divisao real e igaul a %f ; a divisao inteira e igaul a %d e o resto e igual a %f \n", &divisau_real, &divisao_inteira, &resto);




}