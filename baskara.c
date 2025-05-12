#include <stdio.h>
#include <math.h>


void ValidaNumero(int);

int main(void){
    int n1,n2;

    scanf("%d %d",&n1,&n2);
}

void FaixaEtaria(int n1,int n2){
  if (n1 > n2) printf("%d é maior que %d",n1,n2);
  else if (n1 < n2) printf("%d é menor que %d",n1,n2);
  else printf("ambos são iguais");
}