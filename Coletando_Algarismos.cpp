#include <iostream>

using namespace std;

int posicaoAtual = 0;
int posicaoTmp;
int todosOsMovimentos = 0;
int tamanhoString;
int numeroAtual;
int horario;
int antiHorario;

std::string numero;

int main(){

  cin >> numero;
  tamanhoString = numero.length();

  for(int i = 0; i < tamanhoString; i++){

    numeroAtual = numero[i] - '0';
    antiHorario = 0;
    horario = 0;

    posicaoTmp = posicaoAtual;

    while(posicaoTmp != numeroAtual){

      horario++;
      posicaoTmp--;

      if(posicaoTmp == -1)
        posicaoTmp = 9;

    }

    posicaoTmp = posicaoAtual;

    while(posicaoTmp != numeroAtual){

      antiHorario++;
      posicaoTmp++;

      if(posicaoTmp == 10)
        posicaoTmp = 0;

    }
   

    todosOsMovimentos += min(antiHorario, horario);

    posicaoAtual = numero[i] - '0';

  }

  cout << todosOsMovimentos << '\n';

  return 0;
}
