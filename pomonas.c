#include <stdio.h>

int main() {
    int x, m;

    scanf("%d %d", &x,&m); //Entrada de dados do usuário

    for (int i =0; i < 30; i++){ //Laço de repetição que avalia o período de 30 dias

        if (x % m == 0){ // Caso o MOD seja igual a 0 o programa retorna STOP
            printf("STOP\n");
            break;
        }

        x += x % m; // Ao final da repetição x vai receber o valor de mod
    }

    if (x % m != 0)
        printf("NONSTOP\n");

    return 0;
}