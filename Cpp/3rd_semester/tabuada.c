#include <stdio.h>
#include <stdbool.h>

void getTabuada(int num){
  for (int i=0;i < 10;i++) {
    printf("%d x %d = %d\n", i+1, num, num*(i+1));
  }
}

int main(){
  int num;
  char resposta;

  while (true) {
    printf("Digite um número para ver sua Tabuada: ");
    scanf("%d", &num);
    
    getTabuada(num);

    printf("\nDeseja continuar? [S/n]: ");
    scanf(" %c", &resposta);

    if(resposta != 's' && resposta != 'S'){
      break;
    }
  }
}
