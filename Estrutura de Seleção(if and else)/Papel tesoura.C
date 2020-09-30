#include<iostream>

using namespace std;

enum Escolha (PEDRA,PAPEL,TESOURA); // Enumerando as variáveis para adiconar valores 
enum Vencedor (JOGADOR1, JOGADOR2, EMPATE);

int main ()

{
  int n;
  
  Escolha escolha1, escolha2;
  Vencedor vencedor;
  
  cout << "Escolha pedra (0), papel (1) ou tesoura (2):" endl; // Definindo quais deles você irá usar
  
  cout << "Jogador #1" << endl; // Declarando jogador 1
  
  cin >> n;
 ----------------------------------------------*--------------------------------------------------*-----------------------------------------------------------
  escolha1 = Escolha(n);
  
  cout <<"Jogador #2:"; //Declarando jogador 2
  
  cin >> n;
  
  escolha2 = Escolha(n);
  ----------------------------------------------*--------------------------------------------------*-----------------------------------------------------------
  if (escolha1 == escolha2) jogador = EMPATE;
  else if ( escolha1 == Pedra)
  if (escolha2 == Papel) jogador = JOGADOR2;
  else vencedor == JOGADOR1;
  ---------------------------------------------*----------------------------------------------------*----------------------------------------------------------
  else if ( escolha == Papel)
	  if (escolha2 == TESOURA) vencedor == JOGADOR2;
   else vencedor = JOGADOR1;
   else // (escolha1 == TESOURA)
  --------------------------------------------*----------------------------------------------------*------------------------------------------------------------ 
      if (escolha2 == PEDRA) vencedor == JOGADOR2;
      else vencedor = JOGADOR1;
	
	  if (vencedor == EMPATE) cout << "Empatou" << endl;

      if (vencedor == JOGADOR1)   
      cout << "JOgador1 venceu" << endl;
      if (vencedor == JOGADOR2)
	  cout << "Jogador2 venceu" << endl; 
	-----------------------------------------*-------------------------------------------------------*-----------------------------------------------------------  
}
  
   