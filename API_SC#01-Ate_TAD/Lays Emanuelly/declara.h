typedef struct {
    int cpf; 
    char nome[120];
    char sexo[10];
    char dataNasc[10];
}Professor;

typedef struct {
    int cpf; 
    char nome[120];
    char sexo[10];
    char dataNasc[10];
}Aluno;

typedef struct {
    int id;
    char nome[150];
    char observacao[500];
}Exercicio;

void Cadastro(Professor *professor, Aluno *aluno, Exercicio *exercicio, int qtd_professores, int qtd_alunos, int qtd_exercicio);

void listar(Professor *professor, Aluno *aluno, Exercicio *exercicio, int qtd_professores, int qtd_alunos, int qtd_exercicio);

void Remover(Professor *professor, Aluno *aluno, Exercicio *exercicio, int qtd_professores, int qtd_alunos, int qtd_exercicio);
