#include<iostream>

using namespace std;

int main () {

 float Precofeijao,Precoarroz,Precocerveja,totalCerveja,totalFeijao,totalArroz,totalMercado;

 int quant1,quant2,quant3,i;


 Precoarroz = 2,59;
 Precofeijao = 6,00;
 Precocerveja = 3,99;

 for(i=1; i <= 1; i++) {

 
    cout << "Insira a quantidade comprada de feijão" << endl;
    cin >> quant1;


   
    cout << "Insira a quantidade comprada de arroz" << endl;
    cin >> quant2;

  
    cout << "Insira a quantidade comprada de cerveja" << endl;
    cin >> quant3;
    
    totalFeijao = Precofeijao * quant1;
    totalArroz  = Precoarroz * quant2;
    totalCerveja = Precocerveja * quant3;
    totalMercado = totalFeijao + totalArroz + totalCerveja;
    
    
    
}


    cout << " O preco total gasto em feijao é " << totalFeijao << endl;
    cout << " O preco total gasto em arroz é " << totalArroz << endl;
    cout << " O preco total gasto em cerveja é " << totalCerveja << endl;
    cout << " O preco total gasto no mercado" << totalMercado << endl;
}