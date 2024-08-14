typedef struct{
    int cpf;  // numeros
    char nome[16]; 
    char sexo[2]; // M ou F
    char data_nascimento;
}Professor;

typedef struct{
    int cpf;  
    char nome[16]; 
    char sexo[2]; 
    char data_nascimento;
    Professor *professor;
}Aluno;

