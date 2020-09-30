#include<iostream>

using namespace std;

int main ()

{
	char ans; // Declara um caracter
	cout << "Você está escrito na matéria (s/n):" << endl; // Pergunta que aparecerá na tela
-----------------------------------------*---------------------------------------------------*-------------------------------------------------	
	cin >> ans; // Operador de entrada p/ variável
	if (ans == 's' || ans == 'S') // Ele aceita qualquer caracter para não e apenas s e  S para sim
----------------------------------------*-----------------------------------------------------*-----------------------------------------------	
     cout << "Você está inscrito na matéria:" << endl;
     else cout << "Você não está inscrito na matéria" << endl;
}	 