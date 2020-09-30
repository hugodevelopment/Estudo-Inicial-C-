#include <iostream>

using namespace std;

// uma função que retorna datas

void printDate(int, int, int);

int main()
{
    int month, day, year;
    
    do {
        cin >> month >> day >> year;
        printDate(month, day, year);
         }
    while( month > 0 );
    
}

void printDate(int m, int d , int y)
{
    // imprime a data determinada na forma literal:
    
    if(m < 1 || m > 12 || d < 1 || d > 31 || y < 0 )
    {
        cerr << "Erro: Parametro fora do intervalo" << endl;
        return;
    }
    
    switch(m)
    {
    case1:
    cout <<"Janeiro" << endl;
    break;
    
    case2:
    cout <<"Fevereiro" << endl;
    break; 
    
    case3:
    cout <<"Março"<< endl;
    break;
    
    case4:
    cout <<"Abril" << endl;
    break;
    
    case5:
    cout <<"Maio" << endl;
    break;
    
    case6:
    cout <<"Junho" << endl;
    break;
    
    case7:
    cout <<"Julho" << endl;
    break;
    
    case8:
    cout <<"Agosto" << endl;
    break;
    
    case9:
    cout <<"Setembro" << endl;
    break;
    
    case10:
    cout <<"Outubro" << endl;
    break;
    
    case11:
    cout <<"Novembro" << endl;
    break;
    
    case12:
    cout <<"Dezembro" << endl;
    break;
    
        
    }
    
    cout << d << ", " << y << endl;
}
  
  
  
  
  
  
  
  

 

