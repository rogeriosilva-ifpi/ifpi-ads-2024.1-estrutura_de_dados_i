// Implementacao de Pilha por meio de Vetores (sequencia)

#define SIZE 6

typedef struct {
    int value;
    Node* next;
} Node;

typedef struct {
    int top;
    int items[SIZE];
} Stack;

Stack* new_stack();
int pop(Stack* stack);
void push(Stack* stack, int value);
int is_empty(Stack* stack);
int is_full(Stack* stack);
void show_stack(Stack* stack, char* title);
