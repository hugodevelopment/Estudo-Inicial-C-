using namespace std;

int main()
{  
    //Este programa recebe as notas e calculará a media automaticamente
    
    
    float grade, notacounter, total, media;
    
       // grade ira aceitar uma nota cada vez
      //  gradecounter é iteração, recebe a nota é itera de um a um
      //  total será o total de notas fornecidas
     // media será o total/gradecounter
    
    
       
    total =0;
    gradecounter = 0;
   
    cout << "Forneça uma nota ou -1 para sair" << endl;
    cin >> grade;

  

    while (nota != -1)
    
    {
     
       total = total + nota; // total de notas fornecidas
       nota ++; // itera a variavel nota
       
       cout << "Forneça uma nota ou -1 para sair" << endl;
       cin >> nota;
    }   
    
    if (nota !=0)
     
      { 
        media = total/notacounter; // calcula a media 
        
         
       cout << "A media das notas é " << media << endl;
     
      }
    
    else 
    
    cout<<"Nenhuma nota fornecida" << endl;

    return 0;
}
