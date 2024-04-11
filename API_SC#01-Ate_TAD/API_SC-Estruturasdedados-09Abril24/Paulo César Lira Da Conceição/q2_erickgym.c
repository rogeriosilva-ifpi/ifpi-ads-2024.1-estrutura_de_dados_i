#include <stdio.h>

int main(){
    printf(" >>> Gestao de treinos na Erick Gym <<< ");

    int a;
    int p;
    int e;
    int opcao;
    char alunos[a];
    char professores[p];
    char exercicios[e];

    printf(" > Ha quantos alunos na aademia ? : ");
    scanf("%d", &a);

    printf(" > Ha quantos professores na academia ? : ");
    scanf("%d", &p);

    printf(" > Há quantos exercicios no treino ? : ");
    scanf("%d", &e);

    printf("\n --- Gerir Academia ---
    * 1 - Cadastrar aluno 
    * 2 - Remover aluno 
    * 3 - Listar alunos 
    * 4 - Cadastrar professor
    * 5 - Adicionar treino 
    * 6 - Listar professores
    * 7 - Listar treinos 
    
    >>> Digite a opcao desejada : ");
    scanf("%d", &opcao);

    if ((opcao === 1))
    {
        printf("\n***** CADASTRO ALUNO *****");
        
        char nome_aluno;
        int cpf_aluno;
        char sexo_aluno;
        int dia_nasc_aluno;
        int mes_nasc_aluno;
        int ano_nasc_aluno;

        printf("\n> Nome do aluno : ");
        scanf("%c", &nome_aluno);

        printf("\n > CPF do aluno : ");
        scanf("%d" &cpf_aluno);

        printf("\n> Sexo do aluno(M ou F) : ");
        scanf("%c", &sexo_aluno);

        printf("\n > Dia do aniversario do aluno : ");
        scanf("%d" &dia_nasc_aluno);

        printf("\n > Mes do aniversario do aluno : ");
        scanf("%d" &mes_nasc_aluno);

        printf("\n > Ano do aniversario do aluno : ");
        scanf("%d" &ano_nasc_aluno);
    }else if (opcao === 2)
    {
        
    }else if(opcao === 3){
        printf(alunos)
    }else if(opcao === 4){

        printf("\n***** CADASTRO PROFESSOR *****");
        
        char nome_professor;
        int cpf_professor;
        char sexo_professor;
        int dia_nasc_professor;
        int mes_nasc_professor;
        int ano_nasc_professor;

        printf("\n> Nome do professor : ");
        scanf("%c", &nome_professor);

        printf("\n > CPF do professor : ");
        scanf("%d" &cpf_professor);

        printf("\n> Sexo do profssor(M ou F) : ");
        scanf("%c", &sexo_professor);

        printf("\n > Dia do aniversario do professor : ");
        scanf("%d" &dia_nasc_professor);

        printf("\n > Mes do aniversario do aluno : ");
        scanf("%d" &mes_nasc_professor);

        printf("\n > Ano do aniversario do aluno : ");
        scanf("%d" &ano_nasc_professor);

    }else if( opcao === 5){
        char exercicios_aluno[];
        int i;
        while (i ===1)
        {
        printf(" > Informe o exercicio que quer adicionar : \n");
        scanf("%c", &exercicios_aluno);

        printf(" > Quer adicionar mais um exercicio ? : \n");
        scanf("%d", &i);
        }
    }else if (opcao === 6)
    {
        printf(professores);
    }else if(opcao === 7){
        printf(exercicios);
    }
    
    
    
}