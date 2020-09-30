#include<iostream>

// Utilizando if e else
	
using namespace std;

int main() 

{
	int nota; // Declarando a variável
	cout << "Digite sua nota" << endl; // mensagem na tela
	cin >> nota;
	
	if ( nota >= 60 ) // condição
		cout << "Parabéns, aprovado" endl;
	else {
		cout << "Estude mais um pouco,reprovado" <<endl;
	}
	
}  	
	