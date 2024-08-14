struct lista {
    int valor;
    struct lista* prox;
};

typedef struct lista Lista;

Lista* nova_lista();
Lista* inserir_inicio(Lista* lista, int valor);
Lista* inserir_final(Lista* lista, int valor);
Lista* remover_inicio(Lista* lista);
void remover_final(Lista* lista);
void listar(Lista* lista);
int esta_vazia(Lista* lista);
