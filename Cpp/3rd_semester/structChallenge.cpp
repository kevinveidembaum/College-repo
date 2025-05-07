#include <stdio.h> 
#include <stdlib.h>


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


//acima defini uma tipo estrutura chamada TbCliente
struct TbCliente cliente[10];
struct TbProduto produto[10];
struct TbVenda vendas[10];
//criei uma matriz de estrutura, assim em cada posicao alimento os 4 atributos

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

void buscarCliente(){
	system("cls");
	printf("Informe a posicao para busca do Cliente: ");
	scanf("%i", &posicao);       
	exibeCliente();
	system("pause"); 
}

void buscarProduto(){
	system("cls");
	printf("Informe a posicao para busca do Produto: ");
	scanf("%i", &posicao);       
	exibirProduto();
	system("pause"); 
}


int main() 
{
	char nome[10];
	
	do
	{	
		printf("\nInforme o index da ficha de registro: ");    
		scanf("%i", &posicao);
		
		insereCliente();
		
		printf("\nInforme o index do produto para registro: ");    
		scanf("%i", &posicao);
		
		inserirProduto();
		
		printf("Informe 1 para continuar: ");
		scanf("%i", &continua);    
		system("cls");
	}
	while (continua == 1);
	
	int codigoCliente;
	
	printf("Informe o Código do Cliente que fez uma Compra: ");
	scanf("%i", &codigoCliente);
	
	//pesquisa pelo codigo cliente
	for(int i=0; i < 10; i++){
		bool achou = false;
		
		if(cliente[i].codigo == codigoCliente){
			achou = true;
			vendas[i].codCliente = cliente[i];
			
			break;
		}
	}
	
	int codigoProduto;
	
	printf("Informe o Código do Produto que foi Comprado: ");
	scanf("%i", &codigoProduto);
	
	//pesquisa pelo codigo cliente
	for(int i=0; i < 10; i++){
		bool achou = false;
		
		if(produto[i].codigo == codigoProduto){
			achou = true;
			vendas[i].codCliente = cliente[i];
			
			break;
		}
	}
	
	
	
	
	buscarCliente();
	buscarProduto();   
}    

