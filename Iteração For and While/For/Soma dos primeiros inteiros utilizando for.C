#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Este programa mostra o somatório dos primeiros numeros de um inteiro, por exemplo se o n=10 será ";
    
    cout <<" 1+2+3+4+5+6+7+8+9+10";
    
    cout <<""<< endl;
    
    cout <<""<< endl;
    
    cout <<"Insira um numero inteiro positivo:";
    
    cin >> n; 
    
    long sum = 0;
    
    for (int i=1; i <= n; i++)
    sum += i;
    
    cout << "A soma dos primeiros  "  << n  << " inteiros é " << sum;
}
    
