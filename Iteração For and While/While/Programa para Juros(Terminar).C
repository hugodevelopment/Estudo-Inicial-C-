#include <iostream>

using namespace std;


int main (){
    
    
    float fatura1, fatura2,dias,multa,multa2, juro, total;
    
    int n1,n2;
    int taxa = 2;
	float juros = 0.033;
    
	cout << "Digite 1 p/ conta de luz e 0 p/ condominio" << endl;
	cin >> n1;

	
	
	if (n1 == 1) 
	
	{
		
    cout << "Digite 2 p/PAGO e 3 para PENDENTE" << endl;
    cin >> n;
         
    
        if (n2 == 2){
     
            
            cout << "Digite o valor da fatura do mês atual" << endl;
            cin >> fatura1;
            
			cout << "Digite o valor da fatura do mês passado" << endl;
            cin >> fatura2;			
			
            cout << "Digite os dias de atraso referentes a fatura passada " << endl;
            cin >> dias;
            
            multa = ((fatura2 * taxa) / 100);
			
			juro  = ((fatura2 * juros) / 100) * dias; 
			
			total = ((multa + juros * fatura1)/100);
            
             cout << "O valor incidente da multa de 2% sobre o valor da fatura atual é R$ " << multa <<  endl;
            
			 cout << "O valor do juros de 1% ao mês referente a fatura passado presente na fatura atual é R$ " << juro <<  endl;
			
			cout << "A porcentagem de juros e multa no valor atual da sua conta é " << total <<  endl;
            
              }
        
            else
             
			 {  
            cout << "foi pago" << endl;
            }
    }
	
	else if (n1 == 0)
	{
		
	        cout << "Digite o valor da fatura do condominio do mês atual" << endl;
            cin >> fatura3;
			
			multa2 = ((fatura3 * taxa) / 100) + fatura3;
			
			cout << "O valor incidente da multa de 2% sobre o valor da próxima fatura do condominio será é R$ " << multa2 <<  endl;
	}		
		
			
	
	
    return 0;
}