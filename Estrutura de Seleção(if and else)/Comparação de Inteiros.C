#include<iostream>

// Utilizando if e else
	
using namespace std;

int main() 

{
	int n,m; // Declarando as variáveis
	cout << "Digite dois numeros inteiros" << endl; // mensagem na tela
	cin >> n,m;
	
	if ( n > m ) // condição inical do if
		cout << m << "é o menor," << endl;
	else { // caso m > n, aparecerá a mensagem abaixo
		cout << n << " é o maior" << endl;
	}
   	
	