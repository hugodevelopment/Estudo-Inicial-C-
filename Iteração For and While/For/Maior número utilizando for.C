#include <iostream>

using namespace std;

int main()
{
    long n, max;
    cout << "Insira inteiros positivos (0 para sair):" << endl; // mesangem na tela, nesta caso ao apertar 0 o loop finaliza
    cin >> n; // operador de entrada
    
    for (max=n; n > 0;) // max será igual a n, sendo n um numero inteiro positivo
    {
         if (n > max) max = n; // se n for maior que o maximo anterior, teremos um novo maximo que assumirá o valor de n
         cin >> n; // o operador receberá um n novo até que seja finalidado com o 0
    }
    cout << "maior = " << max << endl;
}
    