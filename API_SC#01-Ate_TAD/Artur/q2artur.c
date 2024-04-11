#include <stdint.h> 
#include <stdio.h> 
#include <stdlib.h>
typedef struct {
    exercicio exercicios;
    char treino_nome[120];
    
}treino;
typedef struct {
    int id;
    char nome[150];
    char observações[500];
}exercicio;
typedef struct{ 
 char nome[120];
 int cpf;  
 char sexo[20];
 char datanasc[80];
 aluno Alunos;
 treino treinos;

}professor;
 typedef struct { 
 char nome[120];
 int cpf;  
 char sexo[20];
 char datanasc[80];


 professor Professor;
 }aluno;
 aluno pedirdadosAluno();
 professor pedirdadosProf(int alunos_qtd);
 void listaralunos(aluno *alunos,int alunos_qtd);
 void listarprof(professor *professores,int prof_qtd); 
 void acessar_aluno(aluno *alunos,int prof_qtd,char nome_aluno);
 void acessar_prof(professor *professores,int prof_qtd, char nome_prof);
 
 
 int main(){
   aluno *alunos;
   alunos = (aluno*) malloc(100 * sizeof(alunos));
   professor *professores;
   professores = (professor*) malloc(100 * sizeof(professores));
   int alunos_limite = 0;
   int prof_limite = 0;
   int alunos_qtd = 0;
   int prof_qtd = 0;
   printf("insira o limite de alunos:  \n");
   scanf("%d",alunos_limite);
   printf("insira o limite de professores:  \n");
   scanf("%d",prof_limite);
   char menu = "-------------cadastro academia-----------------\n1-cadastrar aluno\n2-cadastrar professor\n3-listar alunos\n4-listar professores\n5-deletar alunos\n6-deletar professores\n7-cadastrar exercicios\n8-deletar exercicios";
   int opcao; 
   printf("%s",menu);
   scanf("%d",&opcao);
   while (opcao != 0){ 
    if (opcao == 1){ 
        aluno novoaluno;
        novoaluno = pedirdadosAluno();
        alunos[alunos_qtd]= novoaluno; 
        if (alunos_limite >= alunos_qtd)
        {
            alunos_qtd++;
        }
        else{
            printf("limite de alunos ultrapassado.");
        }
        
    } 
    else if (opcao == 2)
    {
       professor novoprofessor;
        novoprofessor = pedirdadosProf(alunos_qtd);
        professores[prof_qtd]= novoprofessor; 
        if (prof_limite >= prof_qtd)
        {
            prof_qtd++;
        }
        else{
            printf("limite de alunos ultrapassado.");
        }
    }
    else if (opcao == 3) {
         listaralunos(alunos,alunos_qtd);
        char nome_aluno;
        printf("digite o nome do aluno");
        scanf("%s",nome_aluno);

    }
    else if (opcao == 4){ 
         listarprof(professores,prof_qtd);
         char nome_prof;
        printf("digite o nome do professor");
        scanf("%s",nome_prof);


    }
    
   }

 };
 aluno pedirdadosAluno(){ 
    aluno novoaluno;
    printf("Nome: ");
    scanf(" %120[^\n]",novoaluno.nome);
    printf("Sexo: ");
    scanf(" %20[^\n]",novoaluno.sexo); 
    printf("Data de nascimento: ");
    scanf(" %80[^\n]",novoaluno.datanasc);
    printf("CPF: ");
    scanf(" %d",novoaluno.cpf); 
    printf("professor designado: ");
    scanf("%120[^\n]",novoaluno.Professor.nome);
    return novoaluno;

 };
 professor pedirdadosProf(int alunos_qtd){ 
    professor novoprofessor;
    printf("Nome: ");
    scanf(" %120[^\n]",novoprofessor.nome);
    printf("Sexo: ");
    scanf(" %20[^\n]",novoprofessor.sexo); 
    printf("Data de nascimento: ");
    scanf(" %80[^\n]",novoprofessor.datanasc);
    printf("CPF: ");
    scanf(" %d",novoprofessor.cpf); 
    printf("professor designado: ");
    scanf("%120[^\n]",novoprofessor.treinos.treino_nome);
    scanf ("%120[^\n]",novoprofessor.Alunos[alunos_qtd]);
    return novoprofessor;

 }; 
 void listaralunos(aluno *alunos,int alunos_qtd){
 aluno *alunos;
    printf("%s",alunos->nome);
 };
 void listarprof(professor *professores,int prof_qtd){
    professor *professores;
    printf("%s",professores->nome);
 };

 void acessar_aluno(aluno *alunos,int alunos_qtd,char nome_aluno){ 
      for (int i = 0; i < alunos_qtd; i++){
        if (nome_aluno = alunos[i].nome)
        {
            printf("\nNome: %s", alunos[i].nome);
            printf("\nSexo: %s", alunos[i].sexo);
            printf("\nData de nascimento: %s", alunos[i].datanasc);
            printf("\nCPF: %d", alunos[i].cpf);
            printf("\nProfessor: %s", alunos[i].Professor.nome);
        }
        
      }

 } 
 void acessar_prof(professor *professores,int prof_qtd,char nome_prof){ 
    for (int i = 0; i < prof_qtd; i++){
        if (nome_prof = professores[i].nome)
        {
            printf("\nNome: %s", professores[i].nome);
            printf("\nSexo: %s", professores[i].sexo);
            printf("\nData de nascimento: %s", professores[i].datanasc);
            printf("\nCPF: %d", professores[i].cpf); 
            printf("\nTreinos: ",professores[i].treinos.treino_nome);
            }

 }}