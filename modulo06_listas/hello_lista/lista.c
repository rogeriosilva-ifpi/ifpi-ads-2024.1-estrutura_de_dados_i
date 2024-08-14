#include "lista.h"

#include <stdlib.h>

#include "stdio.h"

Lista* nova_lista() {
    return NULL;
}

Lista* inserir_inicio(Lista* lista, int valor) {
    Lista* novo = (Lista*)malloc(sizeof(Lista));
    novo->valor = valor;
    novo->prox = lista;
    return novo;
}

Lista* inserir_final(Lista* lista, int valor) {
    if (esta_vazia(lista)) {
        return inserir_inicio(lista, valor);
    }

    Lista* novo = (Lista*)malloc(sizeof(Lista));
    novo->valor = valor;

    Lista* ultimo = lista;
    while (ultimo->prox != NULL) {
        ultimo = ultimo->prox;
    }

    ultimo->prox = novo;
    novo->prox = NULL;

    return lista;
}

Lista* remover_inicio(Lista* lista) {
    if (esta_vazia(lista)) {
        printf("!!! Lista Vazia !!!\n\n");
        return lista;
    }
    Lista* proximo = lista->prox;
    free(lista);

    return proximo;
}

void remover_final(Lista* lista) {
    if (esta_vazia(lista)) {
        return;
    }

    Lista* ultimo = lista;
    while (ultimo->prox != NULL) ultimo = ultimo->prox;

    if (ultimo == lista) {
        lista = remover_inicio(ultimo);
        return;
    }

    Lista* penultimo = lista;
    while (penultimo->prox != ultimo) {
        penultimo = penultimo->prox;
    }

    free(ultimo);
    penultimo->prox = NULL;
}

void listar(Lista* lista) {
    printf(">> ITENS DA LISTA <<\n");
    if (esta_vazia(lista)) {
        printf("!!! Lista Vazia !!!\n\n");
        return;
    }
    for (Lista* p = lista; p != NULL; p = p->prox) {
        printf("> %d\n", p->valor);
    }
    printf("--------------------\n");
}

int esta_vazia(Lista* lista) {
    if (lista == NULL) {
        return 1;
    }
    return 0;
}