typedef struct{
    int id;
    char nome[50];
    char observacao[200];
} Exercicio;

typedef struct{
    Exercicio *exercicios;
} Treino;

typedef struct{
    char nome[120];
    char cpf[12];
    char sexo[2];
    char data_nascimento[11];
    Treino treino;
} Aluno;

typedef struct{
    char nome[120];
    char cpf[12];
    char sexo[2];
    char data_nascimento[11];
    Aluno *alunos;
} Professor;

void enter_to_continue();
void cadastrar_professores(Professor *professores, int *qt_professores);
void remover_professores(Professor *professores, int *qt_professores, int id);
void listar_professores(Professor *professores, int *qt_professores);
void cadastrar_alunos(Aluno *alunos, int *qt_alunos);
void remover_alunos(Aluno *alunos, int *qt_alunos, int id);
void listar_alunos(Aluno *alunos, int qt_alunos);
void cadastrar_exercicios(Exercicio *exercicios, int *qt_exercicios);
void remover_exercicios(Exercicio *exercicios, int *qt_exercicios);
void listar_exercicios(Exercicio *exercicios, int *qt_exercicios);
void cadastrar_treinos(Treino *treinos, int *qt_treinos);
void remover_treinos(Treino *treinos, int *qt_treinos, int id_aluno);
void listar_treinos(Treino *treinos, int *qt_treinos, int id_aluno);