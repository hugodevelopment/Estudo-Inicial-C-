#include <iostream>

using namespace std;

int main()
{
    int num, soma,menor,cont;
    float media;
    
    soma=0;     // inicializando a variável para soma
    menor=100; //inicializando uma variável para receber o menor numero
    cont = 0; // inicializando a variavel para iterar os numeros entre 5 e 10
    
    for (int i=0; i < 5; i++) // Um laço para determinar qdo o i chegar a 5 o laço terminará
    {
		
		//Mensagem na tela
        cout << "Insira 5 numeros aleatoriamente por favor"<< endl;
        cin >> num;
        
		
		// if para determinar o menor número
        if(num < menor)
        {
            menor = num;
        }
        
		// if para determinar a qtd de numero entre 5 e 10 utilizando o operador lógico E
        if ( num > 5 && num  < 10)
        {
            cont++;
        }
        //media
        soma = soma + num;
        media = soma/5;
    }
    
	// mensagens na tela ao final
    cout << "O menor numero é " << menor << endl;
    cout << " A media deles é " << media << endl;
    cout << "a quantidade de numero entre 5 e 10 é " << cont << endl;
}
