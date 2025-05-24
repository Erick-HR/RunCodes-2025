#include <stdio.h>

long double calcula_euler(int n);

int main() {
    int n;
    scanf("%d", &n);

    long double euler = calcula_euler(n);
    printf("%.16Lf\n", euler);

    return 0;
}

long double calcula_euler(int n) {
    long double soma = 0.0;
    long double termo = 1.0;

    for (int i = 0; i <= n; i++) {
        soma += termo;
        termo /= (i + 1);
    }

    return soma;
}