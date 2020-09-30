#include<iostream>

using namespace std;

int main ()

{
   int nota; 
   
   cout << "Qual foi a sua nota na prova de hoje?" << endl;
   cin >> nota;
   
   if (nota > 90) 
   cout << "Ótima nota, parabéns" << endl;
   
   else if ( nota >= 80) 
   cout << "Nota muito boa, parabéns" << endl;
   
   else if ( nota >= 70) 
   cout << "Você está no caminho certo, parabéns" << endl;
   
   else if ( nota >= 60) 
   cout << " Falta melhorar um pouco, mas está indo bem" << endl;
   
   else if ( nota >= 0) 
   cout << " Tem que melhorar!"<< endl;
   
   }
   
  