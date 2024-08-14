struct ponto {
    float x;
    float y;
};

typedef struct ponto Ponto;

// Operações de Ponto

Ponto* criar(float x, float y);
void liberar(Ponto* ponto);
void acessa(Ponto* ponto, float* x, float* y);