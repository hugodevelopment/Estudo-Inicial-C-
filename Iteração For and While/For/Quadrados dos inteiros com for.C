#include <iostream>

using namespace std;

int main()
{    
    int n, sum=0; // declarando a variável n e a variável sum, importante começar com 0.
    
    cout <<"Insira um número inteiro positivo" << endl; // mensagem que aparecerá na tela para o usuário
    cin >> n; // operador de entrada
    
    // um loop para a quantidade de numeros. Int i define onde a iteração começa, 
    // i<= n é a condição,  i++ é a iteração 
    for (int i = 2; i <= n; i++)
    
    sum += i*i; // aqui será feita a soma dos quadrados dos numeros
    
    // mensagem final na tela
    cout << "A soma dos primeiros inteiros é " << n << " A soma dos primeiros quadrados é " << sum << endl;

    return 0;
}
