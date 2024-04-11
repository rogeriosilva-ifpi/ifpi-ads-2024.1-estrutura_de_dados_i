#include <stdio.h>
#include <stdlib.h>

int main(){
    Professor *professor = (Professor *)malloc(sizeof(Professor));
    Aluno *aluno = (Aluno *)malloc(sizeof(Aluno));
    Exercicio *exercicio = (Exercicio *)malloc(sizeof(Exercicio));

    int qtd_professores;
    int qtd_alunos;
    int qtd_exercicio;

    char menu[] = "Treinamento da Academina\n Eryck Gym\n1 -- add \n2 -- list \n3 -- remove \n0 -- sair \n";
    int opcao;
    printf("%s", menu);
    scanf("%d", &opcao);

    while (opcao != 0)
    {
        if(opcao == 1){
            Cadastro(professor, aluno, exercicio, qtd_professores, qtd_alunos, qtd_exercicio);
        }else if(opcao == 2){
            listar(professor, aluno, exercicio, qtd_professores, qtd_alunos, qtd_exercicio);
        }else if(opcao == 3){
            Remover(professor, aluno, exercicio, qtd_professores, qtd_alunos, qtd_exercicio);

        }else{
            printf("Opcao invalida \n");
        }

        printf("%s", menu);
        scanf("%d", &opcao);
    }
    

    return 0;
}
