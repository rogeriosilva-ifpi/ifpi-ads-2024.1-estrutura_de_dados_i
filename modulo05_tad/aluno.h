// Interface/Especificar do TAD Aluno

typedef struct {
    char logradouro[250];
    int numero;
    char bairro[120];
    char cidade[120];
    char uf[3];
    char cep[11];
} Endereco;

typedef struct {
    int matricula;
    char nome[120];
    int idade;
    float renda;
    Endereco *endereco;
} Aluno;

// Protótipos de Operações ou Comportamentos
void pedirDados(Aluno *novoAluno);
void listarAlunos(Aluno *alunos, int qtdAlunos);
void pedirEndereco(Aluno *aluno);
Aluno *novoAluno();
