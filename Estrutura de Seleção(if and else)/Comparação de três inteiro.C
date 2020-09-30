#include<iostream>

// Utilizando if e else
	
using namespace std;

int main() 

{
	int n1,n2,n3 //Declarando as variáveis
	cout << "Insira três numeros inteiros" << endl;
	cin >> n1 >> n2 >> n3; 
	
	 int min = n1;   // agora min <= 1
	 if (n2 < min) min = n2; // agora min <=  e min <= n2
	 if (n3 < min) min = n3; // agora min <= , min <= n2 e min <=3 
	 
	 cout << "O menor é" << min << end;
	 
}
	
	