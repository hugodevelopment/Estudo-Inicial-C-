#include <iostream>

using namespace std;

int main()
{
    int n, sum=0, i=0;
    
    cout<<"Olá, seu merda, insira um numero inteiro positivo" << endl;
    cin >> n;
    while (++i < n)
    sum += i++;
     
cout<<"A soma dos numeros inteiros é" << n << " e os primeiros quadrados dos numeros é " << sum <<  endl;
     
}