#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_STACK_SIZE 1000  // Tamanho seguro para a pilha manual

typedef struct {
    int n;
    char from;
    char to;
    char aux;
    bool is_base_case;
    bool move_done;
} HanoiTask;

typedef struct {
    HanoiTask items[MAX_STACK_SIZE];
    int top;
} Stack;

void init_stack(Stack *s) {
    s->top = -1;
}

bool is_empty(Stack *s) {
    return s->top == -1;
}

bool is_full(Stack *s) {
    return s->top == MAX_STACK_SIZE - 1;
}

void push(Stack *s, HanoiTask task) {
    if (is_full(s)) {
        printf("Erro: Pilha cheia. Use menos discos ou aumente MAX_STACK_SIZE.\n");
        exit(EXIT_FAILURE);
    }
    s->items[++(s->top)] = task;
}

HanoiTask pop(Stack *s) {
    if (is_empty(s)) {
        printf("Erro: Pilha vazia.\n");
        exit(EXIT_FAILURE);
    }
    return s->items[(s->top)--];
}

void hanoi_safe(int n, char from, char to, char aux) {
    Stack stack;
    init_stack(&stack);

    // Empilha a tarefa inicial
    push(&stack, (HanoiTask){n, from, to, aux, false, false});

    while (!is_empty(&stack)) {
        HanoiTask current = pop(&stack);

        if (current.is_base_case) {
            printf("Mover disco %d de %c para %c\n", current.n, current.from, current.to);
            continue;
        }

        if (!current.move_done) {
            // Reempilha a tarefa atual marcando que o movimento foi feito
            push(&stack, (HanoiTask){current.n, current.from, current.to, current.aux, false, true});

            // Empilha as subtarefas em ordem inversa
            if (current.n > 1) {
                push(&stack, (HanoiTask){current.n-1, current.aux, current.to, current.from, false, false});
            }
            push(&stack, (HanoiTask){current.n, current.from, current.to, current.aux, true, false});
            if (current.n > 1) {
                push(&stack, (HanoiTask){current.n-1, current.from, current.aux, current.to, false, false});
            }
        } else {
            printf("Mover disco %d de %c para %c\n", current.n, current.from, current.to);
        }
    }
}

int main() {
    int discs;
    printf("Digite o número de discos: ");
    scanf("%d", &discs);

    if (discs < 1 || discs > 10000) {
        printf("Número de discos deve estar entre 1 e 10000\n");
        return 1;
    }

    hanoi_safe(discs, 'A', 'B', 'C');
    return 0;
}