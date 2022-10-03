// CO2EX2.CPP

#include<iostream>
using namespace std;

int main(void)
{
  char NOME[40];

  cout << "informe seu nome: ";
  cin >> NOME;
  cin.ignore(80, '\n');

  cout << "Ola, " << NOME;
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
