#include "lista.h"

int main() {
    Lista* minha_lista = nova_lista();
    minha_lista = inserir_inicio(minha_lista, 11);
    minha_lista = inserir_inicio(minha_lista, 25);
    minha_lista = inserir_inicio(minha_lista, 10);
    minha_lista = inserir_final(minha_lista, 12);
    listar(minha_lista);
    remover_final(minha_lista);
    listar(minha_lista);
}