#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ficha {
  char nome[40];

  ficha *anterior;
  ficha *proximo;
};

typedef ficha *ponteiroFicha;

void exibirPilha(ponteiroFicha ultimo) {
  ponteiroFicha auxiliar;

  auxiliar = ultimo;

  printf("\nPRINT DA PILHA: \n");

  while (auxiliar != NULL) {
    printf("Nome: %s\n", auxiliar->nome);
    auxiliar = auxiliar->anterior;
  }
}

void exibirFila(ponteiroFicha primeiro) {
  ponteiroFicha auxiliar;

  auxiliar = primeiro;

  printf("\nPRINT DA FILA: \n");

  while (auxiliar != NULL) {
    printf("Nome: %s\n", auxiliar->nome);
    auxiliar = auxiliar->proximo;
  }
}

int main() {
  ponteiroFicha primeiroFicha, atualFicha, anteriorFicha, ultimoFicha;

  char cliente[40];
  char resp = 's';

  primeiroFicha = NULL;
  ultimoFicha = NULL;

  while (resp == 's') {
    printf("Informe o nome: ");
    fgets(cliente, sizeof(cliente), stdin);
    cliente[strcspn(cliente, "\n")] = '\0';

    // faz o tipo ponteiro atual, apontar para uma nova ficha(endereço de
    // memoria)
    atualFicha = new ficha;
    strcpy(atualFicha->nome, cliente);

    // atual corresponde ao último nessa execução
    atualFicha->proximo = NULL;
    atualFicha->anterior = NULL;

    if (primeiroFicha == NULL) {
      primeiroFicha = atualFicha;
    } else {
      // Está recebendo o endereço da ficha atual no anterior;
      anteriorFicha->proximo = atualFicha;
    }

    // atribuir valor do atual no anterior
    anteriorFicha = atualFicha;

    // condicional da Pilha
    if (ultimoFicha != NULL) {
      atualFicha->anterior = ultimoFicha;
    }

    // atribuir valor do atual no anterior
    ultimoFicha = atualFicha;

    printf("Informe S para continuar: ");
    scanf("%c", &resp);
    getchar();
  }

  exibirFila(primeiroFicha);
  exibirPilha(ultimoFicha);
}
