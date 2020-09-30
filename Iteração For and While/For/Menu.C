#include <iostream>

using namespace std;

int main () {
	
	
    int grade,(){
        int a,b;
        aCount =0,
		bCount =0,
		cCount=0,
		dCount=0,
		eCount=0,
		fCount=0;
		
    
    
        cout << "Fornceça as notas representadas por letras " << endl << "Digite o caractere EOF para terminar a entrada de dados" << endl; 
      
    }


int main(){
    
    while((grade =cin.get()) !=EOF){

        
        switch(grade){
        case "A":
		case "a":
		 ++aCount;
		 break;
        
		 case "B":
		 case "b":
		 ++bCount;
		 break;
		 
		  case "D":
		  case "d":
		  ++dCount;
		  break;
		
		 case "E":
		 case "e":
		 ++eCount;
		 break;
		
		
		 case "F":
		 case "f":
		 ++fCount;
		 break;
		
		

       
        
        default:
            
			cout << "Fornecida nota representada por letra incorreta." << "Digite uma nova nota" << endl; 
              break;
            }
        }
    }
	
	cout << "\n \n Os totais para cada nota representada por letras são: "
	<< "\nA: " << aCount
	<< "\nB: " << bCount
	<< "\nC: " << cCount
	<< "\nD: " << dCount
	<< "\nE: " << eCount
	<< "\nF: " << fCount
    return 0;
}
