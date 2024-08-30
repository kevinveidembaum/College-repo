#include <stdio.h>

int main(){
  int num, res;

  while(1){
    printf("Quer ver a tabuada de qual número? \n");
    scanf("%d", &num);
    
    if(num <= 0){
      printf("Programa encerrado com sucesso!\n");
      break;
    }

    for (int i=1;i <= 10;i++) {
      res = i*num;
      printf("%i x %i = %i\n", num, i, res);
    } 
  } 
  return 0;
}
