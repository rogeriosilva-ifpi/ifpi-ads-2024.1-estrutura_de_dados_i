#include <stdio.h>

//Protótipo:
void calcular_operacoes(float n1, float n2, struct Operacoes *p);



void calcular_operacoes(float n1, float n2, struct Operacoes *p) {
    p = n1 / n2;
    p = n1 % n2;
    
}