#include<iostream>

using namespace std;

int main () {

//Declarando as variaveis
 float notaPort,notaLeg,notaMat,notaConhe,mediaCanditado,somaNotas,mediaGlobal;

 int i;
 
 i=1;

 mediaGlobal=0;
 
//loop para o número de canditados
 while(i <=2 ) {

    //mensagens na tela
    
	cout << ("Digite a nota do canditado") <<endl; 
 
    cout << "Insira a nota em português (0 a 10)" << endl;
    cin >> notaPort;

   
    cout << "Insira a nota em legislação (0 a 10)" << endl;
    cin >> notaLeg;

  
    cout << "Insira a nota em conhecimentos gerais (0 a 10)" << endl;
    cin >> notaConhe;
    
    cout << "Insira a nota em matematica (0 a 10) " << endl;
    cin  >> notaMat;
    
	//cálculos das medias
    somaNotas = notaPort + notaLeg + notaMat + notaConhe;
    
    mediaCanditado = somaNotas/4;
    
    mediaGlobal = mediaCanditado/4;
    
  
 
      //seleção das notas
       if ( (notaPort > 4) && (notaMat > 4) && (notaLeg > 4) && (notaConhe > 4) )
    
        {
        if( mediaCanditado > 5)
        cout << "O canditado está aprovado no concurso com media " << mediaCanditado << endl;
		}
        
		else 
        cout << "O canditado está reprovado no concurso" << endl;
        
      //iteração para o loop não ser infinito
      i++; 
 } 
      //mensagem final
	  cout << "A media global é " << mediaGlobal << endl;


}
    