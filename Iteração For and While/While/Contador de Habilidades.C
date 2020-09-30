#include <iostream>

using namespace std;

int main()
{   
    char escolha; // Declara a variável n inteira
    int n;
    
    int cont1 = 0;
    int cont2 = 0;
    
    while(n >= 0)
    {
        cout << "Insira i para ingles e p para pacote office (ou negativo para sair) " << endl;
        cin >>  escolha >> n;  
          
          if (escolha == "i")
          { 
              cont1 ++;
          }
          
          if (escolha == "p")
          { 
              cont2 ++;
          }
          
          
    }      
        cout << "A quantidade de numeros divisiveis por 3 é " << cont1 << endl;
        cout << "A quantidade de numeros divisiveis por 7 é " << cont2 << endl;
        
	 
    return 0;
}