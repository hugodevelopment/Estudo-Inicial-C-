#include <iostream>

using namespace std;

int main()
{
    long n;
    cout << "Insira um numero positivo" << endl;
    cin >> n;
    
    if(n < 2)
    
    cout << n << "não é primo." << endl;
    
    else if (n < 4)
    
    cout << n << " é primo." << endl;
    
    else if(n%2 ==0)
    
    cout << n << "= 2* " << n/2 << endl;
    
    else
    
    {
        for (int d=3; d <= n/2; d+=2)
        if(n%d ==0)
        { cout << n <<  " = " << "*" << n/d << endl;
         exit(0);
         
    }
    
    cout << n << " é primo " << endl;
    };
 }    
    
    

