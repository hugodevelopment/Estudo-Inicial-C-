#include <iostream>

using namespace std;

int main()
{   
    int peso = 0; // Declara a variável peso com o valor inicial 0 para somarmos a cada laço
    int pesoTotal = 0; // Declara a variável pesoTotal com o valor inical 0 para somarmos a cada laço
    int num = 0;   // Declara a variável para o numero de pessoas no elevador
   
   
    while( peso != -1) // sendo peso uma variável postiva, ao escolhermos -1 o laço para
{  
        
	    pesoTotal = peso + pesoTotal; // esquação para o peso total
    
    cout<< "Digite o peso das pessoas presentes no elevador ou digite -1 para terminar:"; // mensagem na tela
    cin >> peso;
    
    if(peso != -1) // caso o peso seja diferente de -1, a contagem prossegue. Se for -1 o laço termina
    { 
        num ++;
    }
    
 }   
    cout<< "O pesoTotal é " << pesoTotal << endl; // Mensagem na tela com as variáveis iteradas
    cout << "O numero de pessoas no elevador é " << num << endl; // Mensagem na tela com as variáveis iteradas

}