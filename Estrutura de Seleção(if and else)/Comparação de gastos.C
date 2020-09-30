#include<iostream>

// Utilizando if e else
	
using namespace std;

int main() 

{
	int n1; //Declarando as variáveis
	
	cout << "Insira quanto você gastou no mês" << endl;
	
	 cin >> n1; 
	 if (n1 <= 100) // condição inicial do if
    
     cout << "Você está controlando seus gastos" << endl; 
	 
	 else { // caso a condição do if não seja satisfeita
		 
     cout << "Você gastou acima de 100, tome cuidado com os gastos" << endl;
	 }
}