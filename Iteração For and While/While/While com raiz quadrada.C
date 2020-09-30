#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    
    double x;
    cout<<"Insira um numero positivo:"; // Mensagem que aparecerá na tela
    cin >> x; // operador de entrada
     while (x > 0) // enquanto o numero escolhido for maior que 0, o laço continuará
     { 
       cout << "sqrt("<< x <<") = " << sqrt(x) << endl;
       cout << "Insira outro numero positivo (ou 0 para sair):" << endl;
       cin >> x;
     }

    return 0;
}