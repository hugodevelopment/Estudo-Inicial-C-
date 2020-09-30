#include<iostream>

using namespace std;


int SomaAUmNumero(int numero, int NumeroASerSomado)

{
   return  numero +  NumeroASerSomado;
 
}  


void mensagem()
{

   cout << "Jojo é um anime muito maneiro" << endl
   return;

}

int main () 

int numero, NumeroASerSomado, retornoDaFuncao;

mensagem();

cout << "Digite um numero por favor \n" << endl;
cin >> numero;

cout << "Digite o numero a ser somado \n" << endl;
cin >> NumeroASerSomado;


cout << "A soma deste numero" << numero << "Com o numero a ser somado" << NumeroASerSomado <<
"sera" << SomaAUmNumero(numero, NumeroASerSomado);

cout << "" << endl;

retornoDaFuncao = SomaAUmNumero(200, - 500);

cout << "" << endl;

SomaAUmNumero = (numero, SomaAUmNumero(150,1400));

cout << "" << endl;

cout << "\nSoma de 200 com -500: " << retornoDaFuncao << endl;


system("Pause");

return 0;

}