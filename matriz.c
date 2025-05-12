#include <stdio.h>

int main(void) {
    int n1, n2, n3, n4;

    // Definindo Matriz 1 (n1 x n2)
    scanf("%d %d", &n1, &n2);
    int matriz1[n1][n2];

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    // Definindo Matriz 2 (n3 x n4)
    scanf("%d %d", &n3, &n4);
    int matriz2[n3][n4];

    for (int i = 0; i < n3; i++) {
        for (int j = 0; j < n4; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Verifica se a multiplicação é possível (n2 == n3)
    if (n2 != n3) {
        printf("Não é possível multiplicar as matrizes. Número de colunas da Matriz 1 (%d) deve ser igual ao número de linhas da Matriz 2 (%d).\n", n2, n3);
        return 1; // Encerra o programa com erro
    }

    // Matriz resultante (n1 x n4)
    int matriz3[n1][n4];

    // Inicializa a matriz resultante com zeros
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n4; j++) {
            matriz3[i][j] = 0;
        }
    }

    // Multiplicação correta: matriz1 (n1 x n2) * matriz2 (n3 x n4) = matriz3 (n1 x n4)
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n4; j++) {
            for (int k = 0; k < n2; k++) { // n2 == n3
                matriz3[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    // Exibe o resultado
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n4; j++) {
            printf("%d\t", matriz3[i][j]);
        }
        printf("\n");
    }

    return 0;
}