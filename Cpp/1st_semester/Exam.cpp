#include <iostream>
#include <locale.h>
using namespace std;

//Função que verifica se o aluno passou ou não, retorna string
string AprovadoReprovado(float notaAluno){
    if(notaAluno >= 6.0){
        return "Aprovado!";
    }else{
        return "Reprovado!";
    }
}

int main(){
    setlocale(LC_ALL, "");
    const int MAX_ALUNOS = 100; // Defina o tamanho máximo do array
    string alunos[MAX_ALUNOS]; // Array de strings para armazenar os nomes dos alunos
    int numeroAlunos;
    float mediaSala = 0, notas[MAX_ALUNOS][5], mediaAluno[MAX_ALUNOS] = {0};

    cout << "Digite quantos alunos fizeram a prova: ";
    cin >> numeroAlunos;

    // Loop para ler todos os nomes dos Alunos e armazenar numa String
    for(int c = 0; c < numeroAlunos; c++){
        cout << "Informe o nome do aluno " << c+1<< ":";
        cin >> alunos[c];
        // Loop para ler as notas dos Alunos e colocar dentro do Array 'notas'
        for(int i = 0; i < 5; i++){
            cout << "Insira a Nota " << i+1 << ":";
            cin >> notas[c][i];
            mediaSala += notas[c][i]; 
            mediaAluno[c] += notas[c][i];
        }
        mediaAluno[c] /= 5; //Calculo da média individual de cada aluno
    }
    
    //Calculo da média da sala
    mediaSala /= (numeroAlunos*5);

    //impressão dos Resultados:
    cout << "\nResultados Média Final:\n";
    for(int c = 0; c < numeroAlunos; c++){
        cout << alunos[c] << ": " << mediaAluno[c] << " - " << AprovadoReprovado(mediaAluno[c]) << endl;
    }

    cout << "Média Final da sala: " << mediaSala;

    return 0;
}