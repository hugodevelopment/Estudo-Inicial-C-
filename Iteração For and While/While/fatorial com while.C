

#include<iostream>

using namespace std;


int main()
{

int num, fatorial, i , x;

cout << "Digite um número inteiro positivo: " << endl;
cin >> num;

i=num;
x=num;
fatorial = num;

for(i; i>1; i--)
{
     x--;
	 fatorial = fatorial*x;
}	 

if(num == 0)
cout << "O fatorial de " << num << "é" << num << endl;
else
cout << "O fatorial de " << num << " é " << fatorial << endl;
}
