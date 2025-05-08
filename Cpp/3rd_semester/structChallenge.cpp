#include <stdio.h> 
#include <stdlib.h>
#include <iostream>
using namespace std;

int posicao, continua;



struct TbProduto{
	int codigo;
	char produto[40];
	float valor;
	int qtd; 
};

struct TbCliente  //cliente
{
	int codigo;
	char nome[40];
	char bairro[40];
	char cidade[60];
	char telefone[10];
	char cpf[11];
	char rg[9];
} ;

struct TbVenda
{
	int codigoVenda;
	float total;
	int qtdTotalProdutos;
	TbCliente codCliente;
};


struct TbCliente cliente[10];
struct TbProduto produto[10];
struct TbVenda vendas[10];


void insereCliente()
{
	printf("Informe um codigo para o cliente: ");
	scanf("%i", &cliente[posicao].codigo);
	printf("Informe o nome do cliente: ");
	scanf("%s", &cliente[posicao].nome);
	printf("Informe o bairro do cliente: ");
	scanf("%s", &cliente[posicao].bairro);
	printf("Informe a cidade do cliente: ");
	scanf("%s", &cliente[posicao].cidade);
	printf("Informe o telefone: ");
	scanf("%s", &cliente[posicao].telefone);
	printf("Informe o CPF: ");
	scanf("%s", &cliente[posicao].cpf);
	printf("Informe o RG: ");
	scanf("%s", &cliente[posicao].rg);
}

void inserirProduto(){
	printf("Informe um codigo para o produto: ");
	scanf("%i", &produto[posicao].codigo);
	printf("Informe o nome do Produto: ");
	scanf("%s", &produto[posicao].produto);
	printf("Informe o Valor: R$");
	scanf("%f",&produto[posicao].valor);
	printf("Informe a quantidade: ");
	scanf("%i",&produto[posicao].qtd);
}

void exibirProduto(){
	printf("\nProduto de Posicao: %i\n", posicao);
	printf("Codigo %i \n", produto[posicao].codigo);
	printf("Produto %s \n", produto[posicao].produto);
	printf("Valor: R$%.2f \n", produto[posicao].valor);
	printf("Quantidade: %i \n", produto[posicao].qtd);
}


void exibeCliente()
{
	printf("\nCliente na Posicao: %i\n", posicao);
	printf("Codigo: %i \n", cliente[posicao].codigo);
	printf("Nome: %s \n", cliente[posicao].nome);
	printf("Bairro: %s \n", cliente[posicao].bairro);
	printf("Cidade: %s \n", cliente[posicao].cidade);
	printf("O Telefone eh: %s\n",cliente[posicao].telefone);
	printf("CPF: %s \n", cliente[posicao].cpf);
	printf("RG: %s \n", cliente[posicao].rg);
}

void exibirVenda()
{
	printf("\nVenda na Posicao: %i\n", 0);
	printf("Codigo: %i \n", vendas[0].codigoVenda);
	printf("Quantidade total de Produtos: %i \n", vendas[0].qtdTotalProdutos);
	printf("Total: R$%.2f \n", vendas[0].total);
	printf("Nome do Cliente: %s \n", vendas[0].codCliente.nome);
}

void buscarCliente(){
	printf("\nInforme a posicao para busca do Cliente: ");
	scanf("%i", &posicao);       
	exibeCliente();
}

void buscarProduto(){
	printf("\nInforme a posicao para busca do Produto: ");
	scanf("%i", &posicao);       
	exibirProduto();
}


int pesquisarCodigoCliente(TbCliente array[], int codigo) {
    for (int i = 0; i < 10; i++) {
        if (array[i].codigo == codigo) {
            return i;
        }
    }
    return -1;
}

int pesquisarCodigoProduto(TbProduto array[], int codigo) {
    for (int i = 0; i < 10; i++) {
        if (array[i].codigo == codigo) {
            return i;
        }
    }
    return -1;
}


int main() 
{
	char nome[10];
  int codigoCliente, codigoProduto, qtdVender;
  float valorTotal;

	do
	{	
		printf("\nInforme o index da ficha de registro: ");    
		scanf("%i", &posicao);
		
		insereCliente();
		
		printf("\nInforme o index do produto para registro: ");    
		scanf("%i", &posicao);
		
		inserirProduto();
		
		printf("\nInforme 1 para continuar: ");
		scanf("%i", &continua);    
	}
	while (continua == 1);
  
  printf("\n==========Vendas============\n");
  printf("Informe o código do Cliente: ");
  scanf("%i", &codigoCliente);

  int indiceCliente = pesquisarCodigoCliente(cliente, codigoCliente);
  if (indiceCliente == -1) {
    cout << "Cliente com código " << codigoCliente << " não encontrado." << endl;
    return 0;
  }

  vendas[0].codCliente = cliente[indiceCliente];
  
  printf("Informe o código do Produto: ");
  scanf("%i", &codigoProduto);

  int indiceProduto = pesquisarCodigoProduto(produto, codigoProduto);
  if (indiceProduto == -1) {
    cout << "Produto com código " << codigoProduto << " não encontrado." << endl;
    return 0;
  }

  printf("\nQuantidade em Estoque desse Produto: %i", produto[indiceProduto].qtd);
  printf("\nInforme a quantidade do Produto para Venda: ");
  scanf("%i", &qtdVender);

  if (qtdVender <= produto[indiceProduto].qtd) {
    valorTotal = qtdVender * produto[indiceProduto].valor;
    
    vendas[0].total = valorTotal;
    vendas[0].qtdTotalProdutos = qtdVender;

    produto[indiceProduto].qtd -= qtdVender;
  }

  exibirVenda();
	buscarCliente();
	buscarProduto();
}

