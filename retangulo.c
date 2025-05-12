#include <stdio.h>

int dentro_ret (int x0,int y0, int x1,int y1, int x,  int y);

int main() {
    int x0, y0, x1, y1,x, y;

    // Entrada de dados do Usuário
    scanf("%d %d %d %d %d %d", &x0, &y0, &x1, &y1, &x, &y);

    int resultado = dentro_ret (x0, y0, x1, y1, x, y); // Chamada da Função Verificadora

    // Exibe o resultado dependendo do retorno da função verificadora
    if  (resultado == 0) printf("EXTERNO\n");
    else printf("INTERNO\n");

}

int dentro_ret(int x0, int y0, int x1, int y1, int x, int y) {
    int x_min = (x0 < x1) ? x0 : x1; // Menor entre x0 e x1
    int x_max = (x0 > x1) ? x0 : x1; // Maior entre x0 e x1
    int y_min = (y0 < y1) ? y0 : y1; // Menor entre y0 e y1
    int y_max = (y0 > y1) ? y0 : y1; // Maior entre y0 e y1

    // Verifica se o ponto está dentro ou na borda do retângulo
    if (x >= x_min && x <= x_max && y >= y_min && y <= y_max) {
        return 1; // INTERNO
    } else {
        return 0; // EXTERNO
    }
}