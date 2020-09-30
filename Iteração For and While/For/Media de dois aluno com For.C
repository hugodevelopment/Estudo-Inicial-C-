#include <iostream>

using namespace std;

int main()
{
    float nota1, nota2, mediadoaluno, somadasnotas=0, somadaclasse; //Declando as variáveis float
   
    float mediadaclasse; // Declarando a variávei mediadaclasse
   
    int i, aprovado=0, reprovado=0, exame=0; // Declrando as variaveis inteiras que seram interadas
   
    for (i=1; i<=2; i++){ // Criando um loop para dois alunos , no caso i <= 2;

    cout <<"Insira  a nota da p1"; // Mensagem que aparecerá tela para digitar a nota de aluno
    cin  >> nota1; // operador de entrada para a nota1
     
    cout << "Insira  a nota da p2"; // Mensagem que aparecerá tela para digitar a nota de aluno
    cin >> nota2; // operador de entrada para a nota1
   
    mediadoaluno = ((nota1 + nota2) / 2); // calculadndo a mediadoaluno
   
    //Criando um if para a nota
    if (mediadoaluno >= 7)
    {
     cout <<"O aluno está aprovado" << endl;
     aprovado ++;
     
    }
    //Caso a nota seja entre 3 e 7
    else if (mediadoaluno >=3 && mediadoaluno <=7)
    {
     cout <<"O aluno está de recuperacão" << endl;
     reprovado ++;
     }
     
    //Caso não seja nenhuma das opções anteriores
    else
    {
     cout <<"O aluno está reprovado" << endl;
     exame ++;
    }
}
    
    // Mensagem que aparecerá com as variáveis iteradas após o for
    cout <<"O numero de aluno está aprovados é" << aprovado << endl;
    //cin >> aprovado;
 
   
    cout <<"O numero de aluno está reprovados é" << reprovado << endl;
    //cin >> reprovado;
   
  
   
    cout << "O numero de alunos em recuperacão é "<< exame << endl;
//    cin >> exame;
        
   
    return 0;
}