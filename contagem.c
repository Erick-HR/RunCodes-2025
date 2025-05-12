#include <stdio.h>
#include <string.h>

int main() {
    int N;
    //Entrada
    scanf("%d", &N);

    int contagem[10] = {0}; // Inicializa a contagem de cada algarismo (0-9) com 0

    for (int i = 0; i < N; i++) {
        char numero[100];

        scanf("%s", numero); //Numeros a ser "contados"

        //Recebe o número a ser contado e verifica número a número para contar os algarismos
        for (int j = 0; j < strlen(numero); j++) {
            char algarismo = numero[j];
            if (algarismo >= '0' && algarismo <= '9') {
                contagem[algarismo - '0']++;
            }
        }
    }

    //Saída
    for (int i = 0; i < 10; i++) {
        printf("%d - %d\n", i, contagem[i]);
    }

    return 0;
}