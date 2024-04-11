#include <stdio.h>
#include "declara.h"


void Cadastro(Professor *professor, Aluno *aluno, Exercicio *exercicio, int qtd_professores, int qtd_alunos, int qtd_exercicio){
    char Menucadastro[] = "Cadastro da Academia\n1 -- Aluno \n2 -- Professor \n3 -- Exercicio \n0 -- sair \n";
    int opcao;
    printf("%s", Menucadastro);
    scanf("%d", &opcao);

    while (opcao != 0)
    {
        if(opcao == 1){
            printf("Nome \n>> ");
            scanf("%120[\n]", aluno->nome);
            printf("CPF  \n>> ");
            scanf("%d", &aluno->cpf);
            printf("Data de Nascimento \n>> ");
            scanf("%120[\n]", aluno->dataNasc);
            printf("Sexo: F(feminino) e M(masculino) \n>> ");
            scanf("%10[\n]", aluno->sexo);
            aluno[qtd_alunos];
        
            qtd_alunos++;

        }else if(opcao == 2){
            printf("Nome \n>> ");
            scanf("%120[\n]", professor->nome);
            printf("CPF  \n>> ");
            scanf("%d", &professor->cpf);
            printf("Data de Nascimento \n>> ");
            scanf("%120[\n]", professor->dataNasc);
            printf("Sexo: F(feminino) e M(masculino) \n>> ");
            scanf("%10[\n]", professor->sexo);
            professor[qtd_professores];
            qtd_professores++;

        }else if(opcao == 3){
            printf("ID \n>> ");
            scanf("%d", &exercicio->id);
            printf("Nome  \n>> ");
            scanf("%120[\n]", exercicio->nome);
            printf("Observacao \n>> ");
            scanf("%500[\n]", exercicio->observacao);
            exercicio[qtd_exercicio];
            qtd_exercicio++;

        }else{
            printf("Opcao invalida \n");
        }

        printf("%s", Menucadastro);
        scanf("%d", &opcao);
    }

}

void listar(Professor *professor, Aluno *aluno, Exercicio *exercicio, int qtd_professores, int qtd_alunos, int qtd_exercicio){
    char MenuListar[] = "Listar Dados da Academia\n 1 -- Aluno \n2 -- Professor \n3 -- Exercicio \n0 -- sair \n";
    int opcao;
    printf("%s", MenuListar);
    scanf("%d", &opcao);

    while (opcao != 0)
    {
        if(opcao == 1){
            printf("Alunos Cadastrados \n");
            for(int i = 0; i < qtd_alunos; i++){
                printf("Nome: %s CPF \n: %d", aluno[i].nome, aluno[i].cpf);
                printf("Sexo: %s Data de Nascimento \n: %s", aluno[i].sexo, aluno[i].dataNasc);
            }
            printf("-------------------------------");

        }else if(opcao == 2){
            printf("Professores Cadastrados \n");
            for(int i = 0; i < qtd_professores; i++){
                printf("Nome: %s CPF \n: %d", professor[i].nome, professor[i].cpf);
                printf("Sexo: %s Data de Nascimento: %s \n", professor[i].sexo, professor[i].dataNasc);
            }
            printf("-------------------------------");


        }else if(opcao == 3){
            printf("Exercicios Cadastrados \n");
            for(int i = 0; i < qtd_exercicio; i++){
                printf("ID: %d \n", exercicio[i].id);
                printf("Nome: %s \n",exercicio[i].nome);
                printf("Observacao: %s", exercicio[i].observacao);
            }
            printf("-------------------------------");

        }else {
            printf("Opcao invalida \n");
        }

        printf("%s", MenuListar);
        scanf("%d", &opcao);
    }
    

}

void Remover(Professor *professor, Aluno *aluno, Exercicio *exercicio, int qtd_professores, int qtd_alunos, int qtd_exercicio){
    char MenuRemove[] = "Remover Dados da Academia\n 1 -- Aluno \n2 -- Professor \n3 -- Exercicio \n0 -- sair \n";
    int opcao;
    printf("%s", MenuRemove);
    scanf("%d", &opcao);

    while(opcao != 0){
        if(opcao == 1){
            /*int codigo;
            printf("Digite o CPF \n>> ");
            scanf("%d", &codigo);
            
            for(int i = 0; i < qtd_alunos; i++){
                if(codigo == aluno[i].cpf){
                    aluno[i].cpf--;
                    aluno[i].nome--;
                    aluno[i].sexo--;
                    aluno[i].dataNasc;
                    printf("Aluno REMOVIDO \n");
                }else if(codigo != aluno[i].cpf){
                    printf("CPF inexistente \n");
                }
            }*/

        }else if(opcao == 2){
            /*int codigo;
            printf("Digite o CPF \n>> ");
            scanf("%d", &codigo);
            
            for(int i = 0; i < qtd_professores; i++){
                if(codigo == aluno[i].cpf){
                    professor[i].cpf--;
                    professor[i].nome--;
                    professor[i].sexo--;
                    professor[i].dataNasc;
                    printf("Professor REMOVIDO \n");
                }else if(codigo != aluno[i].cpf){
                    printf("CPF inexistente \n");
                }
            }*/
            
        }else if(opcao == 3){
            /*int codigo;
            printf("Digite o ID \n>> ");
            scanf("%d", &codigo);
            
            for(int i = 0; i < qtd_exercicio; i++){
                if(codigo == aluno[i].cpf){
                    exercicio[i].id --;
                    exercicio[i].nome--;
                    exercicio[i].observacao--;
                    printf("Exercico REMOVIDO \n");
                }else if(codigo != aluno[i].cpf){
                    printf("ID inexistente \n");
                }
            }*/
        }else{
            printf("Opcao Invalida \n");
        }
    }
}