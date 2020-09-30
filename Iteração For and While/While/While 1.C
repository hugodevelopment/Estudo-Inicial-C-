#include <iostream>

using namespace std;

int main()
{
	cout << "Este programa calcula a soma de um numero inteiro consecutivo, 1+2+3+4+5....+n , sendo n o numero de entrada << endl;	
     int n, i=1; // declarando a variável n e o iterador i
     
     cout << "Insire um número inteiro:"; // mensagem que aparecerá na tela
     cin >> n; // operador de entrada
     
     long sum=0; // declarando a variavel sum, sem long não funciona
     while(i<=n) // toda vez que while iterar, i é incrementado e adicionada a sum
     
     sum += i++; // instrução da soma 
     cout << "A soma dos primeiros inteiros " << n << " é "<< sum; // mensagem final
}