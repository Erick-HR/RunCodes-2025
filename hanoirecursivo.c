#include <stdio.h>

void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("Mover disco %d do pino %c para pino %c\n", n, from, to);
        return;
    }
    hanoi(n - 1, from, aux, to);                     // Move n-1 discos para o auxiliar
    printf("Mover disco %d do pino %c para pino %c\n", n, from, to);  // Move o maior disco
    hanoi(n - 1, aux, to, from);                     // Move os n-1 discos de volta
}

int main() {
    int discs;
    scanf("%d", &discs);
    if (discs < 1 || discs > 100) {
        printf("Número de discos deve estar entre 1 e 100\n");
        return 1;
    }
    hanoi(discs, 'A', 'B', 'C');
    return 0;
}
