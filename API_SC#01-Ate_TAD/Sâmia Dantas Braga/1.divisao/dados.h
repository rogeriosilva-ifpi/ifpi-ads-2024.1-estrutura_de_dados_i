#ifndef DADOS_H
#define DADOS_H


typedef struct dados{

    float divisaoReal;
    int divisaoInteira;
    int resto;

}Dados;




// Protótipos das funções
Dados *novosDados();
void calcularDivisão(int x, int y, Dados *dados);
void mostrarResultado(Dados *dados);

#endif