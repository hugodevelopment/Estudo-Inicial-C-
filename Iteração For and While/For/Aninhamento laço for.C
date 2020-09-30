#include<iomanip> //define setw
#include <iostream> // define cout

using namespace std;

int main()
{  // Alinhando o laço for

  
    cout<<"Este programa imprime uma tabela de multiplicação";
    cout <<""<< endl;
    for(int x=1; x <=10; x++) // for para a coluna horizontal
    { 
        for (int y =1; y <=10; y++) // for para a coluna vertical
        cout << setw(5) << x*y; // setw(5) configura o campo de saida em 5 colunas
        cout << endl; //Neste caso o espaçamento será vertical 
        
    }    
 
    return 0;
}
