#include<cmath>
#include<iostream>

using namespace std;

int cube(int x)

{
	return x*x*x;

}	

int main() 
{
   int n = 1;
   
   // terminará de ler após raiz cúbica de 0 
   
   while(n!= 0)
   
   {
	   cin >> n;
	   cout << "\tcubo(" << n << ") = " << cube(n) << endl;
   }   
 
}