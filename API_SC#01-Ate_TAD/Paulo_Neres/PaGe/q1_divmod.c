//Faça um programa em c que receba dois valores do usuário e então mostre 3 valores:Divisão Real, Divisão inteira e Resto.
//Para isso, faça uma função do tipo void além da main para computar as respostas e as retorna  por referência para main. Essa função deverá ter 3 parâmetros: os dois números e uma estrutura c(struct) para devolver os valores em uma só referência.
#include <stdio.h>

 struct Divisao{
    float Real;
    int inteira;
    int resto;
};

int main(){
    int numero1 , numero2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &numero1);

    printf("Digite o segundo valor: ");
    scanf("%d", &numero2);

    struct Divisao resultado;

    respostas(numero1, numero2, &resultado );

    printf("Real: %f\n",resultado.Real);
    printf("Inteira: %d\n",resultado.inteira);
    printf("Resto: %d\n",resultado.resto);


    return 0;
}

void respostas(int numero1,int numero2, struct Divisao *resultado){
    resultado->inteira = numero1 / numero2;
    resultado-> Real = numero1 / numero2;
    resultado->resto = numero1 % numero2;

}

