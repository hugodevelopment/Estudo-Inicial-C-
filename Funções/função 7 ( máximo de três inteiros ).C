
#include <iostream>

using namespace std;

int maximo(int, int, int);

int main()
{
 int a,b,c;
 
 cout << "Forneça três inteiros por favor" << endl;
 cin >> a >> b >> c;
 
 cout << " O maior dos três inteiros é " << maximo(a,b,c) << endl;
 
 return 0;
 
 }
 
 int maximo ( int x, int y , int z)
 
 {
   int max = x;
   
    if ( y > max )
      max = y;
	
	if( z > max )
	  max = z;
}	 
   
