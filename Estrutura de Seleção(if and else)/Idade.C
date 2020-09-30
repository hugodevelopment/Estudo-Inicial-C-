#include<iostream>

using namespace std;

int main ()

{
  cout << "Olá, digite sua idade abaixo por favor" << endl; // mensagem na tela
  
  int idade; // Declara a variável idade
   
  cin >> idade; 
   
   if ( idade < 18 )
  
  cout << "Você é jovem" << endl;
  
  else if (idade <= 65)
  
  cout << "Você é adulto" << endl;
  
  else 
  
  cout << "Você é idoso" << endl;
  
  }