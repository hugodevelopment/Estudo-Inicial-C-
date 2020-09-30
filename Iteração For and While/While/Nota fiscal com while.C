//Suponha que um caixa disponha das notas de 1, 2, 10, 50 e 100 reais. 
//Considerando que alguém está pagando uma compra, escreva um programa em C que mostre o número mínimo de notas que o caixa deve fornecer como troco. 
//Mostre também o valor da compra, valor do troco, e a quantidade de cada nota que compõe o troco. Não utilize centavos.



// Sempre é recomendável usar chaves no if

#include<iostream>

using namespace std;
int main() {

float um, dois, dez, cinquenta, cem, compra, valor,troco,notas, quant;

um=dois=dez=cinquenta=cem=compra=valor=troco=notas=0;


cout << "Digite a quantidade de itens" << endl;
cin >> quant;

cout << "Digite o preço da compra" << endl;
cin >> compra;

cout << "Digite o valor pago " << endl;
cin >> valor;

troco = valor - compra*quant;

cout << "O valor do troco é " << troco << endl;


// Se o troco for diferente de zero, o while irá funcionar
while(troco !=0)
{

// Vai calcular um por um 
if(troco >= 100)
 {
   troco = troco - 100;
   cem ++;
   notas ++;
  }
// Calculando o troco caso maior ou igual a 50
else if (troco >= 50)  

{
   troco = troco - 50;
   cinquenta ++;
   notas ++;
  }

//Calculando o troco caso maior ou igual a 10
else if (troco >= 10)  

{
   troco = troco - 10;
   dez ++;
   notas ++;
  }

//Calculando o troco caso maior ou igual a 2
else if (troco >= 2)  

{
   troco = troco - 2;
   dois ++;
   notas ++;
  }

// Calculando o troco caso maior ou igual a 1
else 
{
troco = troco - 1;    
um++;
notas++;
}

}

//Mensagens após o while

cout << " \n O numero de notas usadas foi " << notas << endl;

cout << " \n Foram usadas " << cem << " de cem reais " << endl;

cout <<" \n Foram usadas " << cinquenta << " de cinquenta reais " << endl;

cout << " \n Foram usadas " << dez << " de dez reais " << endl;

cout << " \n Foram usadas " << dois << " de dois reais " << endl;

cout << " \n Foram usadas " << um << " de um real " << endl;
}



