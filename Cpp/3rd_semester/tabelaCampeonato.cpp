#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <stdbool.h>

using namespace std;

int pontos[9] = {23, 43, 65, 62, 15, 50, 59, 77, 12};
string nome[9] = {"Vitoria", "Gremio", "Flamengo", "Bahia", "Pernanbuco", "Fluminense", "Botafogo", "Palmeiras", "Santos"};
int gols[9] = {33, 23, 52, 64, 75, 16, 22, 74, 50};

int numero[9];
int posicao;


void exibir(){
	printf("\n");
	printf("%-15s %-10s %-10s\n", "Nome", "Pontos", "Gols");
	printf("--------------------------------------------\n");
	
	for(int i=0; i < 9; i++){
        printf("%-15s %-10d %-10d\n", nome[i].c_str(), pontos[i], gols[i]); //provavelmente tem que usar o indice i
	}
}




void ordena()
{
   int troca;
   bool valida=false;
   posicao = 0;
   do
   {
     valida=false;
     for (posicao=0; posicao < 8;posicao++){
         
		   if(pontos[posicao] > pontos[posicao+1]){                               
	          troca = pontos[posicao];
	          pontos[posicao] = pontos[posicao+1];          
	          pontos[posicao+1] = troca;
	          
              string trocaNome = nome[posicao];
              nome[posicao] = nome[posicao+1];
              nome[posicao+1] = trocaNome;
             
             
              troca = gols[posicao];
              gols[posicao] = gols[posicao+1];
              gols[posicao+1] = troca;
			
			  valida=true;
	       }
     }    
   }while (valida == true);
     
}




int main(){
	exibir();
	ordena();
	exibir();






}
