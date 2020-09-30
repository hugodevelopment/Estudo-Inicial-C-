#include <iostream>

using namespace std;

int main()
{   
    int n; // Declara a variável n inteira
    int quant1 = 0;
    int quant2 = 0;
    
    while(n >= 0)
    {
        cout << "Insira um numero inteiro positivo (ou negativo para sair)" << endl;
        cin >>  n;  
          
          if ((n % 3) == 0)
          { 
              quant1 ++;
          }
          
          if ((n % 7) == 0)
          { 
              quant2 ++;
          }
          
          
    }      
        cout << "A quantidade de numeros divisiveis por 3 é " << quant1 << endl;
        cout << "A quantidade de numeros divisiveis por 7 é " << quant2 << endl;
        
	 
    return 0;
}