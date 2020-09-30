#include<iostream>

using namespace std;

int main ()

{  cout << "Este programa nos dirá se um triângulo de lados a,b,c é equilátero, isosceles ou escaleno" << endl;
   
   char a,b,c; 
   cin >> a >> b >> c;
   cout << "Os lados a,b,c são iguais ? (s|n)" << endl;
   
   if ('s') 
   cout << "O triângulo é equilátero" << endl;
   
   else if (a != b || b != c)
   cout << "O triangulo é isosceles" << endl;
   
   else  
   cout << "O triângulo é escaleno" << endl;
   
   }
   
  