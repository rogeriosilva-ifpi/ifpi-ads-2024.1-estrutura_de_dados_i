#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "academia.h"


int main(){
    Academia *academia = novaAcademia();
    strcpy(academia->nome, "Skyfit");
    strcpy(academia->endereco, "Av. Barão de Gurguéia");

    printf(">>>>> Bem-vindo(a) à academia %s <<<<<", academia->nome);
    printf("Localizada na %s", academia->endereco);
    printf("----------------------------------");


    char menu[] = "\n>>>>> System Gym <<<<<\n1 - Cadastrar Treinos\n\n0 - Encerrar";
    int valida = 0;

    while (valida == 1){
        int opcao;
        if(opcao == 1){
            Exercicios *exercicio = novoExercicio();
            dadosExercicios(exercicio);
            Treino *treinos = novoTreino();
            
        }else if(opcao == 2){
            Aluno *aluno = novoAluno();
            Professor *professor = novoProfessor();
            
            adicionarAluno(academia, aluno);
        }
    }
    




}