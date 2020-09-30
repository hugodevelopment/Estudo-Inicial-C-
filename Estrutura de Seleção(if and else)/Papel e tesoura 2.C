#include<iostream>

using namespace std;

enum Escolha (PEDRA,PAPEL,TESOURA); // Enumerando as variáveis para adiconar valores 
int main ()

{
  int escolha1, escolha2;
  
  Vencedor vencedor;
  
  cout << "Escolha pedra (0), papel (1) ou tesoura (2):" << endl; // Definindo quais deles você irá usar
  
  cout << "Jogador #1" << endl; // Declarando jogador 1
  
  cin >> escolha1;
  
  cout << "Jogador #2" << endl; // Declarando jogador 2
  
  cin >> escolha2;
  
  switch ( escolha2 - escolha1 )
  
  {  
    case 0 
	
	vencedor = EMPATE;
	break;
	
	case -1:
	case 2:
	
	 Vencedor = JOGADOR21;
	 break;

     case -2:
     case 1:
     Vencedor = JOGADOR2 	 
  
  }
  
   if (vencedor == escolha2) 
   
   cout << "EMPATE" << endl;
  
  else if ( vencedor == JOGADOR1)
  
  cout << "JOGADOR1 Venceu" << endl;
  
  else
  
   
  cout << "JOGADOR2 Venceu" << endl;
  
  }
  
  
 