#include <iostream>

using namespace std;

int main()
{   
    int n,min;
    cout <<"Insira numero inteiros positivos (0 para terminar)" << endl;
    cin  >> n;
    
    for (n=min; n>0; )
{
        if (n<min) min = n;
        cin >> n;
}    
    cout<<"O minimo dos numeros escolhido eh "<< min << endl; 
    return 0;
}