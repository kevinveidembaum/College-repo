#include <stdio.h>

const float PORCENTAGEM = 0.35;

float calcularMedia(float notas[2], float lista){
  //p1*0.35 + P2*0.35 + lista
  return notas[0]*PORCENTAGEM + notas[1]*PORCENTAGEM + lista;
}

int main(){
  float notas[2], lista, sub;

  
  for(int i=0;i < 2; i++){
    printf("Informe a Nota da P%d: ", 1+i);
    scanf("%f", &notas[i]);


    if(notas[i] > 10 || notas[i] < 0){
      printf("Nota Inválida! \n");
      return 0;
    }
  }


  printf("Informe a Nota da Lista: ");
  scanf("%f", &lista);


  if(lista > 5 || lista < 0){
    printf("Nota de Lista Inválida! \n");
    return 0;
  }


  float resultado = calcularMedia(notas, lista);


  if(resultado > 6){
    printf("\nAprovado!!\n");
    printf("A média final foi de %.2f\n", resultado);
    return 0; 
  }


  printf("\nNão alcançou a Média mas ainda tem a Sub!\n");
  printf("Informe a Nota da Sub: ");
  scanf("%f", &sub);

  if(notas[0] < notas[1]){
    notas[0] = sub;
  }else{
    notas[1] = sub;
  }


  resultado = calcularMedia(notas, lista);

  printf("\n");
  printf("%s\n", (resultado > 6)? "Aprovado!": "Reprovado!");
  printf("A média final foi de %.2f\n", resultado);
}
