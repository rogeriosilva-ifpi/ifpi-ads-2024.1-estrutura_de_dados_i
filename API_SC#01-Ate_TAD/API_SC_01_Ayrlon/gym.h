typedef struct{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct{
    char cpf[13];
    char nome[120];
    char sexo[13];
    Data DataNasc;
    Treino Treino;
}Pessoa;

typedef struct{
    int id;
    char nome[100];
    char observacao[120];
}Exercicio;

typedef struct{
    Pessoa aluno;
    Pessoa professor;
    Exercicio Exercicios[15]
}Treino;


void printMenu();

Pessoa Novo_Aluno();

void listar_Alunos(Pessoa * Alunos, int qtdAlunos);

Pessoa Novo_Professor();

void listar_Professores(Pessoa * Professores, int qtdProfessores);

Exercicio Novo_Exercicio();

void listar_Exercicios(Exercicio * Exercicios, int qtdExercicios);

Treino adcionar_treino(Pessoa * Alunos, int qtdAlunos, Exercicio * Exercicios, int qtdExercicios, int E);
