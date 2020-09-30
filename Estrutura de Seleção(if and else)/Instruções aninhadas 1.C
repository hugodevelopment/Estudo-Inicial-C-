#include<iostream>

using namespace std;

// Este programa nos dirá o menor de tres inteiros

int main ()
{ 
 int n1, n2, n3;

cout << "Insira três números"<< endl;
cin >> n1 >> n2 >> n3;

if(n1 < n2) 
if(n1 < n3)

cout << "O menor é:" << n1 << endl;
else << "O menor é:" << n3 << endl;
else // n1 >= n2

if (n2 < n3) 
cout << "O menor é:" << n2 << endl;
else 
cout << "O menor é:" << n3 << endl;
}

