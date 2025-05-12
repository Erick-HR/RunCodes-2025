#include <stdio.h>

int main() {
    int n;
    float soma = 0.0;

    scanf("%d", &n); // Entrada do número aleatório a ser informado pelo usuário

    for (int i = 1; i <= n; i++) {
        soma += 1.0 / i;
    }

    printf("%.8f\n", soma);

    return 0;
}