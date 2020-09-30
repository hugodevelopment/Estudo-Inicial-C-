#include<iostream>
//Utilizando comando if, operadores
//relacionaise operadores de igualdade
using namespace std;

int main( )

{ 
  int num1, num2;
  
  cout << "Digite dois numeros inteiros" << endl;
  cout << "E direi as relações entre eles" << endl;
  
  cin >> num1 >> num2; // não precisa colocar o endl;
  
  if ( num1 == num2 ) // não precisa colocar ; após o partenteses
	  cout << num1 << "é igual ao:" << num2 << endl:
  if  ( num1!= num2 )
	  cout << num1 << "não é igual ao:" << num2 << endl;
  if ( num1 < num2 ) 
	  cout << num1 << "é memor que:" << num2 << endl;
  if ( num1 > num2 )
	  cout << num1 << "é maior que:" << num2 << endl;
  if ( num1 <= num2 )
	  cout << num1 << "é menor que ou igual a:" << num2 << endl;
  if ( num1 >= num2 ) 
      cout << num1 << "é maior que ou igual a:" << num2 << endl;
  
  return 0; // diz que o programa terminou bem
 } 
  

