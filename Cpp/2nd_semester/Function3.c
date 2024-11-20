#include <stdio.h>

int verificarPerfeito(int valor){
  int soma=0;
  for (int i=1;i < valor;i++) {
    soma += (valor % i == 0)? i: 0;
  }

  if(soma == valor) return 1; else return 0;
}

int main(){
  int num;

  printf("Digite um número para verificar se é perfeito ou não: ");
  scanf("%d", &num);

  int res = verificarPerfeito(num);

  if (res == 1) {
    printf("O número informado é um Número Perfeito!\n");
  } else {
    printf("O número informado NÃO é um Número Perfeito!\n");
  }
}
