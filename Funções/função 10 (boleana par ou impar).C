#include<iostream>

#using namespacing std;
 
 
 boll isPar(int num);
 
 
 
 int main () 
 
 {
 
  int num;
  cout << "Digite um numero" << endl
  cin >> num;
  
  if (isPar(num))
  {
    cout << "Numero" << num << " é par " << endl;
  }

  else
  {
    cout << "NUmero << num << " é impar" << endl;  
  }
	
  system("Pause")
  return 0;
 
 }  
 
 boll isPar(int num)
 {
   if(num %2 == 0)
    return true;
	
	return false;
	
}	