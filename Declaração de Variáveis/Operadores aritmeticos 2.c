#include <iostream>

using namespace std;

int main ()

{
	int m,n; // declaração das variaveis inteiras
	cout << "insira dois numeros inteiros:" // mensagem que aparecerá na tela
	cin >> m >> n; // operador de entrada
    cout << " Os numeros inteiros são": << m << "e" << n;	
	cout << " A soma é:" << (m + n) << endl;
	cout << " A diferença é" << (m - n) << endl;
    cout << " O produto é" << (m * n) << endl;
    cout << " A divisão é" << (m/n) << endl;
    cout << " O resto é" << (m % n) << endl; 	

}	