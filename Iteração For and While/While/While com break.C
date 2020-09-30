
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // Uma vantagem do uso do break é que ela termina o laço imediatamente, sem ter que parar a execução
    int n, i=1; // declarando a variável e o iterador
    
    cout<<"Insira um numero positivo:"; // Mensagem que aparecerá na tela
    cin >> n; // operador de entrada
    long sum=0;
     while (true) // enquanto a condição for verdadeira
     { 
       if (i > n) break;  // para o laço imediatamente
        sum += i++;
       }
     cout << " A soma dos primeiros numeros " << n << " é " << sum; 
    return 0;
}