#include <iostream>

using namespace std;

int main()
{
    float x; // declara a variável float, ie, aceita numero com casas decimais
    
    cout<<"Insira um numero positivo:"; // Declara a mensagem na tela
    
    cin >> x; // recebe o valor escolhido 
    int n = 1; // n começará com o valor de 1 para iteração
    
     while(n*n <= x) // o loop n*n continuará até ser menor ou igual a x 
     ++n; // após a condição do while ser atendida é feita a iteração
    
    //Mensagem final na tela
    cout << "A raiz quadrada do inteiro de " << x << " é " << n-1 << endl;
}
