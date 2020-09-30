#include<iostream>


//Criando um programa para calcular o produto

using namespace std;

int main( )

{ 
  int a,b,c, produto; //declaração das variáveis
  
  cout << "Digite o primeiro numero inteiro:" << endl;
  cin >> a; 
  
  cout << "Digite o segundo numero inteiro:" << endl;
  cin >> b;
  cout << "Digite o terceiro numero inteiro:" << endl; 
  
  cin >> c;
  produto = a*b*c;
  
  cout << "O produto entre eles é" << produto << endl;
  
 return 0;

} 