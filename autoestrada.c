#include <stdio.h>

int main() {
    int n, soma = 0;
    char siglas[100];

    // Lê o número de entradas e a sequência de siglas
    scanf("%d %s", &n, siglas);

    // Valida se o número de entradas é positivo
    if (n <= 0) {
        printf("Entrada inválida!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        switch (siglas[i]) {
            case 'P': soma += 2; break;
            case 'C': soma += 2; break;
            case 'A': soma += 1; break;
            case 'D': soma += 0; break;
            default:
                printf("Entrada inválida!\n");
            return 1;
        }
    }

    printf("%d\n", soma);

    return 0;
}
