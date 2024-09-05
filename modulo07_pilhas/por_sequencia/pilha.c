#include "pilha.h"

#include <stdio.h>
#include <stdlib.h>

Stack* new_stack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->top = SIZE;
    return stack;
}

int pop(Stack* stack) {
    if (is_empty(stack)) return NULL;

    int item = stack->items[stack->top];
    stack->top++;

    return item;
}

void push(Stack* stack, int value) {
    if (is_full(stack)) return NULL;

    stack->top--;
    stack->items[stack->top] = value;
}

int is_empty(Stack* stack) {  // .
    return stack->top == SIZE;
}

int is_full(Stack* stack) {  // .
    return stack->top == 0;
}

void show_stack(Stack* stack, char* title) {
    printf("%s: ", title);
    if (is_empty(stack)) {
        printf("Vazia!");
        return;
    }

    for (int i = stack->top; i < SIZE; i++) {
        printf("%d > ", stack->items[i]);
    }

    printf("\n");
}