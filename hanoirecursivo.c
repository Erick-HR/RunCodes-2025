#include <stdio.h>

// Função recursiva para resolver a Torre de Hanoi
void hanoi(int n, char origem, char destino, char auxiliar) {
    if (n == 1) {
        printf("Mover disco 1 do pino %c para pino %c\n", origem, destino);
        return;
    }

    // Move n-1 discos de origem para auxiliar, usando destino como auxiliar
    hanoi(n - 1, origem, auxiliar, destino);

    // Move o disco restante (o maior) de origem para destino
    printf("Mover disco %d do pino %c para pino %c\n", n, origem, destino);

    // Move os n-1 discos de auxiliar para destino, usando origem como auxiliar
    hanoi(n - 1, auxiliar, destino, origem);
}

int main() {
    int N;

    // Lê o número de discos
    scanf("%d", &N);

    // Verifica se N está dentro do intervalo permitido
    if (N <= 1 || N > 100) {
        printf("Número de discos inválido. Deve ser 1 < N ≤ 100.\n");
        return 1;
    }

    // Resolve o problema da Torre de Hanoi
    // Movendo todos os discos de A para B, usando C como auxiliar
    hanoi(N, 'A', 'B', 'C');

    return 0;
}