/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{   
    int n; // Declara a variável n
    int resto;
 
 
   
    while (n%2 == 0) // se o resto for igual a zero, aparecerá a mensagem abaixo
{   
    cout<<"Insira um numero, verificaremos se é par ou impar:"; // mensagem na tela
    cin >> n; // operador de entrada
    
	cout<<"O numero" << n << "é par" << endl;
    cout <<"" << endl;
    
	cout<<"Insira outro numero par ou um impar para sair";
} 

    return 0;
}