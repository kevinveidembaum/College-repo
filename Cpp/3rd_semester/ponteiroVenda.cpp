#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Produto {
  int id;
  string nome;
  float valor;
  int quantidade;
};

struct Cliente {
  int id;
  string nome;
  string bairro;
  string cidade;
  string telefone;
  string cpf;
  string rg;

  Cliente *anterior;
  Cliente *proximo;
};

struct Venda {
  int id;
  float total;
  int quantidadeTotalProdutos;
  Produto produto;
  Cliente cliente;
};

// Ponteiros para a fila e pilha
Cliente *primeiroCliente = nullptr;
Cliente *ultimoCliente = nullptr;
Cliente *atualCliente = nullptr;
Cliente *anteriorCliente = nullptr;

// vetores globais para produtos e vendas
vector<Produto> produtos;
vector<Venda> vendas;

// variável global para atribuição incremental de IDs aos clientes
int idClienteGlobal = 1;

void inserirCliente() {
  atualCliente = new Cliente;

  atualCliente->id = idClienteGlobal++;

  cout << "\nInforme o nome do Cliente: ";
  cin >> atualCliente->nome;
  cout << "Informe o bairro do Cliente: ";
  cin >> atualCliente->bairro;
  cout << "Informe a cidade do Cliente: ";
  cin >> atualCliente->cidade;
  cout << "Informe o telefone do Cliente: ";
  cin >> atualCliente->telefone;
  cout << "Informe o CPF do Cliente: ";
  cin >> atualCliente->cpf;
  cout << "Informe o RG do Cliente: ";
  cin >> atualCliente->rg;

  // atual corresponde ao último nessa execução
  atualCliente->proximo = NULL;
  atualCliente->anterior = NULL;

  if (primeiroCliente == NULL) {
    primeiroCliente = atualCliente;
  } else {
    // Está recebendo o endereço da ficha atual no anterior;
    anteriorCliente->proximo = atualCliente;
  }

  // atribuir valor do atual no anterior
  anteriorCliente = atualCliente;

  // condicional da Pilha
  if (ultimoCliente != NULL) {
    atualCliente->anterior = ultimoCliente;
  }

  // atribuir valor do atual no anterior
  ultimoCliente = atualCliente;
}

void inserirProduto() {
  Produto p;

  p.id = produtos.size() + 1;

  cout << "\nInforme o nome do Produto: ";
  cin >> p.nome;
  cout << "Informe o valor do Produto: ";
  cin >> p.valor;
  cout << "Informe a quantidade em estoque do Produto: ";
  cin >> p.quantidade;

  produtos.push_back(p);
}

template <typename T> void exibirTodos(const vector<T> &lista) {
  for (int i = 0; i < lista.size(); i++) {
    cout << "\n" << lista[i].id << ". Nome: " << lista[i].nome;
  }
}

// Função para exibir clientes FILA
void exibirTodosClientes() {
  Cliente *aux = primeiroCliente;
  while (aux != nullptr) {
    cout << "\n" << aux->id << ". Nome: " << aux->nome;
    aux = aux->proximo;
  }
  cout << endl;
}

void exibirTodosClientesPilha() {
  Cliente *aux = ultimoCliente;
  while (aux != nullptr) {
    cout << "\n" << aux->id << ". Nome: " << aux->nome;
    aux = aux->anterior;
  }
  cout << endl;
}

void exibirTodasVendas(const vector<Venda> &vendas) {
  cout << "\n==== Lista de Vendas Realizadas ====\n";
  for (int i = 0; i < vendas.size(); i++) {
    cout << "\nVenda " << vendas[i].id
         << " | Cliente: " << vendas[i].cliente.nome
         << " | Produto: " << vendas[i].produto.nome
         << " | Quantidade: " << vendas[i].quantidadeTotalProdutos
         << " | Total: R$" << vendas[i].total;
  }
  cout << endl;
}

