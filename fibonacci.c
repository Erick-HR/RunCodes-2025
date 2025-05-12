#include <stdio.h>

unsigned long long fibonacci(int n);

int main() {
    int posicao;

    scanf("%d", &posicao);

    if (posicao <= 10000) {
        unsigned long long resultado = fibonacci(posicao);
        printf("%llu\n", resultado);
    }
    return 0;
}

unsigned long long fibonacci(int n) {
    if (n == 1 || n == 2) return 1;

    unsigned long long a = 1, b = 1, c = 0;

    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
