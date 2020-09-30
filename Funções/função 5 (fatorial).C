// função fatorial !5 = (5)(4)(3)(2)(1) = 120

long fact (int n)

{
  // retorna n! = n*(n-1)*(n-2)*....(2)(1)
  if (n < 0 ) return 0;
  
  int f =1;  
  while (n > 1)
  f *= n--;
  return f;
}

long fact(int);

int main ()
{
   // testa a função fatorial():
   for(int i =- 1; i < 6; i++)
     cout << "" << fact(i);
     cout << endl;

}   

