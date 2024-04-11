typedef struct {
    char nome[120];
    char sexo[2];
    char cpf[12];
    char data_nasc[11];
} Aluno;

typedef struct {
    char nome[120];
    char sexo[2];
    char cpf[12];
    char data_nasc[11];
    Aluno *alunos;
} Professor;

typedef struct {
    int id;
    char nome[120];
    char observacao[250];
} Exercicio;

typedef struct{
    Aluno *alunos;
    Professor *professores;
    Exercicio *exercicios;
};

//funções
