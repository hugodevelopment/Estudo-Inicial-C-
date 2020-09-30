#include<iostream>

// Utilizando condições compostas.
// Este programa utiliza condições lógicas para determinar o menor de três inteiros

// P && Q é avaliado como verdadeiro apenas se P e Q forem ambos verdadeiros
// P || Q é avalidado como falso apenas se P e Q forem ambos falsos
	
	
	
using namespace std;

int main ()

{ int n1,n2,n3;
  cout << "Insire três inteiros:" << endl;
  cin >> n1 >> n2 >> n3;

if (n1 <= n2 && n1 <= n3) cout << "O menor é:" << n1 << endl;
if (n2 <= n1 && n2 <= n3) cout << "O menor é:" << n2 << endl;
if (n3 <= n1 && n3 <= n2) cout << "O menor é:" << n3 << endl;

}   