// Função para buscar um Cliente pelo ID usando Fila
Cliente *buscarClientePorId(int id) {
  Cliente *aux = primeiroCliente;
  while (aux != nullptr) {
    if (aux->id == id) {
      return aux;
    }
    aux = aux->proximo;
  }
  return nullptr;
}

// Função para buscar um Produto pelo ID
Produto *buscarProdutoPorId(int id) {
  for (int i = 0; i < produtos.size(); i++) {
    if (produtos[i].id == id) {
      return &produtos[i];
    }
  }
  return nullptr;
}

void cadastroRepetido(void (*funcaoCadastro)()) {
  int continua;
  do {
    funcaoCadastro();
    cout << "\nInforme 1 para continuar ou outro valor para parar: ";
    cin >> continua;
  } while (continua == 1);
}

void exibirVenda(const Venda &v) {
  cout << "\n===== Venda Realizada =====" << endl;
  cout << "ID da Venda: " << v.id << endl;
  cout << "Cliente: " << v.cliente.nome << endl;
  cout << "Produto: " << v.produto.nome << endl;
  cout << "Quantidade Total de Produtos: " << v.quantidadeTotalProdutos << endl;
  cout << "Total da Venda: R$" << v.total << endl;
}

int main() {
  int idCliente, idProduto, qtdVender, continuar;
  float valorTotal;

  cout << "\n==== Cadastro de Clientes ====";
  cadastroRepetido(inserirCliente);

  cout << "\n==== Cadastro de Produtos ====";
  cadastroRepetido(inserirProduto);

  do {
    cout << "\n=-=-=-=-=-=-=-=  Venda  =-=-=-=-=-=-=-=-=";

    cout << "\n==== Lista de Clientes Cadastrados ====\n";
    exibirTodosClientes();

    cout << "\nSelecione um ID de Cliente: ";
    cin >> idCliente;

    Cliente *clienteSelecionado = buscarClientePorId(idCliente);
    if (clienteSelecionado == nullptr) {
      cout << "Cliente com código " << idCliente << " não encontrado." << endl;
      continue;
    }

    cout << "\n==== Lista de Produtos Cadastrados ====\n";
    exibirTodos(produtos);

    cout << "\nSelecione um ID de um Produto: ";
    cin >> idProduto;

    Produto *produtoSelecionado = buscarProdutoPorId(idProduto);
    if (produtoSelecionado == nullptr) {
      cout << "Produto com código " << idProduto << " não encontrado." << endl;
      continue;
    }

    cout << "\n"
         << produtoSelecionado->nome
         << " - Estoque: " << produtoSelecionado->quantidade << " - Valor R$"
         << produtoSelecionado->valor;

    cout << "\nInforme a quantidade do Produto para Venda: ";
    cin >> qtdVender;

    if (qtdVender <= produtoSelecionado->quantidade) {
      valorTotal = qtdVender * produtoSelecionado->valor;

      Venda novaVenda;
      novaVenda.id = vendas.size() + 1;
      novaVenda.cliente = *clienteSelecionado;
      novaVenda.quantidadeTotalProdutos = qtdVender;
      novaVenda.total = valorTotal;
      novaVenda.produto = *produtoSelecionado;

      produtoSelecionado->quantidade -= qtdVender;

      vendas.push_back(novaVenda);

      exibirVenda(novaVenda);
    } else {
      cout << "Quantidade solicitada maior que o estoque disponível!" << endl;
    }

    cout << "\nDeseja fazer outra Venda?" << endl;
    cout << "Informe 1 para continuar ou outro valor para parar: ";
    cin >> continuar;
  } while (continuar == 1);

  exibirTodasVendas(vendas);

  cout << "\n=-=-=-= FILA =-=-=-=";
  exibirTodosClientes();

  cout << "\n=-=-=-= PILHA =-=-=-=";
  exibirTodosClientesPilha();

  return 0;
}
